#include "common.h"

extern s32 func_00505B20(void);
extern s32 D_316D00_[];
#define D_316D00 (D_316D00_[0])

void func_004CF910(void) {
    s32 *temp_v0;

    temp_v0 = (s32 *)((u32)&D_316D00 + (func_00505B20() * 0x9E0));
    temp_v0[2] = temp_v0[2] & ~1;
}
