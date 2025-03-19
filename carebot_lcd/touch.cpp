#include "touch.h"
#include "common.h"

#if defined(TOUCH_MODULES_GT911)
#include <Wire.h>
#include <TouchLib.h>
TouchLib touch(Wire, TOUCH_SDA, TOUCH_SCL, TOUCH_MODULE_ADDR);
#endif

// Touch variables
int16_t touch_max_x = 0, touch_max_y = 0;
int16_t touch_raw_x = 0, touch_raw_y = 0;
int16_t touch_last_x = 0, touch_last_y = 0;
bool touch_swap_xy = false;
int16_t touch_map_x1 = -1;
int16_t touch_map_x2 = -1;
int16_t touch_map_y1 = -1;
int16_t touch_map_y2 = -1;
SemaphoreHandle_t touchMutex = NULL;

// Initialize touch controller
void touch_init(int16_t w, int16_t h, uint8_t r) {
    logMessage("Touch", LOG_LEVEL_INFO, "Initializing touch controller");
    
    // Create touch mutex if not already created
    if (touchMutex == NULL) {
        touchMutex = xSemaphoreCreateMutex();
        if (touchMutex == NULL) {
            logMessage("Touch", LOG_LEVEL_INFO, "Failed to create touch mutex!");
            return;
        }
    }
    
    touch_max_x = w - 1;
    touch_max_y = h - 1;
    
    if (touch_map_x1 == -1) {
        switch (r) {
        case 3:
            touch_swap_xy = true;
            touch_map_x1 = touch_max_x;
            touch_map_x2 = 0;
            touch_map_y1 = 0;
            touch_map_y2 = touch_max_y;
            break;
        case 2:
            touch_swap_xy = false;
            touch_map_x1 = touch_max_x;
            touch_map_x2 = 0;
            touch_map_y1 = touch_max_y;
            touch_map_y2 = 0;
            break;
        case 1:
            touch_swap_xy = true;
            touch_map_x1 = 0;
            touch_map_x2 = touch_max_x;
            touch_map_y1 = touch_max_y;
            touch_map_y2 = 0;
            break;
        default: // case 0:
            touch_swap_xy = false;
            touch_map_x1 = 0;
            touch_map_x2 = touch_max_x;
            touch_map_y1 = 0;
            touch_map_y2 = touch_max_y;
            break;
        }
    }

#if defined(TOUCH_MODULES_GT911)
    // Reset touchscreen
#if (TOUCH_RES > 0)
    pinMode(TOUCH_RES, OUTPUT);
    digitalWrite(TOUCH_RES, 0);
    delay(200);
    digitalWrite(TOUCH_RES, 1);
    delay(200);
#endif
    Wire.begin(TOUCH_SDA, TOUCH_SCL);
    if (touch.init()) {
        logMessage("Touch", LOG_LEVEL_INFO, "Touch controller initialized successfully");
    } else {
        logMessage("Touch", LOG_LEVEL_INFO, "Touch controller initialization failed");
    }
#endif

    // Register touch input device with LVGL
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = my_touchpad_read;
    lv_indev_drv_register(&indev_drv);
}

// Check if touch device has signal
bool touch_has_signal() {
#if defined(TOUCH_MODULES_GT911)
    // For capacitive touch, always return true (polling based)
    return true;
#endif

    return false;
}

// Translate raw touch coordinates to display coordinates
void translate_touch_raw() {
    if (touch_swap_xy) {
        touch_last_x = map(touch_raw_y, touch_map_x1, touch_map_x2, 0, touch_max_x);
        touch_last_y = map(touch_raw_x, touch_map_y1, touch_map_y2, 0, touch_max_y);
    } else {
        touch_last_x = map(touch_raw_x, touch_map_x1, touch_map_x2, 0, touch_max_x);
        touch_last_y = map(touch_raw_y, touch_map_y1, touch_map_y2, 0, touch_max_y);
    }
}

// Check if touch is active (touched)
bool touch_touched() {
#if defined(TOUCH_MODULES_GT911)
    if (touch.read()) {
        TP_Point t = touch.getPoint(0);
        touch_raw_x = t.x;
        touch_raw_y = t.y;

        translate_touch_raw();
        return true;
    }
#endif

    return false;
}

// Check if touch has been released
bool touch_released() {
#if defined(TOUCH_MODULES_GT911)
    return false;  // GT911 doesn't support release detection in this implementation
#endif

    return false;
}

// LVGL touchpad read callback
void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data) {
    // Take touch mutex to ensure safe access
    if (xSemaphoreTake(touchMutex, pdMS_TO_TICKS(5)) == pdTRUE) {
        if (touch_has_signal()) {
            if (touch_touched()) {
                data->state = LV_INDEV_STATE_PR;
                data->point.x = touch_last_x;
                data->point.y = touch_last_y;
            } else if (touch_released()) {
                data->state = LV_INDEV_STATE_REL;
            } else {
                data->state = LV_INDEV_STATE_REL;
            }
        } else {
            data->state = LV_INDEV_STATE_REL;
        }
        
        // Release touch mutex
        xSemaphoreGive(touchMutex);
    } else {
        // If we can't get the mutex, assume released state
        data->state = LV_INDEV_STATE_REL;
    }
}

// Touch polling task
void touch_task(void *pvParameters) {
    logMessage("Touch", LOG_LEVEL_INFO, "Touch task started");
    
    for (;;) {
        // Take mutex before accessing touch
        if (xSemaphoreTake(touchMutex, pdMS_TO_TICKS(5)) == pdTRUE) {
            // Poll touch device
            touch_touched();
            xSemaphoreGive(touchMutex);
        }
        
        // Small delay to avoid hogging CPU
        vTaskDelay(pdMS_TO_TICKS(10));
    }
}