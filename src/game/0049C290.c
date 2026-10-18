#include "common.h"

void func_0049C200(s32, s32);                          /* extern */
void func_0049C248(s32, s32);                          /* extern */
void func_0049C328(s32, s32, s32);                       /* extern */

void func_0049C290(s32 arg0, s32 arg1) {
    s32 var_a1;
    s32 var_a1_2;
    s32 var_s0;
    s32 var_s0_2;

    var_s0 = 0;
    if (arg1 > 0) {
        var_a1 = 0;
        do {
            func_0049C328(arg0, var_s0, 1);
            func_0049C200(arg0, var_s0);
            var_s0 += 1;
            var_a1 = var_s0;
        } while (var_s0 < arg1);
    }
    var_s0_2 = arg1;
    if (var_s0_2 < 4) {
        var_a1_2 = var_s0_2;
        do {
            func_0049C248(arg0, var_a1_2);
            var_s0_2 += 1;
            var_a1_2 = var_s0_2;
        } while (var_s0_2 < 4);
    }
}
