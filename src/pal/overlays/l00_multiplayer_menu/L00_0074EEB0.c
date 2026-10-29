#include "common.h"

extern u8 D_004BE8D0[];
s32 func_L00_0071EDF0();

s64 func_L00_0074EEB0(char *arg0) {
    *(s32 *)(arg0 + 88) = (s32)D_004BE8D0;
    return func_L00_0071EDF0(arg0);
}
