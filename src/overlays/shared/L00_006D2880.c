#include "common.h"

s32 func_L00_005D1A18(s32, s32, s32, s32);
s32 func_L00_005E64B0(s32, s32, s32);
s32 func_L00_006A9220(s32);
extern s32 D_1DFBF0[];
extern s32 D_1DFC18[];

void func_L00_006D2880(void) {
    s32 i;
    s32 obj;

    for (i = 0; i < 10; i++) {
        if (D_1DFBF0[i] != 0) {
            obj = func_L00_006A9220(i);
            func_L00_005D1A18(obj, D_1DFBF0[i], D_1DFC18[i], 0);
            func_L00_005E64B0(obj, 0x251C, 1);
        }
    }
}
