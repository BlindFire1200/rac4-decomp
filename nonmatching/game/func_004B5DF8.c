/* Not matching yet: BYTES 4/28 (tools/try_func.py func_004B5DF8 --diff). Not part of the build. */
#include "common.h"

extern s32 D_003098F0_[];
#define D_003098F0 (D_003098F0_[0])

void func_004B5DF8(s32 arg0) {
    *((arg0 * 0x1F8) + &D_003098F0) = 0;
}
