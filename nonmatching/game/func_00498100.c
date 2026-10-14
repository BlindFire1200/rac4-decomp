/* Not matching yet: BYTES 2/28 (tools/try_func.py func_00498100 --diff). Not part of the build. */
#include "common.h"

extern s32 D_002F32B8_[];
#define D_002F32B8 (D_002F32B8_[0])

u8 func_00498100(s32 arg0) {
    return *((arg0 * 0x14) + &D_002F32B8);
}
