#include "common.h"

// Call func_L00_0069D1D8 with the four words of arg1.

extern void func_L00_0069D1D8(s32 arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4);

void func_L00_0069D2F0(s32 arg0, s32 *arg1) {
    func_L00_0069D1D8(arg0, arg1, arg1 + 1, arg1 + 2, arg1 + 3);
}
