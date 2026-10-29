#include "common.h"

extern u8 D_004B92A8[];
s32 func_L00_00714570();
s32 func_L00_00718CC0();

s64 func_L00_00718C48(char *arg0, s32 arg1) {
    func_L00_00714570(arg0);
    *(s32 *)(arg0 + 88) = (s32)D_004B92A8;
    func_L00_00718CC0(arg0, arg1);
    return (s32)arg0;
}
