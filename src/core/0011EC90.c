/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 D_00163E74_[];

void func_0011F338(s32);
s32 func_001260B0(s32, s32, s32);
void func_0011F398(s32);

// Returns the result of func_001260B0, run while the global is held.
s32 func_0011EC90(s32 arg0, s32 arg1) {
    s32 r;

    func_0011F338(D_00163E74_[0]);
    r = func_001260B0(D_00163E74_[0], arg0, arg1);
    func_0011F398(D_00163E74_[0]);
    return r;
}
