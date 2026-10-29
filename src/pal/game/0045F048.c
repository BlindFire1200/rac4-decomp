/* Return the unsigned 32-bit gap to 0x1D0000 divided by four when the global is at most 0x1CFFFF, or zero otherwise. */
/* cflags: @ee29 -O2 -G8 */
#include "common.h"

extern u32 D_0021EF70;

u32 func_0045F048(void) {
    u32 var_a0;

    var_a0 = 0;
    if ((u32) D_0021EF70 <= 0x1CFFFFU) {
        var_a0 = (u32) (0x1D0000 - D_0021EF70) >> 2;
    }
    return var_a0;
}
