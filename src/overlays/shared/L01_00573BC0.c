#include "common.h"
s32 func_L01_00573BC0(u8 *a0, f32 x, f32 y, f32 z, f32 w) {
    s32 count = 2;
    u8 *p = a0 + 0x10;
    *(f32 *)(a0 + 0) = x;
    *(f32 *)(a0 + 4) = z;
    *(f32 *)(a0 + 8) = y;
    *(f32 *)(a0 + 0xC) = w;
    do {
        *(s32 *)p = 0;
        p += 4;
        count--;
    } while (count >= 0);
    a0[0x1C] = 2;
    return 1;
}
