/* cflags: -G0 */
#include "common.h"

extern s32 func_00126FD0(s32, void *);

s32 func_00127CF0(s32 val) {
    s32 tmp = val;
    return func_00126FD0(4, &tmp);
}
