#include "common.h"

/* Calls the network callback stored in a global with the fourth argument and a global handle, then returns 28. */
typedef void (*Type1)(s32, s32);

extern Type1 D_001BCC14[];
extern s32 D_001BCA1C[];

s32 func_01EDDE28(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    Type1 cb = D_001BCC14[0];
    s32 handle = arg3;
    if (cb != 0) {
        cb(handle, D_001BCA1C[0]);
    }
    return 28;
}
