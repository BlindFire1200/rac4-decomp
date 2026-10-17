#include "common.h"

extern s32 D_00220B58;

// If the object supports D_00220B58 (checked with the method at +0x14 of its +8
// table), store whether the +0xC flags have any bit of mask in *out and return
// 1; otherwise return 0.
s32 func_0050A8E0(void *arg0, s32 mask, u8 *out) {
    u8 *object = arg0;
    u8 *table = *(u8 **)(object + 8);
    s32 (*method)(void *, s32) = *(s32 (**)(void *, s32))(table + 0x14);
    if (method(arg0, D_00220B58) != 0) {
        *out = (*(u32 *)(object + 0xC) & mask) != 0;
        return 1;
    }
    return 0;
}
