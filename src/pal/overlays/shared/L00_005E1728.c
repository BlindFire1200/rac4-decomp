/* Reject 0xFF; otherwise compare the argument to the gp-relative signed global. */
/* cflags: @ee29 -O2 -G8 */
#include "common.h"

extern s32 D_002225A4;

s32 func_L00_005E1728(s32 arg0) {
    if (arg0 != 0xFF) {
        return arg0 >= D_002225A4;
    }
    return 0;
}
