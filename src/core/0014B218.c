/* cflags: -fno-opt-stack */
#include "common.h"

f32 func_00136278(f32);

// Maps each source element through func_00136278 into the destination.
void func_0014B218(s32 arg0, f32 *arg1, f32 *arg2) {
    if (arg0 != 0) {
        do {
            *arg2 = func_00136278(*arg1);
            arg1++;
            arg2++;
            arg0--;
        } while (arg0 != 0);
    }
}
