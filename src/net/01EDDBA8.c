#include "common.h"

extern void (*D_001BCBF8[])(s32, s32);
extern s32 D_001BCA00[];

// Calls the registered network callback (if any) with the third argument and returns 24.
s32 func_01EDDBA8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*fp)(s32, s32) = D_001BCBF8[0];
    if (fp != 0) {
        fp(arg3, D_001BCA00[0]);
    }
    return 0x18;
}
