#include "common.h"

extern s32 D_001BCC0C[];
extern s32 D_001BCA14[];

/* Calls the installed network callback, if any, with the fourth argument and the global state word, then returns 0x10. */
s32 func_01EDDCC0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (D_001BCC0C[0] == 0) {
        goto done;
    }
    ((void (*)(s32, s32))D_001BCC0C[0])(arg3, D_001BCA14[0]);
done:
    return 0x10;
}
