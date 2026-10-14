/* Not matching yet: BYTES 3/56 (tools/try_func.py func_004D5E10 --diff). Not part of the build. */
#include "common.h"

void func_00497980(s32 a0);

extern s32 D_0031D100_[];
#define D_0031D100 (D_0031D100_[0])

void func_004D5E10(s32 a0) {
    *((a0 * 0x14) + &D_0031D100) = 2;
    func_00497980(0xC);
}
