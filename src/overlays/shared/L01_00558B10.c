#include "common.h"

// Reset the list's cursor and per-item flag: with reverse set the +0xA8 position

// is counted back from D_0021DDB8 by the list's first word and the items' +0xB
// byte is cleared, otherwise it is set to one.
void func_L01_00558B10(s32 arg0, u8 *list, s32 reverse) {
    s32 i;
    u8 **entry;
    *(s32 *)(list + 0xAC) = 0;
    if (reverse != 0) {
        *(s32 *)(list + 0xA8) = *(s32 *)0x21DDB8 - *(s32 *)list;
    } else {
        *(s32 *)(list + 0xA8) = *(s32 *)0x21DDB8;
    }
    i = 0;
    if (*(s32 *)(list + 0xA4) > 0) {
        s32 one = 1;
        entry = (u8 **)(list + 0x10);
        do {
            u8 *item = *entry;
            if (reverse != 0) {
                item[0xB] = 0;
            } else {
                item[0xB] = one;
            }
            i++;
            entry++;
        } while (i < *(s32 *)(list + 0xA4));
    }
}
