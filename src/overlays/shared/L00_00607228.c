#include "common.h"

extern void func_L00_006069A0(void *, void *, s32);

// Clear fields and initialize the related entry when requested.
void func_L00_00607228(u8 *entry) {
    s32 length;

    *(s32 *)(entry + 0x1A0) = 0;
    *(s32 *)(entry + 0x1AC) = *(s32 *)(entry + 0x348);
    *(s32 *)(entry + 0x1BC) = *(s32 *)(entry + 0x1B0);
    *(s32 *)(entry + 0x1B0) = 0;
    if (*(s32 *)(entry + 0x198) != 0 && entry[0x574] == 0) {
        length = ((entry[0x575] & 0xF) * 2) + 2;
        length = (length >= 0x15) ? 0x14 : length;
        func_L00_006069A0(entry, entry + 0x574, length);
    }
}
