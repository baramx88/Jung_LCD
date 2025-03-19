#ifndef DISPLAY_H
#define DISPLAY_H

#include <Arduino.h>
#include <Arduino_GFX_Library.h>
#include <lvgl.h>

// 중요: CANVAS 모드 정의 추가
#define CANVAS

// Forward declarations
void display_init(void);
void display_flush_ready(lv_disp_drv_t *disp);
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p);
void display_task(void *pvParameters);
void lv_timer_task(void *pvParameters);
extern Arduino_GFX* get_gfx_instance(void);
extern Arduino_GFX *gfx;

// Display settings
#define GFX_BL 1

// External variables to be accessed from other modules
extern uint32_t screenWidth;
extern uint32_t screenHeight;
extern uint32_t bufSize;
extern lv_disp_draw_buf_t draw_buf;
extern lv_color_t *disp_draw_buf;
extern lv_disp_drv_t disp_drv;
extern SemaphoreHandle_t displayMutex;
extern bool backlightInitialized;
#endif // DISPLAY_H