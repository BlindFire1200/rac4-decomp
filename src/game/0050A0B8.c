#include "common.h"

extern s32 D_00220B5C;

// If the object supports D_00220B5C (checked with the method at +0x14 of its +8
// table), copy the two floats at +0x1C and +0x20 to the out pointers and return
// 1; otherwise return 0.
s32 func_0050A0B8(void *arg0, f32 *out_a, f32 *out_b) {
    u8 *object = arg0;
    u8 *table = *(u8 **)(object + 8);
    s32 (*method)(void *, s32) = *(s32 (**)(void *, s32))(table + 0x14);
    if (method(arg0, D_00220B5C) != 0) {
        *out_a = *(f32 *)(object + 0x1C);
        *out_b = *(f32 *)(object + 0x20);
        return 1;
    }
    return 0;
}
