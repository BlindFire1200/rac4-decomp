#include "common.h"

extern u8 D_004B92A8[];
s32 func_L00_007145E0();

s64 func_L00_00718C98(char * arg0) {
    *(s32 *)(arg0+88) = (s32)D_004B92A8;
    return func_L00_007145E0(arg0);
}
