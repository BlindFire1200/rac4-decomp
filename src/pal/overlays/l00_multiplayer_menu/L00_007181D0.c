#include "common.h"

extern u8 D_004B8E68[];
s32 func_L00_00714570();
s32 func_L00_00718248();

s64 func_L00_007181D0(char *arg0, s32 arg1) {
    func_L00_00714570(arg0);
    *(s32 *)(arg0 + 88) = (s32)D_004B8E68;
    func_L00_00718248(arg0, arg1);
    return (s32)arg0;
}
