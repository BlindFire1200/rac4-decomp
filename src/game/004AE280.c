#include "common.h"

extern s32 D_3092A0_[];
#define D_3092A0 (D_3092A0_[0])

void func_004AE280(s32 arg0) {
    *(s32 *)((u8 *)&D_3092A0 + (arg0 * 0x64)) = 2;
}
