#include "common.h"

s32 func_00460020(s32);                             /* extern */

s32 func_00460098(s32 *arg0) {
    s32 var_v0;

    var_v0 = 1;
    if (arg0 != NULL) {
        var_v0 = func_00460020(*arg0);
    }
    return var_v0;
}
