#include "common.h"

/* Returns the halfword at offset 0xA minus 8, or 0 when the pointer is null. */
s32 func_01EDB000(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = *(u16 *)((u8 *)arg0 + 10) - 8;
    }
    return var_v0;
}
