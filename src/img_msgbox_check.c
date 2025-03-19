//#include "lv_demo_widgets.h"
#include <lvgl.h>

const uint16_t img_msgbox_check_map[] = {
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xd79c,0x9f39,0x86f7,0x86f7,0x9f39,0xd79d,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xe7be,0x4e74,0x05ad,0x05ad,0x05ae,0x05ae,0x05ae,0x05ae,0x05ad,0x05cf,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x4e74,0x058d,0x05ce,0x05ce,0x05ae,0x05ad,0x05ad,0x05ad,0x05ad,0x05ad,0x05ae,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xf7df,0x05ce,0x05ce,0x05ce,0x05ae,0x66b5,0xc77c,0xffff,0xffff,0xffff,0xffff,0xbf7b,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xf7df,0x05ad,0x05cf,0x058d,0x5694,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x05ce,0x05cf,0x058d,0xa73a,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x9f39,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0x4e94,0x05ae,0x05ad,0x9f39,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x3e73,0x058d,0x05ef,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xefde,0x058d,0x05ce,0x4e74,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x6eb6,0x05ae,0x05ae,0x4673,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0x5694,0x05ce,0x05ad,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x9f39,0x058d,0x05ce,0x15f0,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0x05ae,0x05ce,0x5695,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xc77c,0x058d,0x05cf,0x05ce,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xd7bd,0x05ad,0x05ae,0xbf7b,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xefde,0x058d,0x05cf,0x05ad,0xf7ff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xa739,0x05ae,0x05ad,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xdfbd,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x05ae,0x05cf,0x058d,0xdfbd,0xffff,0xffff,0xffff,0xffff,0xdfbd,0xffff,0xffff,0xffff,
0xffff,0xffff,0x86f8,0x05ae,0x05ad,0xffff,0xffff,0xffff,0xffff,0xffff,0x05cf,0x056c,0x7ed7,0xffff,0xffff,0xffff,0xffff,0x05ef,0x05cf,0x058d,0xb75b,0xffff,0xffff,0xffff,0xffff,0x05ce,0x056c,0xbf7b,0xffff,0xffff,
0xffff,0xffff,0x86f7,0x05ae,0x05ad,0xffff,0xffff,0xffff,0xffff,0xffff,0x05cf,0x05cf,0x05ad,0x6eb6,0xffff,0xffff,0x1e11,0x05ce,0x05ad,0x86f8,0xffff,0xffff,0xffff,0xffff,0xffff,0x058d,0x05ae,0xaf5a,0xffff,0xffff,
0xffff,0xffff,0x9f39,0x05ae,0x05ad,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x05cf,0x05cf,0x05ad,0x6ed6,0x5695,0x05ae,0x05ae,0x5695,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x05ad,0x05ae,0xc77c,0xffff,0xffff,
0xffff,0xffff,0xcf9c,0x05ae,0x05ae,0xbf7b,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x05cf,0x05cf,0x05ce,0x05ce,0x05ce,0x3652,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xbf7b,0x05ae,0x058d,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0x05ad,0x05ce,0x5694,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x05cf,0x05cf,0x05ce,0x0df0,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x5694,0x05ae,0x05ef,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0x4673,0x05ce,0x05ad,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x05cf,0x05cf,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x05ad,0x05ae,0x76d7,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xd7bd,0x058d,0x05ce,0x4673,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x4673,0x05ce,0x058d,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0x3652,0x05ce,0x05ad,0x9f39,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x9f39,0x05ad,0x05ae,0x76d7,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x05ae,0x05cf,0x058d,0x9f39,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x9f39,0x058d,0x05ce,0x0df0,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xdfbd,0x058d,0x05cf,0x05ad,0x4673,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x4673,0x05ad,0x05cf,0x05ce,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xdfbd,0x05ae,0x05ce,0x05ce,0x05ad,0x5694,0xbf7b,0xffff,0xffff,0xffff,0xffff,0xbf7b,0x5694,0x05ad,0x05ce,0x05ae,0x05f0,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x2e32,0x058d,0x05ce,0x05ce,0x05ae,0x05ad,0x05ad,0x05ad,0x05ad,0x05ae,0x05ce,0x05ce,0x058d,0x66b5,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xcf9c,0x3e53,0x058d,0x05ae,0x05ae,0x05ae,0x05ae,0x05ae,0x05ad,0x05ae,0x5e95,0xf7ff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xcf9c,0x9719,0x86f7,0x86f8,0xa739,0xdfbd,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff 

}; 

const lv_img_dsc_t img_msgbox_check = {
  
  .header.cf = LV_IMG_CF_TRUE_COLOR,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 30,
  .header.h = 30,
  .data_size = 1800,
  .data = img_msgbox_check_map
};

