/* cflags: -fno-opt-stack */
#include "common.h"

void func_001263F0(s32, s32);

extern s32 D_00163E74_[];

// Calls func_001263F0 with arg0 and the global, then returns arg0.
s32 func_00120378(s32 arg0) {
    func_001263F0(arg0, D_00163E74_[0]);
    return arg0;
}
