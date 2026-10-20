#include "common.h"

extern s32 func_L00_006FF6D0(s32, s32);
extern s16 func_L00_006FF700(s32, s32);
extern s32 func_L00_00700708(s32, s32);

// Return 0 if any slot 1..19 flagged by 00700708 has 006FF6D0 below its clamped 006FF700 value.
s32 func_L41_003DCBD0(u8 *object) {
    s32 i;
    s32 result = 1;
    for (i = 1; i < 20; i++) {
        s16 v = func_L00_006FF700(*(s32 *)(object + 0x26E4), i);
        v = (v < 0) ? 0 : v;
        if ((u8)func_L00_00700708(*(s32 *)(object + 0x26E4), i)) {
            if (func_L00_006FF6D0(*(s32 *)(object + 0x26E4), i) < v) {
                result = 0;
                break;
            }
        }
    }
    return result;
}
