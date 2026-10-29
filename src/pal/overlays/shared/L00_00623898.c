/* Return zero when the byte flag is clear; otherwise clear it and return one. */
/* cflags: -G0 */
#include "common.h"

extern u8 D_002F9308;

s32 func_L00_00623898(void) {
    if (D_002F9308 != 0) {
        D_002F9308 = 0;
        return 1;
    }
    return 0;
}
