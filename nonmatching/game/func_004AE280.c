/* Not matching yet: BYTES 2/32 (tools/try_func.py func_004AE280 --diff). Not part of the build. */
#include "common.h"

extern s32 D_3092A0_[];
#define D_3092A0 (D_3092A0_[0])

void func_004AE280(s32 arg0) {
    *((arg0 * 0x64) + &D_3092A0) = 2;
}
