/* cflags: -fno-opt-stack */
#include "common.h"

void func_00147300(s32, s32, s32);
void func_00147098(s32, s32, s32);

// Runs the two halves of a split copy over the same range.
void func_00147A08(s32 arg0, s32 arg1, s32 arg2) {
    s32 half = arg2 / 2;

    func_00147300(arg0, arg1, half);
    func_00147098(arg0, arg1, half);
}
