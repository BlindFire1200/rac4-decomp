#include "common.h"

s32 func_L00_005DEBD0(s16, s32, s32);
typedef struct { u8 pad0[0xBC]; s16 fBC; } Type2;
typedef struct { u8 pad0[0x320]; Type2 *f320; } Type1;
typedef struct { u8 pad0[0xAC]; Type1 *fAC; } Type0;
s32 func_L01_004E65B8(Type0 *arg0) {
    Type2 *temp_v0 = arg0->fAC->f320;
    if (temp_v0 == 0) return 0;
    return func_L00_005DEBD0(temp_v0->fBC, 8, 0x24);
}
