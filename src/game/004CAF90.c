#include "common.h"

s32 D_0021FA28 = 0;
s32 func_004CAF30();

// Returns 1 when the flag D_0021FA28 is set, otherwise the result of func_004CAF30.
s32 func_004CAF90(void) {
    s32 ret;

    if (D_0021FA28 != 0) {
        ret = 1;
    } else {
        ret = func_004CAF30();
    }
    return ret;
}
