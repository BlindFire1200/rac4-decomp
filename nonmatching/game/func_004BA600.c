/* Not matching yet: BYTES 1/28 (tools/try_func.py func_004BA600 --diff). Not part of the build. */
#include "common.h"

extern s32 D_003D9528_[];
#define D_003D9528 (D_003D9528_[0])

u8 func_004BA600(s32 arg0) {
    return *((arg0 * 0x14) + &D_003D9528);
}
