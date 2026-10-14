#include "common.h"

extern s32 func_00505B20(void);
extern s32 D_30F820_[];
#define D_30F820 (D_30F820_[0])

void func_004CED70(void) {
    s32 *temp_v0;

    temp_v0 = (s32 *)((u32)&D_30F820 + (func_00505B20() * 0x103C));
    temp_v0[2] = temp_v0[2] & ~1;
}
