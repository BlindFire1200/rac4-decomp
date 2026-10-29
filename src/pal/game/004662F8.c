/* When the unsigned argument is below five, store it, set global flag 0x1000 and return one; otherwise return zero. */
/* cflags: @ee29 -O2 -G8 */
#include "common.h"

extern s32 D_0021DB64;
extern u32 D_0021F1D0;

s32 func_004662F8(u32 arg0) {
    if (arg0 < 5U) {
        D_0021F1D0 = arg0;
        D_0021DB64 |= 0x1000;
        return 1;
    }
    return 0;
}
