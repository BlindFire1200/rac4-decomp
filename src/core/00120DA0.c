/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 D_00163E74_[];
#define D_00163E74 (D_00163E74_[0])

void func_0011F338(s32);
s32 func_00125B30(s32, s32, s32);
void func_0011F398(s32);

// Returns the result of func_00125B30, run while the global is held.
s32 func_00120DA0(s32 arg0, s32 arg1) {
    s32 r;

    func_0011F338(D_00163E74);
    r = func_00125B30(D_00163E74, arg0, arg1);
    func_0011F398(D_00163E74);
    return r;
}
