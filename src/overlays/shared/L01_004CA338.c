#include "common.h"

extern s32 func_L01_004CA280(s32, s32);

// Sum func_L01_004CA280 over the items of the list (words from +0xD0, count at
// +0x110). Returns 0 when there is no list or it is empty.
s32 func_L01_004CA338(s32 owner, s32 *list) {
    s32 *cursor;
    s32 count;
    s32 index;
    s32 total;
    s32 value;
    total = 0;
    if (list == 0 || (count = *(s32 *)((u8 *)list + 0x110)) == 0) return 0;
    index = 0;
    if (count > 0) {
        cursor = (s32 *)((u8 *)list + 0xD0);
        do {
            value = *cursor;
            index++;
            cursor++;
            total += func_L01_004CA280(owner, value);
        } while (index < *(s32 *)((u8 *)list + 0x110));
    }
    return total;
}
