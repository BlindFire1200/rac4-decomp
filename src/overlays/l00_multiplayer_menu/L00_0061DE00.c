#include "common.h"

s32 func_00496558(s32);                             /* extern */
void func_L00_00697558(s32, s32);                      /* extern */

void func_L00_0061DE00(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    do {
        temp_v0 = func_00496558(var_s0);
        var_s0 += 1;
        func_L00_00697558(temp_v0, arg0);
    } while (var_s0 < 5);
}
