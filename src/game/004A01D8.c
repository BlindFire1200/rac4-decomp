#include "common.h"

extern s8 D_307254[];

// Stores a byte at offset 0x44 of the 512-byte entry arg0 in D_307254.
void func_004A01D8(s32 arg0, s8 arg1) {
    s8 *p;

    p = D_307254 + (arg0 << 9);
    p[0x44] = arg1;
}
