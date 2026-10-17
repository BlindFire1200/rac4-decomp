#include "common.h"
extern void func_0011EAA0(void *, s32, void *);
extern u8 D_003D2FB0[];
extern u8 D_002208E0[];
void func_004EE718(s32 unused, f32 *arg0, f32 t) {
    f32 inverse;
    if (arg0 == NULL) func_0011EAA0(D_003D2FB0, 0x3D, D_002208E0);
    inverse = 1.0f - t;
    arg0[0] = t;
    arg0[2] = inverse;
    arg0[1] = t * 0.5f;
    arg0[3] = inverse * 0.5f;
}
