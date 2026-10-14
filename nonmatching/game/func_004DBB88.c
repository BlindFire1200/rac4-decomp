/* Not matching yet: BYTES 2/64 (tools/try_func.py func_004DBB88 --diff). Not part of the build. */
#include "common.h"

void func_00497980(s32 a0);

s32 func_004DCB80();
extern s32 D_00322FC8_[];
#define D_00322FC8 (D_00322FC8_[0])

void func_004DBB88(s32 a0) {
    *((a0 * 0x64) + &D_00322FC8) = 2;
    func_00497980(6);
    func_004DCB80();
}
