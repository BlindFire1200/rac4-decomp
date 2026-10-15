#include "common.h"

extern s32 D_002448C0[];

void func_L00_006A9690(void) {
    s32 i;
    for (i = 0xFF; i >= 0; i--) {
        D_002448C0[i] = 0;
    }
}
