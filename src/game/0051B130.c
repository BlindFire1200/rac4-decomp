#include "common.h"

/* Returns 1 when fparg0 is below the float at 0x658 and that gap is within the float at 0x65C, else 0. */
s32 func_0051B130(void *arg0, f32 fparg0) {
    f32 temp_f1;
    s32 var_v0;

    temp_f1 = *(f32 *)((char *)arg0 + 0x658);
    var_v0 = 0;
    if (fparg0 < temp_f1) {
        var_v0 = 1;
        if (!((temp_f1 - fparg0) <= *(f32 *)((char *)arg0 + 0x65C))) {
            var_v0 = 0;
        }
    }
    return var_v0;
}
