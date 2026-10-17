#include "common.h"

extern s32 D_00220B54;

// If the object supports D_00220B54 (checked with the method at +0x14 of its +8
// table), store the two floats at +0x24 and +0x28 and return 1; otherwise
// return 0.
s32 func_0050BCC8(void *handle, f32 x, f32 y) {
    u8 *object = handle;
    u8 *table = *(u8 **)(object + 8);
    s32 (*method)(void *, s32, f32, f32) = *(s32 (**)(void *, s32, f32, f32))(table + 0x14);
    if (method(handle, D_00220B54, x, y) != 0) {
        *(f32 *)(object + 0x24) = x;
        *(f32 *)(object + 0x28) = y;
        return 1;
    }
    return 0;
}
