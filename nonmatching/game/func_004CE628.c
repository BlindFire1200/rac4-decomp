/* Not matching yet: BYTES 2/56 (tools/try_func.py func_004CE628 --diff). Not part of the build. */
#include "common.h"

void func_00497980(s32 a0);

extern s32 D_0030F820_[];
#define D_0030F820 (D_0030F820_[0])

void func_004CE628(s32 a0) {
    *((a0 * 0x14) + &D_0030F820) = 2;
    func_00497980(0xC);
}
