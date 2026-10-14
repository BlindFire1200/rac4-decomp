/* Not matching yet: BYTES 2/56 (tools/try_func.py func_004CF3E8 --diff). Not part of the build. */
#include "common.h"

void func_00497980(s32 a0);

extern s32 D_00316D00_[];
#define D_00316D00 (D_00316D00_[0])

void func_004CF3E8(s32 a0) {
    *((a0 * 0x14) + &D_00316D00) = 2;
    func_00497980(0xC);
}
