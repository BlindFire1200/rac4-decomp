#include "common.h"

extern void (*D_001BCAF8[])(s64, s32);
extern s32 D_001BC900[];

// Calls the network callback (if set) with the incoming argument and a global value, then returns 0x20.
s32 func_01EDCD28(s32 arg0, s32 arg1, s32 arg2, s64 arg3) {
    if (D_001BCAF8[0] != 0) {
        D_001BCAF8[0](arg3, D_001BC900[0]);
    }
    return 0x20;
}
