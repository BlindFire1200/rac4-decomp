/* Not matching yet: BYTES 4/32 (tools/try_func.py func_004A54B8 --diff). Not part of the build. */
#include "common.h"

extern s32 D_00307F68_[];
#define D_00307F68 (D_00307F68_[0])

void func_004A54B8(s32 arg0) {
    *((arg0 * 0xB8) + &D_00307F68) = 1;
}
