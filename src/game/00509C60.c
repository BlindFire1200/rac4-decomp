#include "common.h"
extern s32 D_00220B68;
s32 func_0050EE28(void *, f32);
s32 func_00509C60(void *arg0, f32 fparg0) {
    u8 *object = arg0;
    u8 *vtable = *(u8 **)(object + 8);
    s32 (*method)(void *, s32) = *(s32 (**)(void *, s32))(vtable + 0x14);
    if (method(arg0, D_00220B68) == 0) goto fail;
    func_0050EE28(arg0, fparg0);
    return 1;
fail:
    return 0;
}
