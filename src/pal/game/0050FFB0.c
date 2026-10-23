#include "common.h"

// PAL version of func_0050EF08: stores a1 converted to 50 Hz frames ((a1 * 5 + 2) / 6) at +0x44 of
// the object at +0x40.
void func_0050FFB0(u8 *a0, s32 a1) {
    *(s16 *)(*(u8 **)(a0 + 0x40) + 0x44) = (a1 * 5 + 2) / 6;
}
