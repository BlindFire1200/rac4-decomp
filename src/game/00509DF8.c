#include "common.h"

extern void func_0050EEB8(void *, s32, f32, f32);
extern s32 D_00220B68;
s32 func_00509DF8(void *handle, f32 value, f32 value2) {
    u8 *object = handle;
    u8 *table = *(u8 **)(object + 8);
    s32 (*method)(void *, s32) = *(s32 (**)(void *, s32))(table + 0x14);
    if (method(handle, D_00220B68) != 0) {
        func_0050EEB8(handle, 1, value, value2);
        return 1;
    }
    return 0;
}
