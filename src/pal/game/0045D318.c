/* cflags: @ee29 -O2 -G8 */
#include "common.h"

extern s32 D_0021EE3C;
/* Compare the 32-bit gp-relative global to zero; exact GP relocation proof required. */

s32 func_0045D318(void) {
    return D_0021EE3C != 0;
}
