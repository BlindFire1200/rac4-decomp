/* cflags: -G0 */
#include "common.h"

extern s32 func_01EA94D0(s32, s64);

s32 func_01E9DCF0(s32 a0, s32 a1) {
    return func_01EA94D0(a0, (s64)a1) != 0 ? -1 : 0;
}
