/* Not matching yet: BYTES 3/56 (tools/try_func.py func_004D8560 --diff). Not part of the build. */
#include "common.h"

void func_00497980(s32 a0);

extern s32 D_00320178_[];
#define D_00320178 (D_00320178_[0])

void func_004D8560(s32 a0) {
    *((a0 * 0x14) + &D_00320178) = 2;
    func_00497980(0xC);
}
