/* cflags: -G0 */
#include "common.h"

extern s32 func_01EA06A8(s32*);

s32 func_01EA4750(s32 a0) {
    s32 val = a0;
    return func_01EA06A8(&val);
}
