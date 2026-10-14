/* Not matching yet: BYTES 2/28 (tools/try_func.py func_004A7C30 --diff). Not part of the build. */
#include "common.h"

extern s32 D_00308108_[];
#define D_00308108 (D_00308108_[0])

u8 func_004A7C30(s32 arg0) {
    return *((arg0 * 0x14) + &D_00308108);
}
