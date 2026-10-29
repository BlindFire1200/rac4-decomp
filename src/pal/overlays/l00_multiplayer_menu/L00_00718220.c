#include "common.h"

extern u8 D_004B8E68[];
s32 func_L00_007145E0();

s64 func_L00_00718220(char * arg0) {
    *(s32 *)(arg0+88) = (s32)D_004B8E68;
    return func_L00_007145E0(arg0);
}
