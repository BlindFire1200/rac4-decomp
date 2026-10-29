#include "common.h"

extern u8 D_004B8800[];
s32 func_L00_007145E0();

s64 func_L00_00716428(char * arg0) {
    *(s32 *)(arg0+88) = (s32)D_004B8800;
    return func_L00_007145E0(arg0);
}
