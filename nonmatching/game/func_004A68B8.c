/* Not matching yet: BYTES 2/32 (tools/try_func.py func_004A68B8 --diff). Not part of the build. */
#include "common.h"

extern s32 D_308108_[];
#define D_308108 (D_308108_[0])

void func_004A68B8(s32 arg0) {
    *((arg0 * 0xB8) + &D_308108) = 1;
}
