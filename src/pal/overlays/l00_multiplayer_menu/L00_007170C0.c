#include "common.h"

extern u8 D_004B8A20[];
s32 func_L00_00714570();
s32 func_L00_00717138();

s64 func_L00_007170C0(char *arg0, s32 arg1) {
    func_L00_00714570(arg0);
    *(s32 *)(arg0 + 88) = (s32)D_004B8A20;
    func_L00_00717138(arg0, arg1);
    return (s32)arg0;
}
