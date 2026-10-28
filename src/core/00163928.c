/* cflags: -G0 */
#include "common.h"

extern s32 D_21D940[];

s32 func_00163928(void) {
    s32 r = 0;

    if (D_21D940[1] != 0 || (D_21D940[2] & 1)) {
        r = 1;
    }
    return r;
}
