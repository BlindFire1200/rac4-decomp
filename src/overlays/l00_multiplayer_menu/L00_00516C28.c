#include "common.h"

// Call func_L00_00516C48 with arg3 passed by address.

extern void func_L00_00516C48(s32 arg0, s32 arg1, s32 arg2, s32 *arg3);

void func_L00_00516C28(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 t = arg3;

    func_L00_00516C48(arg0, arg1, arg2, &t);
}
