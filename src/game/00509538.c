#include "common.h"

extern s32 func_0050EE40(void *, s32, s16, s16, s32);
extern s32 D_00220B68;

// If the object supports D_00220B68 (checked with the method at +0x14 of its +8
// table), run func_0050EE40 with the four parameters and return 1; otherwise
// return 0.
s32 func_00509538(void *handle, s32 param_a, s16 param_b, s16 param_c, s32 param_d) {
    s32 (*method)(void *, s32);
    method = *(s32 (**)(void *, s32))((u8 *)*(void **)((u8 *)handle + 8) + 0x14);
    if (method(handle, D_00220B68) != 0) {
        func_0050EE40(handle, param_a, param_b, param_c, param_d);
        return 1;
    }
    return 0;
}
