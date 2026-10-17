#include "common.h"

extern s32 D_00222B28;
void func_L00_005B7820(s32 *, s32, s32, s32, s32, s32);

// Call func_L00_005B7820 on D_00222B28 with the first four arguments and the
// fifth mapped as 2 to 1, 0 to 2 and anything else to 0.
void func_L01_0055D050(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 mapped_mode = 1;
    if (arg4 != 2) {
        mapped_mode = 2;
        if (arg4 != 0) mapped_mode = 0;
    }
    func_L00_005B7820(&D_00222B28, arg0, arg1, arg2, arg3, mapped_mode);
}
