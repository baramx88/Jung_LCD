#ifndef TOUCH_H
#define TOUCH_H

#include <Arduino.h>
#include <lvgl.h>

// Touch configuration
// GT911 capacitive touch
#define TOUCH_MODULES_GT911
#define TOUCH_MODULE_ADDR GT911_SLAVE_ADDRESS1
#define TOUCH_SCL 4
#define TOUCH_SDA 8
#define TOUCH_RES 38
#define TOUCH_INT 3

// Function declarations
void touch_init(int16_t w, int16_t h, uint8_t r);
bool touch_has_signal();
bool touch_touched();
bool touch_released();
void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data);
void touch_task(void *pvParameters);

// External variables
extern int16_t touch_max_x, touch_max_y;
extern int16_t touch_raw_x, touch_raw_y;
extern int16_t touch_last_x, touch_last_y;
extern bool touch_swap_xy;
extern int16_t touch_map_x1, touch_map_x2, touch_map_y1, touch_map_y2;
extern SemaphoreHandle_t touchMutex;

#endif // TOUCH_H