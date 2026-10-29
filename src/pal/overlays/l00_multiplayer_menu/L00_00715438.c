#include "common.h"

extern u8 D_004B8198[];
s32 func_L00_00714570();
s32 func_L00_007154B0();

s64 func_L00_00715438(char *arg0, s32 arg1) {
    func_L00_00714570(arg0);
    *(s32 *)(arg0 + 88) = (s32)D_004B8198;
    func_L00_007154B0(arg0, arg1);
    return (s32)arg0;
}
