/* cflags: -mno-split-addresses */
#include "common.h"

s32 func_00499CE0(s32);
s32 func_004B5970();
extern s32 D_22176C;

void func_004B56B8(void) {
    func_004B5970();
    if (D_22176C != 0) {
        func_00499CE0(D_22176C);
        D_22176C = 0;
    }
}
