#include "common.h"

void func_004604F0(s32);                               /* extern */

void func_00460558(s32 arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s1;

    if (arg1 > 0) {
        var_s1 = arg0;
        var_s0 = arg1;
        do {
            var_s0 -= 1;
            func_004604F0(var_s1);
            var_s1 += 0x2338;
        } while (var_s0 != 0);
    }
}
