#include "common.h"

void func_L00_006FF3C8(u8 *arg0, u8 *arg1, s32 count) {
    s32 i;
    for (i = 0; i < count; i++) {
        arg1[i] = arg0[0xA30 + i * 0x44];
    }
}
