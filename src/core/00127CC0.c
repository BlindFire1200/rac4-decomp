/* cflags: -G0 */
#include "common.h"

extern s32 func_00126FD0(s32, void *);

s32 func_00127CC0(s32 a0, s8 a1) {
    struct {
        s32 a;
        s32 b;
    } args;
    args.a = a0;
    args.b = a1;
    return func_00126FD0(3, &args);
}
