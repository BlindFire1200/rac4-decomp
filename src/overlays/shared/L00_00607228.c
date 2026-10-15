#include "common.h"

extern void func_L00_006069A0(void *, void *, s32);

// Clear fields and initialize the related entry when requested.
void func_L00_00607228(u8 *arg0) {
    s32 length;

    *(s32 *)(arg0 + 0x1A0) = 0;
    *(s32 *)(arg0 + 0x1AC) = *(s32 *)(arg0 + 0x348);
    *(s32 *)(arg0 + 0x1BC) = *(s32 *)(arg0 + 0x1B0);
    *(s32 *)(arg0 + 0x1B0) = 0;
    if (*(s32 *)(arg0 + 0x198) != 0 && arg0[0x574] == 0) {
        length = ((arg0[0x575] & 0xF) * 2) + 2;
        length = (length >= 0x15) ? 0x14 : length;
        func_L00_006069A0(arg0, arg0 + 0x574, length);
    }
}
