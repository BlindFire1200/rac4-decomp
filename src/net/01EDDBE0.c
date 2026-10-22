#include "common.h"

extern void (*D_001BCBFC[])(s32, s32);
extern s32 D_001BCA04[];

// Calls the optional net callback with the fourth argument and D_001BCA04, then returns 0x20.
s32 func_01EDDBE0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*cb)(s32, s32) = D_001BCBFC[0];
    s32 a3 = arg3;
    if (cb != 0) {
        cb(a3, D_001BCA04[0]);
    }
    return 0x20;
}
