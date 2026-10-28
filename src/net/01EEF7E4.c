#include "common.h"

/* Clears the object's fields at 0x0-0x1C and 0x24, and sets the word at 0x20 to 0x80000. */
void func_01EEF7E4(u8 *a0) {
    *(s32 *)(a0 + 0x20) = 0x80000;
    *(s32 *)(a0 + 0x4) = 0;
    *(s32 *)(a0 + 0x8) = 0;
    *(s32 *)(a0 + 0xC) = 0;
    *(s32 *)(a0 + 0x10) = 0;
    *(s32 *)(a0 + 0x14) = 0;
    *(s32 *)(a0 + 0x18) = 0;
    *(s32 *)(a0 + 0x1C) = 0;
    *(s32 *)(a0 + 0x0) = 0;
    *(s32 *)(a0 + 0x24) = 0;
}
