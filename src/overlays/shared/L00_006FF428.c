#include "common.h"

// Mark the byte flag for an in-range index (sibling of func_L00_006FF458, which clears it).
void func_L00_006FF428(u8 *table, s32 arg1) {
    u32 index = (u32)arg1 & 0xFF;
    if (index < 10) {
        u8 *byte_field = table + 2;
        u16 *word_field = (u16 *)(table + 0xC);
        byte_field[index] = 1;
        word_field[index] = 0;
    }
}
