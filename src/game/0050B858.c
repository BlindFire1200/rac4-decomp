#include "common.h"

extern s32 D_00220B54;
extern void func_0050CE58(void *, f32, f32, f32, f32);

// If the object supports D_00220B54 (checked with the method at +0x14 of its +8
// table), run func_0050CE58 with the four floats and return 1; otherwise return
// 0.
s32 func_0050B858(void *handle, f32 a1, f32 a2, f32 a3, f32 a4) {
    u8 *object = handle;
    u8 *table = *(u8 **)(object + 8);
    s32 (*method)(void *, s32) = *(s32 (**)(void *, s32))(table + 0x14);
    if (method(handle, D_00220B54) != 0) {
        func_0050CE58(handle, a1, a2, a3, a4);
        return 1;
    }
    return 0;
}
