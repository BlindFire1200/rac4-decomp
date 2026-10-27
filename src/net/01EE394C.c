#include "common.h"

/* Returns the word at offset 0x18 of arg0, or 0 when arg0 is NULL. */
s32 func_01EE394C(s32 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = arg0[6];
    }
    return var_v0;
}
