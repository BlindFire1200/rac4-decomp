#include "common.h"

typedef void (*handler_t)(s32, s32);

extern handler_t D_001BCA30[];
extern s32 D_001BC838[];

/* Calls the optional registered handler with the 4th argument and a global value, then returns 0x104. */
s32 func_01EDBB28(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    handler_t fn = D_001BCA30[0];
    if (fn != 0) {
        fn(arg3, D_001BC838[0]);
    }
    return 0x104;
}
