/* cflags: -G0 */
#include "common.h"

extern u32 func_01EED8A4(s32, s32, s32);

s32 func_00156528(s32 a0) {
    return func_01EED8A4(a0, 0x11, 0x11) != 0;
}
