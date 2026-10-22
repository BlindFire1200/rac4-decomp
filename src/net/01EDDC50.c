#include "common.h"

extern s32 (*D_001BCC04[])(s32, s32);
extern s32 D_001BCA0C[];

// Calls the optional callback stored in D_001BCC04 with the fourth argument and
// the value of D_001BCA0C, then returns 28.
s32 func_01EDDC50(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 (*temp_v1)(s32, s32) = D_001BCC04[0];

    if (temp_v1 != 0) {
        temp_v1(arg3, D_001BCA0C[0]);
    }
    return 0x1C;
}
