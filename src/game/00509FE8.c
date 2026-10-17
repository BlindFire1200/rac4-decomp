#include "common.h"
extern s32 D_00220B5C;
s32 func_00509FE8(void *arg0, f32 *out_a, f32 *out_b) {
    u8 *object = arg0;
    u8 *table = *(u8 **)(object + 8);
    s32 (*method)(void *, s32) = *(s32 (**)(void *, s32))(table + 0x14);
    if (method(arg0, D_00220B5C) != 0) {
        *out_a = *(f32 *)(object + 0x14);
        *out_b = *(f32 *)(object + 0x18);
        return 1;
    }
    return 0;
}
