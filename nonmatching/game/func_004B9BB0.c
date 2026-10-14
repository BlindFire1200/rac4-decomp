/* Not matching yet: BYTES 1/56 (tools/try_func.py func_004B9BB0 --diff). Not part of the build. */
#include "common.h"

void func_00497980(s32 a0);

extern s32 D_30A490_[];
#define D_30A490 (D_30A490_[0])

void func_004B9BB0(s32 a0) {
    *((a0 * 0x14) + &D_30A490) = 2;
    func_00497980(0xC);
}
