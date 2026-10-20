#include "common.h"

extern s32 func_L00_0066A9F8();
extern s32 func_L00_0066CE90();
extern s32 D_002222E8;
extern u8 *D_002222EC;
extern u8 D_1D2200[];

// Start an entry for slot arg0 and record it in the 0x80-byte table, then finish.
s32 func_L00_0066D510(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 r;
    u8 *p;

    if (arg0 >= D_002222E8 || arg0 == 0xFFFFFFFF) {
        return -1;
    }
    r = func_L00_0066CE90(D_002222EC + (arg0 << 5), arg1, 0, arg2 + 0x40, arg3);
    if (r >= 0) {
        p = D_1D2200 + (r << 7);
        *(s32 *)(p + 0x300) = arg2;
        *(s16 *)(p + 0x2CA) = arg0;
    }
    return func_L00_0066A9F8(r);
}
