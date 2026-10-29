#include "common.h"

extern u8 D_004B7F78[];
s32 func_L00_00714570();
s32 func_L00_00714F40();

s64 func_L00_00714EC8(char *arg0, s32 arg1) {
    func_L00_00714570(arg0);
    *(s32 *)(arg0 + 88) = (s32)D_004B7F78;
    func_L00_00714F40(arg0, arg1);
    return (s32)arg0;
}
