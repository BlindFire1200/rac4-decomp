/* cflags: -G0 */
#include "common.h"

extern void (*D_001BCC00[])(s32, s32);
extern s32 D_001BCA08[];

/* Calls the registered network callback with the last argument and a global value if one is installed, and returns 32. */
s32 func_01EDDC18(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*cb)(s32, s32) = D_001BCC00[0];
    if (cb != 0) {
        cb(arg3, D_001BCA08[0]);
    }
    return 0x20;
}
