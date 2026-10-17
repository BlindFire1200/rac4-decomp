#include "common.h"
extern u8 D_003B5050[];
s32 func_L01_005337D0(s32 arg0, u8 *arg1) {
    s32 index = 0;
    if (arg1 != 0) index = arg1[0x54C] * 4 + arg1[0x558];
    return D_003B5050[arg0 * 0x10 + index * 0x80] != 0;
}
