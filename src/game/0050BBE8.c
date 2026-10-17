#include "common.h"
extern s32 D_00220B54;
extern void func_0050C058(void *, s32, s32);
s32 func_0050BBE8(void *a, s32 x, s32 y) {
    u8 *o = a; u8 *t = *(u8 **)(o + 8);
    s32 (*m)(void *, s32) = *(s32 (**)(void *, s32))(t + 0x14);
    if (m(a, D_00220B54)) { func_0050C058(a, x, y); return 1; }
    return 0;
}
