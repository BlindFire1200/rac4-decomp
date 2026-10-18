/* Not matching yet: BYTES 2/156 (tools/try_func.py func_L00_006D2880 --diff). Not part of the build. */
#include "common.h"



s32 func_L00_005D1A18(s32, s32, s32, s32);
s32 func_L00_005E64B0(s32, s32, s32);
s32 func_L00_006A9220(s32);
extern s32 D_1DFBF0[];
extern s32 D_1DFC18[];


void func_L00_006D2880(void) {
    s32 var_s1;
    s32 *var_s2;
    s32 *var_s3;
    s32 temp_a0;
    s32 temp_v0;

    var_s1 = 0;
    var_s3 = D_1DFC18;
    var_s2 = D_1DFBF0;
    do {
        temp_a0 = var_s1;
        var_s1 += 1;
        if (*var_s2 != 0) {
            temp_v0 = func_L00_006A9220(temp_a0);
            func_L00_005D1A18(temp_v0, *var_s2, *var_s3, 0);
            func_L00_005E64B0(temp_v0, 0x251C, 1);
        }
        var_s3++;
        var_s2++;
    } while (var_s1 < 0xA);
}
