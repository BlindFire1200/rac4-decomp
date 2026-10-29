#include "common.h"

/* Returns 1 when the field at 0x10 is set and the field at 0xC4 is positive, else 0. */
s32 func_01EF7930(void *arg0) {
    s32 var_v1 = 0;
    if (*(s32 *)((u8 *)arg0 + 0x10) != 0) {
        var_v1 = *(s32 *)((u8 *)arg0 + 0xC4) > 0;
    }
    return var_v1;
}
