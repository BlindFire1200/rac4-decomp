#include "common.h"

extern s32 func_00453D20(void *);
extern void func_004915B0(void *);
extern u8 *D_0027681C[];

// PAL version of func_L00_006091A8: the 27-frame timer at +0xA runs for 22 frames
// on PAL (50 Hz), so the 9-step table index is (22 - t) * 9 / 22 instead of (27 - t) / 3.
void func_L00_0060BF58(u8 *arg0) {
    *(s32 *)(arg0 + 4) = (*(s32 *)(arg0 + 4) & 0xFFFFFF) | (((*(s16 *)(arg0 + 0xA) * *(s32 *)(arg0 + 0x20)) / 22) << 24);
    if (func_00453D20(arg0 + 0xA) != 0) {
        func_004915B0(arg0);
        return;
    }
    arg0[2] = D_0027681C[0][(22 - *(s16 *)(arg0 + 0xA)) * 9 / 22];
}
