#include "common.h"

s32 func_L00_00777520(void *, void *, s32 *);
s32 func_L00_007777A8(void *, s32, s32, s32);
void func_L00_00778580(void *, s32, s32, s32);
s32 func_L00_00778C58(void *arg0, s32 arg1, s32 *arg2) {
    s32 stack[33];
    s32 *temp_s1;
    s32 var_a0;
    func_L00_00778580(stack, 4, arg1, 0);
    temp_s1 = (arg2 != 0) ? arg2 : &stack[32];
    stack[24] = 0x4A;
    var_a0 = func_L00_00777520(arg0, stack, temp_s1);
    if ((var_a0 != 0) || (*(s32 *)((u8 *)arg0 + 0xDC) == -0x3CE)) {
        var_a0 = func_L00_007777A8(arg0, *temp_s1, 0, 0);
    }
    return var_a0;
}
