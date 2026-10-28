/* cflags: -G0 */
/* C adapted from rac3-decomp func_003AF658 (NTSC-U func_003AF4B8, commit 403f30a9) */
#include "common.h"

extern u8 D_003D31A0[];
extern u8 D_003D31B8[];
extern void func_0011EAA0(void *, s32, void *);
f32 func_004EEDC8(f32 t, f32 p0, f32 m0, f32 m1, f32 p1) {
    f32 t2, t3;
    if (!(t >= 0.0f && t <= 1.0f)) {
        func_0011EAA0(D_003D31A0, 0x24, D_003D31B8);
    }
    t2 = t * t;
    t3 = t2 * t;
    p0 *= 1.0f + (2.0f * t3 - 3.0f * t2);
    m0 *= t3 - 2.0f * t2 + t;
    m1 *= t3 - t2;
    p1 *= -(2.0f * t3) + 3.0f * t2;
    return p0 + m0 + m1 + p1;
}
