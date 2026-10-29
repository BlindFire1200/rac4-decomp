#include "common.h"

extern u8 D_004B8C40[];
s32 func_L00_00714570();
s32 func_L00_007172D8();

s64 func_L00_00717260(char *arg0, s32 arg1) {
    func_L00_00714570(arg0);
    *(s32 *)(arg0 + 88) = (s32)D_004B8C40;
    func_L00_007172D8(arg0, arg1);
    return (s32)arg0;
}
