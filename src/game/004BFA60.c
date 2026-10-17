#include "common.h"
s32 func_004BFA60(u32 arg0) {
    s32 var_v1;
    var_v1 = -1;
    if (arg0 < 2 || arg0 == 8 || arg0 == 0x25 || arg0 == 0xA || arg0 == 0xB) var_v1 = 0;
    else if (arg0 == 2 || arg0 == 13 || arg0 == 9 || arg0 == 15 || arg0 == 12 || arg0 == 14) var_v1 = 1;
    else if (arg0 == 3 || arg0 == 17 || arg0 == 18 || arg0 == 23 || arg0 == 16 || arg0 == 19 || arg0 == 20) var_v1 = 2;
    else if (arg0 == 4 || arg0 == 21 || arg0 == 25 || arg0 == 38 || arg0 == 22 || arg0 == 24) var_v1 = 3;
    else if (arg0 == 5 || arg0 == 28 || arg0 == 34 || arg0 == 39 || arg0 == 26 || arg0 == 36) var_v1 = 4;
    return var_v1;
}
