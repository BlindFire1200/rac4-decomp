#include "common.h"
extern s32 func_L01_004CA280(s32, s32);

s32 func_L01_004CA338(s32 object, s32 *entries) {
    s32 *cursor;
    s32 count;
    s32 index;
    s32 total;
    s32 value;
    total = 0;
    if (entries == 0 || (count = *(s32 *)((u8 *)entries + 0x110)) == 0) return 0;
    index = 0;
    if (count > 0) {
        cursor = (s32 *)((u8 *)entries + 0xD0);
        do {
            value = *cursor;
            index++;
            cursor++;
            total += func_L01_004CA280(object, value);
        } while (index < *(s32 *)((u8 *)entries + 0x110));
    }
    return total;
}
