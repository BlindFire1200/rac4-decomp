/* Not matching yet: BYTES 2/56 (tools/try_func.py func_004D01B0 --diff). Not part of the build. */
#include "common.h"

void func_00497980(s32 a0);

extern s32 D_0031A960_[];
#define D_0031A960 (D_0031A960_[0])

void func_004D01B0(s32 a0) {
    *((a0 * 0x14) + &D_0031A960) = 2;
    func_00497980(0xC);
}
