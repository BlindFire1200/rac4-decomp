/* cflags: -G0 */
#include "common.h"

extern s32 func_01EA95C0(s32*);

s32 func_01EA8908(s32 a0) {
    s32 val = a0;
    return func_01EA95C0(&val);
}
