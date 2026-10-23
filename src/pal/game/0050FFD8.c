#include "common.h"

// PAL version of func_0050EF18: stores a1 converted to 50 Hz frames ((a1 * 5 + 2) / 6) at +0x4C of
// the object at +0x40.
void func_0050FFD8(u8 *a0, s32 a1) {
    *(s16 *)(*(u8 **)(a0 + 0x40) + 0x4C) = (a1 * 5 + 2) / 6;
}
