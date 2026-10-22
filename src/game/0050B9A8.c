#include "common.h"

extern s32 func_0050C740(void *, void *);

s32 D_00220B54 = 0;

// If the object supports D_00220B54 (checked with the method at +0x14 of its +8
// table), run func_0050C740 with handle and arg1 and return its result;
// otherwise return 0.
s32 func_0050B9A8(void *handle, void *arg1) {
    u8 *object = handle;
    u8 *table = *(u8 **)(object + 8);
    s32 (*method)(void *, s32) = *(s32 (**)(void *, s32))(table + 0x14);
    if (method(handle, D_00220B54) != 0) {
        return func_0050C740(handle, arg1);
    }
    return 0;
}
