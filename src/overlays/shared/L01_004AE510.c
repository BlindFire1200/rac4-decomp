#include "common.h"

void func_L01_00591BD8(void *, s32, s32); /* extern */
extern s32 D_003660F8[];
s32 func_L01_004AE510(void *arg0) {
    s32 *var_v0_2;
    s32 *var_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_v0;
    if (*((u8 *)arg0 + 0x20) != 0) return 0;
    {
        var_a1 = D_003660F8[0];
        var_a2 = 9;
        var_v0_2 = &D_003660F8[0];
        var_v1 = *(s32 **)((u8 *)arg0 + 0xAC) + 0x1B;
        do {
            if (var_a1 != 0) *var_v1 = 0;
            var_v0_2 += 1;
            var_v1 += 1;
            var_a2 -= 1;
            var_a1 = *var_v0_2;
        } while (var_a2 >= 0);
        func_L01_00591BD8(arg0, 1, -1);
        var_v0 = 1;
    }
    return var_v0;
}
