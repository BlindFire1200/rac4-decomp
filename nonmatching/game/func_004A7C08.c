/* Not matching yet: BYTES 2/36 (tools/try_func.py func_004A7C08 --diff). Not part of the build. */
#include "common.h"

extern s32 D_308108_[];
#define D_308108 (D_308108_[0])

s32 func_004A7C08(s32 arg0) {
    return *((arg0 * 0xB8) + &D_308108) != 2;
}
