#include "common.h"

extern s32 D_31B6B0_[];
#define D_31B6B0 (D_31B6B0_[0])

s32 func_004D2360(s32 arg0) {
    return (u32) *((arg0 * 0x1C) + &D_31B6B0) < 2U;
}
