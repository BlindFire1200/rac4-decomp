#include "common.h"

// Set the flag byte +0x14 from arg1/arg3 (plus 0x20 for types 0x10-0x11), mark +0x16 and store arg2 at +0x10.

typedef struct Type1 {
    char _p0[0x10];
    s32 f10;
    u8 f14;
    char _p15[0x16 - 0x15];
    u8 f16;
} Type1;

void func_L00_00553638(Type1 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 hi = arg1 & 0xC0;
    s32 v = hi | (arg3 & 0x2F);

    arg0->f14 = v;
    arg0->f16 |= 8;
    if (hi == 0 && (u32)(arg2 - 0x10) < 2) {
        arg0->f14 = v | 0x20;
    }
    arg0->f10 = arg2;
}
