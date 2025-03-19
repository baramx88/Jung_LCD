//#include "lv_demo_widgets.h"
#include <lvgl.h>

const unsigned short img_wifi_on_map[] = {

0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xf7be,0xad75,0x6b4d,0x31a6,0x18c3,0x0861,0x10a2,0x3186,0x630c,0xa534,0xef7d,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xce59,0x3186,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2965,0xb5b6,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xe71c,0x2104,0x0000,0x0000,0x0000,0x0000,0x4208,0x8c51,0xb5b6,0xce79,0xce59,0xbdd7,0x8c51,0x4228,0x0020,0x0000,0x0000,0x0861,0xce59,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0x8c51,0x0000,0x0000,0x0000,0x18c3,0xad75,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xbdd7,0x2124,0x0000,0x0000,0x738e,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0x528a,0x0000,0x0000,0x0000,0xad55,0xffff,0xffff,0xffff,0xffff,0xffff,0xef5d,0xdedb,0xdefb,0xef5d,0xffff,0xffff,0xffff,0xffff,0xffff,0xbdd7,0x0000,0x0000,0x2945,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0x4228,0x0000,0x0000,0x18c3,0xffff,0xffff,0xffff,0xffff,0xb596,0x4208,0x0020,0x0000,0x0000,0x0000,0x0000,0x0020,0x4208,0xad75,0xffff,0xffff,0xffff,0xffff,0x2945,0x0000,0x31a6,0xffff,0xffff,0xffff,
0xffff,0x8430,0x0000,0x0000,0x3186,0xffff,0xffff,0xffff,0xbdf7,0x0020,0x0000,0x0000,0x0000,0x0841,0x1082,0x0861,0x0000,0x0000,0x0000,0x0000,0x0000,0xb5b6,0xffff,0xffff,0xffff,0x4a69,0x0000,0x4228,0xffff,0xffff,
0xffff,0xffff,0x39e7,0x0000,0xffff,0xffff,0xffff,0x738e,0x0000,0x0000,0x2124,0xa534,0xf79e,0xffff,0xffff,0xffff,0xf79e,0xbdf7,0x39c7,0x0000,0x0000,0x0000,0x632c,0xffff,0xffff,0xffff,0x18e3,0x9cd3,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x4a49,0x0000,0x0020,0xc618,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xef5d,0x10a2,0x0000,0x0000,0x31a6,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x738e,0x0000,0x10a2,0xffff,0xffff,0xffff,0xffff,0xce59,0x8410,0x632c,0x73ae,0xb5b6,0xffff,0xffff,0xffff,0xffff,0x39c7,0x0000,0x0000,0x73ae,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xd6ba,0x18c3,0xffff,0xffff,0xffff,0xb5b6,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x9492,0xffff,0xffff,0xffff,0x18c3,0x39e7,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x7bef,0x0000,0x0000,0x0000,0x2965,0x73ae,0x738e,0x2945,0x0000,0x0000,0x39c7,0xffff,0xffff,0xffdf,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xb596,0x0000,0x0000,0x18c3,0xf7be,0xffff,0xffff,0xffff,0xffff,0xf79e,0x10a2,0x0000,0x52aa,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x7bcf,0x0000,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x10a2,0xd69a,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xad75,0x31a6,0x4a69,0xf79e,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xad75,0x0000,0x0000,0x0000,0x0020,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x31a6,0x0000,0x0000,0x0000,0x0000,0xbdd7,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x528a,0x0000,0x0000,0x0000,0x0000,0xd69a,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xf79e,0x0841,0x0000,0x0000,0x630c,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xbdf7,0xd6ba,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff
}; 

const lv_img_dsc_t img_wifi_on = {
  .header.cf = LV_IMG_CF_TRUE_COLOR,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 30,
  .header.h = 30,
  .data_size = 1800,
  .data = img_wifi_on_map
};

