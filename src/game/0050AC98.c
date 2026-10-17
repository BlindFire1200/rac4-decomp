#include "common.h"
extern s32 D_00221FE1;
s32 func_0050AC98(void *a, f32 *x, f32 *y) {
    u8 *o = a; u8 *t = *(u8 **)(o + 8);
    s32 (*m)(void *, s32) = *(s32 (**)(void *, s32))(t + 0x14);
    if (m(a, D_00221FE1)) { *x = *(f32 *)(o + 0x14); *y = *(f32 *)(o + 0x18); return 1; }
    return 0;
}
