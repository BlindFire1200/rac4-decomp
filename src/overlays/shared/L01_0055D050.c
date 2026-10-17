#include "common.h"
extern s32 D_00222B28;
void func_L00_005B7820(s32 *, s32, s32, s32, s32, s32);
void func_L01_0055D050(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 mode = 1;
    if (arg4 != 2) {
        mode = 2;
        if (arg4 != 0) mode = 0;
    }
    func_L00_005B7820(&D_00222B28, arg0, arg1, arg2, arg3, mode);
}
