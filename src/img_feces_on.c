//#include "lv_demo_widgets.h"
#include <lvgl.h>

const unsigned short img_feces_on_map[] = {

0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0xd6ba,0xffff,0xffff,0xffff,0x8410,0x18c3,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2945,0xa514,0xffff,0xffff,0xffff,0x8c71,0x18c3,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xf79e,0x0000,0xb596,0xffff,0xffdf,0x0000,0x0000,0x4208,0x73ae,0x9472,0x0861,0x0000,0x1082,0x738e,0x7bcf,0x2945,0x0000,0x18c3,0xffff,0xffff,0x630c,0x0000,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xf79e,0x0000,0xb5b6,0xffff,0x0000,0x0000,0xdedb,0xf79f,0xffbf,0x9492,0x0000,0x73ae,0xffff,0xffff,0xffff,0xffff,0xbdf7,0x0000,0x4208,0xffff,0x632c,0x0000,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xb596,0x18c3,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4228,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xf79e,0x0000,0xc638,0xa534,0x0000,0xce39,0xef3d,0xe6fc,0xf79f,0x0000,0x39c7,0xffff,0xd69a,0x18c3,0x0020,0xa4f4,0xffff,0x9492,0x0000,0xffff,0x738e,0x0000,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xad75,0x0000,0x00a3,0x1229,0x2229,0x326a,0x3249,0x3249,0x326a,0x326a,0x0000,0x0000,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xf79e,0x0000,0x94b2,0x31a6,0x1082,0xffdf,0xe6fc,0xe71d,0xbdd7,0x0000,0xbdf7,0xffff,0x0000,0x0021,0x18e4,0x0000,0xa514,0xc5f8,0x0000,0x73ae,0x52aa,0x0000,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0841,0x08e4,0x5edd,0x4e3a,0x9f3d,0x9f3d,0x9f3d,0x9f3d,0x9f3d,0xa75e,0x8e7b,0x0000,0x9cd3,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x0000,0x0000,0x39e7,0xf77e,0xe6fc,0xef3d,0xa514,0x0000,0xe6fc,0xdefb,0x0000,0x83d1,0xc599,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x22ec,0x5efd,0x567b,0xaf9f,0xa77f,0xa77f,0xa77f,0xa77f,0xa77f,0xbfff,0x0000,0x7bcf,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xf7be,0xffdf,0x39e7,0x0020,0xffdf,0xe6fc,0xe71c,0xc618,0x0000,0xb596,0xffff,0x0000,0x0000,0x0000,0x0000,0xd69a,0xe73c,0x0000,0x632c,0xf7be,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xad75,0x0000,0xb576,0xf75e,0xe6fc,0xffbf,0x0000,0x18e3,0xffff,0xef5d,0x4228,0x3186,0xc618,0xffff,0x738e,0x0000,0x738e,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x2945,0x6b2d,0x62ec,0x738e,0x738e,0x738e,0x738e,0x738e,0x738e,0x83f0,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x10a2,0x0000,0xbdb7,0xffdf,0xffbf,0xb596,0x0000,0x4a49,0xffff,0xffff,0xffff,0xffff,0x8c72,0x0000,0x0000,0x6b6d,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aec,0xef3d,0xef1d,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x0861,0x0000,0x1082,0x4a49,0x630c,0x0861,0x0000,0x0000,0x4228,0x4a69,0x0000,0x0000,0x4a6a,0x0000,0x6b6d,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xef3d,0x528a,0x0861,0x0862,0x0862,0x0882,0x0841,0xce59,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x9cf3,0x3186,0x0000,0x0000,0x0841,0x0841,0x0021,0x0000,0x0000,0x3186,0x9cd4,0xffdf,0x0000,0x6b6d,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xef3e,0x39c7,0x0000,0x6263,0x6263,0x3141,0x0000,0xc638,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xce79,0x0000,0xd67a,0xef1d,0xe6fd,0xe6fd,0xe6fd,0xe6dc,0xd69b,0xe71d,0x0000,0x6b6d,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xe6fd,0x9cd3,0x0000,0x8b65,0xa427,0x3162,0x0000,0xffff,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xbdf7,0x0000,0xc5d8,0xd67a,0xd65a,0xd65a,0xd65a,0xd65a,0xd65a,0xe71d,0x0000,0x6b6d,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdedc,0xe71d,0x0000,0x0000,0x0000,0x0000,0x73ae,0xffdf,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xbdf7,0x0000,0xd67a,0xef3d,0xe71d,0xe71d,0xe71d,0xe71d,0xe71d,0xffdf,0x0000,0x6b6d,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xffff,0xffff,0xffff,0xffff,0xffff,0xef7e,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xb5b6,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x632c,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x632c,0x6b4d,0x6b4d,0x6b4d,0x6b4d,0x6b4d,0x6b4d,0x6b4d,0x6b4d,0x630c,0xdedb,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffff,0x0000,0x8430,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffff,0x0000,0x2124,0x528a,0x4a49,0x4a49,0x4a49,0x4a49,0x4a49,0x4a49,0x4a49,0x4a49,0x4a49,0x4a49,0x4a49,0x4a49,0x4a49,0x41e7,0xce38,0xffff,0xffde,0x4208,0x4a49,0x4a49,0x4a49,0x5269,0xad55,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffff,0x0000,0x0020,0x0861,0x0041,0x0041,0x0041,0x0041,0x0041,0x0041,0x0041,0x0041,0x0041,0x0041,0x0041,0x0041,0x0041,0x0000,0x5c31,0x9f1d,0x85f9,0x0000,0x0041,0x0041,0x0061,0x0000,0x0000,0x52aa,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aec,0xef3d,0xdebb,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x43af,0x9fdf,0x977f,0x977f,0x977f,0x977f,0x977f,0x977f,0x977f,0x977f,0x977f,0x977f,0x977f,0x977f,0x977f,0x977f,0x871d,0x86dc,0x86dd,0x8f7f,0x977f,0x977f,0x977f,0x9fdf,0x43af,0x0000,0xef5d,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x2925,0x6b2d,0x62ec,0x738e,0x738e,0x738e,0x738e,0x738e,0x738e,0x7bef,0x0000,0x0945,0x1acc,0x1aab,0x1aab,0x1aab,0x1aab,0x1aab,0x1aab,0x1aab,0x1aab,0x1aab,0x1aab,0x1aab,0x1aab,0x1aab,0x1aab,0x1aab,0x1aab,0x1aab,0x1aab,0x1aab,0x1aab,0x1aab,0x1aab,0x22cc,0x0000,0xb596,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xb5b6,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x630c,0xf77f,0xe71d,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xef5d,0x0000,0xc618,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffdf,0x9cd3,0x0000,0xef7d,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffdf,0x4a49,0x0000,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xf79e,0xef3e,0x0000,0x4a69,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xf79e,0xe6dc,0x8c31,0x0000,0xd69a,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xf77e,0xf77e,0xd67b,0xe6fc,0x0000,0x18e3,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xf77e,0xf79e,0xe6fc,0xce3a,0xef3e,0x2945,0x0000,0xf79e,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xf77e,0xf77e,0xf77e,0xf77e,0xf77e,0xf77e,0xf77e,0xf77e,0xf77e,0xf77e,0xf77e,0xf77e,0xf77e,0xf77e,0xf79e,0xf79e,0xef3d,0xdedb,0xce5a,0xd67a,0xef3e,0x31a6,0x0000,0xad55,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef5d,0xe6fc,0xe71c,0xe71c,0xe71c,0xe71c,0xe71c,0xe71c,0xe71c,0xe71c,0xe71c,0xe6fc,0xe6fc,0xdedc,0xdebb,0xd67a,0xce3a,0xce3a,0xd67a,0xe6fd,0xc619,0x0841,0x0000,0x9cf3,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xef3d,0xce39,0xce3a,0xce3a,0xce3a,0xce3a,0xce3a,0xce3a,0xce3a,0xce3a,0xce3a,0xce5a,0xce5a,0xd65a,0xd67a,0xde9b,0xdedc,0xef3d,0xb597,0x39e8,0x0000,0x0000,0xd69a,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xf77e,0xffff,0xe6dc,0xe6fd,0xe6fd,0xe6fd,0xe6fd,0xe6fd,0xe6fd,0xe6fd,0xe6fd,0xe6fd,0xe6dc,0xdebc,0xce39,0xb556,0x8410,0x4a49,0x0000,0x0000,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffff,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4a49,0xad75,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffff,0x0000,0x4208,0x8c71,0x8430,0x8430,0x8430,0x8430,0x8430,0x8430,0x8430,0x8430,0x8c71,0x94b2,0xad75,0xce79,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffff,0x0000,0x8410,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aab,0xdebc,0xce5a,0xf79e,0xef7e,0xef7e,0xef7e,0xef7e,0xef7e,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x5aec,0xef1d,0xdebb,0xffff,0xffdf,0xffdf,0xffdf,0xffdf,0xffdf,0xffff,0x0000,0x7bef,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x0000,0x2966,0x73af,0x6b6e,0x8410,0x8410,0x8410,0x8410,0x8410,0x8410,0x9472,0x0000,0x7bcf,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0x2124,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xad55,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff
}; 

const lv_img_dsc_t img_feces_on = {
  .header.cf = LV_IMG_CF_TRUE_COLOR,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 50,
  .header.h = 50,
  .data_size = 5000,
  .data = img_feces_on_map
};

