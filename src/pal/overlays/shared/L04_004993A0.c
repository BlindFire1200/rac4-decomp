#include "common.h"

// PAL version of func_L04_00497B08: sets the byte at +0x32E to 25 (30 frames at 60 Hz on US).
void func_L04_004993A0(s32 unused, u8 *a1) {
    *(s8 *)(a1 + 0x32E) = 0x19;
}
