#include "common.h"

extern s32 func_00505B20(void);
extern s32 D_30ECC0_[];
#define D_30ECC0 (D_30ECC0_[0])

void func_004CDEC8(void) {
    s32 *temp_v0;

    temp_v0 = (s32 *)((u32)&D_30ECC0 + (func_00505B20() * 0x280));
    temp_v0[2] = temp_v0[2] & ~1;
}
