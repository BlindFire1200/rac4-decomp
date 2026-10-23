#include "common.h"

/* Stores four arguments into the fields of the structure pointed to by a0+0x40. */
void func_0050EE40(u8 *a0, s32 a1, s16 a2, s16 a3, s32 a4) {
    *(s16 *)(*(u8 **)(a0 + 0x40) + 0x14) = a2;
    *(s32 *)(*(u8 **)(a0 + 0x40) + 0x10) = a1;
    *(s16 *)(*(u8 **)(a0 + 0x40) + 0x16) = a3;
    *(s32 *)(*(u8 **)(a0 + 0x40) + 0x30) = a4;
}
