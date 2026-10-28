#include "common.h"

extern s32 D_00171B48_[];
#define D_00171B48 (D_00171B48_[0])
extern void func_00475710(f32 a, f32 b, f32 c);

// Passes D_00171B48 and two integer fields of arg0 (as floats) to func_00475710.
void func_00525C00(void *arg0) {
    func_00475710((f32)D_00171B48, (f32)*(s32 *)((u8 *)arg0 + 0x2FA4), (f32)*(s32 *)((u8 *)arg0 + 0x2FAC));
}
