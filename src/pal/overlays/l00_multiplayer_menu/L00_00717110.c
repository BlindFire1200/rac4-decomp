#include "common.h"

extern u8 D_004B8A20[];
s32 func_L00_007145E0();

s64 func_L00_00717110(char * arg0) {
    *(s32 *)(arg0+88) = (s32)D_004B8A20;
    return func_L00_007145E0(arg0);
}
