#include "common.h"

// Clear every pending item: for each set flag byte in +0x6C..+0x7C, clear the
// byte or word it refers to (through the pointers at +0x38, +0x3C, +0x4C,
// +0x50, +0x60 and +0x68, or in the object itself) and the flag. Then copy the
// words at +0x84 and +0x80 into +0x30 and +0x2C.
void func_L00_007744B0(void *object) {
    u8 *p = (u8 *)object;
    if (p[0x6C]) { *(u8 *)(*(u8 **)(p + 0x68) + 0x2F88) = 0; p[0x6C] = 0; }
    if (p[0x6D]) { **(u8 **)(p + 0x38) = 0; p[0x6D] = 0; }
    if (p[0x72]) { *(u8 *)(*(u8 **)(p + 0x3C) + 0x3D0) = 0; p[0x72] = 0; }
    if (p[0x73]) { *(u8 *)(*(u8 **)(p + 0x3C) + 0x408) = 0; p[0x73] = 0; }
    if (p[0x74]) { *(u8 *)(*(u8 **)(p + 0x3C) + 0x440) = 0; p[0x74] = 0; }
    if (p[0x70]) { *(u8 *)(*(u8 **)(p + 0x3C) + 0x478) = 0; p[0x70] = 0; }
    if (p[0x71]) { *(u8 *)(*(u8 **)(p + 0x3C) + 0x4B8) = 0; p[0x71] = 0; }
    if (p[0x6F]) { *(u8 *)(*(u8 **)(p + 0x3C) + 0x4F8) = 0; p[0x6F] = 0; }
    if (p[0x6E]) { *(u8 *)(*(u8 **)(p + 0x3C) + 0x531) = 0; p[0x6E] = 0; }
    if (p[0x77]) { **(u8 **)(p + 0x4C) = 0; p[0x77] = 0; }
    if (p[0x7C]) { *(u8 *)(*(u8 **)(p + 0x60) + 0x15C) = 0; p[0x7C] = 0; }
    if (p[0x7B]) { *(u8 *)(*(u8 **)(p + 0x60) + 0x198) = 0; p[0x7B] = 0; }
    if (p[0x78]) { **(u8 **)(p + 0x50) = 0; p[0x78] = 0; }
    if (p[0x75]) { *(s32 *)(p + 0x40) = 0; p[0x75] = 0; }
    if (p[0x76]) { *(s32 *)(p + 0x44) = 0; p[0x76] = 0; }
    if (p[0x79]) { *(s32 *)(p + 0x54) = 0; p[0x79] = 0; }
    if (p[0x7A]) { *(s32 *)(p + 0x58) = 0; p[0x7A] = 0; }
    *(s32 *)(p + 0x30) = *(s32 *)(p + 0x84);
    *(s32 *)(p + 0x2C) = *(s32 *)(p + 0x80);
}
