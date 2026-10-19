#include "common.h"

extern s32 D_00220B6C;
extern void func_0050C058(void *, s32, s32);

// If the object supports D_00220B6C (checked with the method at +0x14 of its +8
// table), run func_0050C058 with the two arguments and return 1; otherwise
// return 0.
s32 func_0050AFC8(void *handle, s32 x, s32 y) {
    u8 *object = handle;
    u8 *table = *(u8 **)(object + 8);
    s32 (*method)(void *, s32) = *(s32 (**)(void *, s32))(table + 0x14);
    if (method(handle, D_00220B6C) != 0) {
        func_0050C058(handle, x, y);
        return 1;
    }
    return 0;
}
