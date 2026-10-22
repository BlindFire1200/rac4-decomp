#include "common.h"

extern void func_00549100(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);

// Calls func_00549100 with the two incoming arguments and fixed trailing arguments.
void func_00549430(s32 arg0, s32 arg1) {
    func_00549100(arg0, arg1, 0, 0, 0, 1);
}
