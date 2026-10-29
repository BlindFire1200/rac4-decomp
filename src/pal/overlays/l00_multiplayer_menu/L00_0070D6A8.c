/* cflags: @ee29 -O2 -G8 */
#include "common.h"

extern u8 D_00220AE0;
extern s32 D_00220AE4;
/* Return 0x40 when the global byte flag is nonzero; otherwise the other global. */

s32 func_L00_0070D6A8(void) {
    return (D_00220AE0 != 0) ? 0x40 : D_00220AE4;
}
