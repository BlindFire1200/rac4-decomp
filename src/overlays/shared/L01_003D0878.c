#include "common.h"
s32 func_L01_003D0878(u8 *arg0) {
    u8 *object = *(u8 **)(arg0 + 0xAC);
    u8 *bytes = object + 0x8C;
    s32 *slots = (s32 *)(object + 0x50);
    s32 i;
    s32 count = 0;
    for (i = 0; i < 4; i++) {
        if (slots[i] != -1 && bytes[i] == 0) count++;
    }
    return count;
}
