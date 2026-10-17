#include "common.h"

s32 func_0011AB04(void *);
s32 func_L00_005BDC90(void *, s32, f32);
s32 func_L00_00716660(s32 unused0, u8 *text, s32 limit, f32 scale) {
    s32 length;
    (void)unused0;
    if (text == 0) return -1;
    length = func_0011AB04(text);
    while (length > 0 && limit > 0) {
        if (limit >= func_L00_005BDC90(text, length, scale)) break;
        length--;
        if (length > 0 && (text[length - 1] & 0x80) != 0) {
            length--;
            text[length] = 0;
        }
    }
    return length;
}
