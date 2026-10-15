#include "common.h"

void func_L00_006FF428(u8 *arg0, s32 arg1) {
    u32 index = (u32)arg1 & 0xFF;
    if (index < 10) {
        u8 *byte_field = arg0 + 2;
        u16 *word_field = (u16 *)(arg0 + 0xC);
        byte_field[index] = 1;
        word_field[index] = 0;
    }
}
