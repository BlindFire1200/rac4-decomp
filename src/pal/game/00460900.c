#include "common.h"



s32 func_00159140(s32, s32, s32, s32);
s32 func_00163878();


s32 func_00460900(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (func_00159140(arg1, arg0, 0, 1) != 0) {
        func_00163878();
        var_v0 = 1;
    }
    return var_v0;
}
