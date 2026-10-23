/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 D_00163E74_[];

void func_0011F338(s32);
s32 func_00124F98(s32, s32);
void func_0011F398(s32);

// Returns the result of func_00124F98, run while the global is held.
s32 func_0011EF60(s32 arg0) {
    s32 r;

    func_0011F338(D_00163E74_[0]);
    r = func_00124F98(D_00163E74_[0], arg0);
    func_0011F398(D_00163E74_[0]);
    return r;
}
