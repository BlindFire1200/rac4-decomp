/* Not matching yet: BYTES 2/56 (tools/try_func.py func_004CD940 --diff). Not part of the build. */
#include "common.h"

void func_00497980(s32 a0);

extern s32 D_0030ECC0_[];
#define D_0030ECC0 (D_0030ECC0_[0])

void func_004CD940(s32 a0) {
    *((a0 * 0x14) + &D_0030ECC0) = 2;
    func_00497980(0xC);
}
