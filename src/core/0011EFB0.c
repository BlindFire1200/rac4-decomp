/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 D_00163E74_[];
#define D_00163E74 (D_00163E74_[0])

void func_0011F338(s32);
void func_001256C8(s32, s32);
void func_0011F398(s32);

// Runs func_001256C8 while the global is held.
void func_0011EFB0(s32 arg0) {
    func_0011F338(D_00163E74);
    func_001256C8(D_00163E74, arg0);
    func_0011F398(D_00163E74);
}
