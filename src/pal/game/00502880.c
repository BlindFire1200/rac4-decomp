/* Increment the 32-bit global by 0x100 and return its new value. */
/* cflags: @ee29 -O2 -G8 */
#include "common.h"

extern s32 D_00220B54;

s32 func_00502880(void) {
    s32 temp_v1;

    temp_v1 = D_00220B54 + 0x100;
    D_00220B54 = temp_v1;
    return temp_v1;
}
