#include "common.h"

extern s32 D_2F32B8_[];
#define D_2F32B8 (D_2F32B8_[0])

s32 func_00497958(s32 arg0) {
    return *((arg0 * 0x54) + &D_2F32B8);
}
