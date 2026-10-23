/* cflags: -fno-opt-stack */
#include "common.h"

void func_001471C0(s32, s32, s32);
void func_00147088(s32, s32, s32);

// Runs the two halves of a split copy over the same range.
void func_00147030(s32 arg0, s32 arg1, s32 arg2) {
    s32 half = arg2 / 2;

    func_001471C0(arg0, arg1, half);
    func_00147088(arg1, arg0, half);
}
