#include "common.h"

void func_L01_00558B10(s32 arg0, u8 *arg1, s32 arg2) {
    s32 i;
    u8 **entry;
    *(s32 *)(arg1 + 0xAC) = 0;
    if (arg2 != 0) {
        *(s32 *)(arg1 + 0xA8) = *(s32 *)0x21DDB8 - *(s32 *)arg1;
    } else {
        *(s32 *)(arg1 + 0xA8) = *(s32 *)0x21DDB8;
    }
    i = 0;
    if (*(s32 *)(arg1 + 0xA4) > 0) {
        s32 one = 1;
        entry = (u8 **)(arg1 + 0x10);
        do {
            u8 *object = *entry;
            if (arg2 != 0) {
                object[0xB] = 0;
            } else {
                object[0xB] = one;
            }
            i++;
            entry++;
        } while (i < *(s32 *)(arg1 + 0xA4));
    }
}
