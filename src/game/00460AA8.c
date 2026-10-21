#include "common.h"

void func_004604F0(s32);                               /* extern */
void func_004609E8(s32);                               /* extern */

void func_00460AA8(s32 arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = arg1 - 1;
    if (var_s1 >= 0) {
        var_s0 = (var_s1 * 0x2338) + arg0;
        do {
            var_s1 -= 1;
            func_004609E8(var_s0);
            func_004604F0(var_s0);
            var_s0 -= 0x2338;
        } while (var_s1 >= 0);
    }
}
