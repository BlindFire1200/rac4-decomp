#include "common.h"
extern s32 D_00220B6C;
s32 func_0050AF60(void *a, s32 mask, u8 *out) {
    u8 *o = a; u8 *t = *(u8 **)(o + 8);
    s32 (*m)(void *, s32) = *(s32 (**)(void *, s32))(t + 0x14);
    if (m(a, D_00220B6C)) { *out = (*(u32 *)(o + 0xC) & mask) != 0; return 1; }
    return 0;
}
