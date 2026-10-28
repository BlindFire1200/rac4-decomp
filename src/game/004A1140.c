#include "common.h"

extern void func_004A1010(void *arg0, void *arg1, s32 arg2, s32 arg3);

// Stores two words in arg0, clears a third, then forwards to func_004A1010.
void func_004A1140(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 *temp_v0 = (s32 *) arg0;

    temp_v0[0xE] = arg3;
    temp_v0[0x12] = arg5;
    temp_v0[0x11] = 0;
    func_004A1010(arg0, arg1, arg2, arg4);
}
