#include "common.h"

extern s16 D_00329A60[];

// Find a value in the table and return its index, or 0xFF.
u32 func_L00_00666F80(s32 arg0) {
    s32 needle = (s16)arg0;
    u32 result = 0xFF;
    u32 i = 0;
    do {
        result = (D_00329A60[i] == needle) ? i : result;
        i = (i + 1) & 0xFF;
    } while (result == 0xFF && i < 0x40);
    return result;
}
