/* Not matching yet: BYTES 3/56 (tools/try_func.py func_004C5620 --diff). Not part of the build. */
#include "common.h"

void func_00497980(s32 a0);

extern s32 D_0030B7F8_[];
#define D_0030B7F8 (D_0030B7F8_[0])

void func_004C5620(s32 a0) {
    *((a0 * 0x14) + &D_0030B7F8) = 2;
    func_00497980(0xC);
}
