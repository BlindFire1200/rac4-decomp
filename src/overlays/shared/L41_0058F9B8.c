#include "common.h"

extern s32 func_L00_0066A9F8();
extern s32 func_L00_0066CE90();
extern s32 D_0021E6A0;
extern s32 D_00222628;
extern s32 D_0022262C;
extern u8 D_1D2200[];

// Spawn the indexed entry through func_L00_0066CE90 and record its parameters.
s16 func_L41_0058F9B8(s32 index, s32 arg1, s32 arg2, s32 arg3) {
    s32 base = D_0022262C;
    s32 id;
    u8 *p;

    if (base == 0) {
        return -1;
    }
    index += D_0021E6A0;
    if (index >= D_00222628) {
        return -1;
    }
    id = func_L00_0066CE90(base + (index << 5), arg1, arg2, 0, 0x400);
    if (id >= 0) {
        p = D_1D2200 + (id << 7);
        *(s32 *)(p + 0x2DC) = arg2;
        *(s16 *)(p + 0x2CA) = index;
        *(s32 *)(p + 0x310) = arg3;
    }
    return func_L00_0066A9F8(id);
}
