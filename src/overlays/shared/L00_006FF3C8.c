#include "common.h"

// Gather one byte from each of the count 0x44-byte records starting at +0xA30.
void func_L00_006FF3C8(u8 *src, u8 *dst, s32 count) {
    s32 i;
    for (i = 0; i < count; i++) {
        dst[i] = src[0xA30 + i * 0x44];
    }
}
