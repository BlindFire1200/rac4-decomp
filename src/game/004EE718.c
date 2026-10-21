#include "common.h"

extern void func_0011EAA0(void *, s32, void *);
extern u8 D_003D2FB0[];
extern u8 D_002208E0[];

// Fill four weights from t: t, t / 2, 1 - t and (1 - t) / 2. Reports an error
// through func_0011EAA0 when the pointer is null.
void func_004EE718(s32 unused0, f32 *weights, f32 t) {
    f32 inverse;
    if (weights == NULL) func_0011EAA0(D_003D2FB0, 0x3D, D_002208E0);
    inverse = 1.0f - t;
    weights[0] = t;
    weights[2] = inverse;
    weights[1] = t * 0.5f;
    weights[3] = inverse * 0.5f;
}
