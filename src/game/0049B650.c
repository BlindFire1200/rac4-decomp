#include "common.h"

extern f32 func_0049B528(s32, s32);

// Returns 0 when func_0049B528(arg0, 0) is exactly 0.0f, otherwise 1.
s32 func_0049B650(s32 arg0) {
    s32 var_v0;

    if (func_0049B528(arg0, 0) == 0.0f) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    return var_v0;
}
