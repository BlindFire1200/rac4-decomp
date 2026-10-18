#include "common.h"

extern s32 D_0021E694;
extern u8 *D_0021DFF0;
extern s32 func_L00_006FF6D0(s32, s32);
extern void func_L00_006FF8C8(s32, s32, s32);
extern u8 *func_L00_00700690(s32, s32);

// Spend arg2 of item arg1 (or the current one) when enough is available.
s32 func_L41_005F2E08(u8 *arg0, s32 arg1, s32 arg2) {
    if (arg0[0x266D] != 0) {
        if (arg1 == -1) {
            arg1 = *(s32 *)(arg0 + 0x2318);
        }
        if (*(s16 *)(func_L00_00700690(arg1, 0) + 0x42) != 0) {
            if (D_0021E694 == 1 && D_0021DFF0 != 0 && *(s8 *)(D_0021DFF0 + 0x20) != 0) {
                return 1;
            }
            if (func_L00_006FF6D0(*(s32 *)(arg0 + 0x26E4), arg1) < arg2) {
                return 0;
            }
            func_L00_006FF8C8(*(s32 *)(arg0 + 0x26E4), arg1, arg2);
        }
    }
    return 1;
}
