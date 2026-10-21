/* cflags: -G0 */
#include "common.h"

extern s32 func_01EEDCD0(u8*, s32, s32);

s32 func_01F076D0(u8 *a0, s32 a1) {
    return func_01EEDCD0(a0 + 0x224, a1, 0x20);
}
