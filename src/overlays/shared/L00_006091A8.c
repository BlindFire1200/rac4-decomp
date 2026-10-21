#include "common.h"

extern s32 func_L00_005BC9B8(void *);
extern void func_L00_00607960(void *);
extern u8 *D_0027671C[];

void func_L00_006091A8(u8 *arg0) {
    *(s32 *)(arg0 + 4) = (*(s32 *)(arg0 + 4) & 0xFFFFFF) | (((*(s16 *)(arg0 + 0xA) * *(s32 *)(arg0 + 0x20)) / 27) << 24);
    if (func_L00_005BC9B8(arg0 + 0xA) != 0) {
        func_L00_00607960(arg0);
        return;
    }
    arg0[2] = D_0027671C[0][(27 - *(s16 *)(arg0 + 0xA)) / 3];
}
