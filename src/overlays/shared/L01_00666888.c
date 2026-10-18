#include "common.h"

extern void func_L00_006FF698(s32, s32, s32);
extern s16 func_L00_006FF700(s32, s32);
extern s32 func_L00_006FF8E8(s32);
extern s32 func_L00_00700708(s32, s32);

void func_L01_00666888(char *p) {
    s32 i;

    for (i = 0; i < 20; i++) {
        if (func_L00_00700708(*(s32 *)(p + 0x26E4), i) != 0) {
            if (func_L00_006FF8E8(i) == 0) {
                func_L00_006FF698(*(s32 *)(p + 0x26E4), i, func_L00_006FF700(*(s32 *)(p + 0x26E4), i));
            }
        }
    }
}
