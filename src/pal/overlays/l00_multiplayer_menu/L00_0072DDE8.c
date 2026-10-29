#include "common.h"

extern u8 D_004BBAC8[];
s32 func_L00_0071EDF0();

s64 func_L00_0072DDE8(char *arg0) {
    *(s32 *)(arg0 + 88) = (s32)D_004BBAC8;
    return func_L00_0071EDF0(arg0);
}
