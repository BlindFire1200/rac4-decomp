#include "common.h"

extern void func_0011D920(s32, void *, s32);
extern u8 D_002217E8[];
void func_L00_00767C60(s32 arg0, s32 arg1) {
    s32 var_s0 = arg1;
    s32 var_s1 = arg0;
    u32 var_s2 = 0;
    do {
        var_s2 += 1;
        func_0011D920(var_s1, D_002217E8, *(s32 *)var_s0);
        var_s0 += 4;
        var_s1 += 8;
    } while (var_s2 < 3U);
    *(u8 *)(var_s2 * 8 + arg0) = 0;
}
