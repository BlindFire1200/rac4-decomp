#include "common.h"

extern void (*D_001BCBEC[])(u32, u32);
extern u32 D_001BC9F4[];

/* Calls the registered net handler with the event id and the stored parameter, then returns 0x200. */
s32 func_01EDD428(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    void (*handler)(u32, u32) = D_001BCBEC[0];
    if (handler != 0) {
        handler(arg3, D_001BC9F4[0]);
    }
    return 0x200;
}
