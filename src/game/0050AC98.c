#include "common.h"

extern s32 D_00220B6C;

// If the object supports D_00220B6C (checked with the method at +0x14 of its +8
// table), copy the two floats at +0x14 and +0x18 to the out pointers and return
// 1; otherwise return 0.
s32 func_0050AC98(void *handle, f32 *x, f32 *y) {
    u8 *object = handle;
    u8 *table = *(u8 **)(object + 8);
    s32 (*method)(void *, s32) = *(s32 (**)(void *, s32))(table + 0x14);
    if (method(handle, D_00220B6C) != 0) {
        *x = *(f32 *)(object + 0x14);
        *y = *(f32 *)(object + 0x18);
        return 1;
    }
    return 0;
}
