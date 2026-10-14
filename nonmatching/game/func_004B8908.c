/* Not matching yet: BYTES 1/28 (tools/try_func.py func_004B8908 --diff). Not part of the build. */
#include "common.h"

extern s32 D_003D9370_[];
#define D_003D9370 (D_003D9370_[0])

u8 func_004B8908(s32 arg0) {
    return *((arg0 * 0x14) + &D_003D9370);
}
