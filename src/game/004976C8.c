#include "common.h"
extern void func_00497580(s32 *, s32, s32);
extern void func_00497628(s32 *, s32, s32);
s32 func_004976C8(s32 *arg0, s32 arg1, s32 arg2, void (*arg3)(void), void (*arg4)(void), s32 arg5) {
    s32 old = *arg0;
    if (arg2 != 0) func_00497580(&old, arg1, arg5);
    else func_00497628(&old, arg1, arg5);
    if (*arg0 == old) return 0;
    if (arg3 != 0) arg3();
    *arg0 = old;
    if (arg4 != 0) arg4();
    return 1;
}
