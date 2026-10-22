#include "common.h"

extern void func_004F7420(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);

// Forwards its first three arguments and the fourth argument to func_004F7420, passing 0x40 as the fourth and fifth arguments.
void func_004F7B10(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_004F7420(arg0, arg1, arg2, 0x40, 0x40, arg3);
}
