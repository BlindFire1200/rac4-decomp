#include "common.h"

extern u8 D_004B7D58[];
s32 func_L00_00714570();
s32 func_L00_00714B50();

s64 func_L00_00714AD8(char *arg0, s32 arg1) {
    func_L00_00714570(arg0);
    *(s32 *)(arg0 + 88) = (s32)D_004B7D58;
    func_L00_00714B50(arg0, arg1);
    return (s32)arg0;
}
