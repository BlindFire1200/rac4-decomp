#include "common.h"

extern u8 D_00172160[];

/* Zeroes the three words at +0x2BC, +0x2C0 and +0x2C4 of the global block. */
void func_0015DA10(void) {
    s32 *p;
    p = (s32 *)D_00172160;
    p[0xB1] = 0;
    p[0xAF] = 0;
    p[0xB0] = 0;
}
