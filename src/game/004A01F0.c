#include "common.h"

extern u8 D_307254[];

/* Stores arg1 at offset 0x2C of the 512-byte record arg0 in D_307254. */
void func_004A01F0(s32 arg0, s32 arg1) {
    s32 *p = (s32 *)(D_307254 + (arg0 << 9));
    p[11] = arg1;
}
