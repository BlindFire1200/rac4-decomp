#include "common.h"

extern s32 D_00220B70;

// If the object supports D_00220B70 (checked with the method at +0x14 of its +8
// table), copy the two floats at +0x1C and +0x20 to the out pointers and return
// 1; otherwise return 0.
s32 func_0050B3D8(void *handle, f32 *x, f32 *y) {
    u8 *object = handle;
    u8 *table = *(u8 **)(object + 8);
    s32 (*method)(void *, s32) = *(s32 (**)(void *, s32))(table + 0x14);
    if (method(handle, D_00220B70) != 0) {
        *x = *(f32 *)(object + 0x1C);
        *y = *(f32 *)(object + 0x20);
        return 1;
    }
    return 0;
}
