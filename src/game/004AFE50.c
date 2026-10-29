#include "common.h"

extern s32 func_00501458(s32 *, s32, s32, s32, s32, s32);
extern char D_00309598[];
extern char D_004B0020[];
extern char D_004B0068[];
extern char D_004B00D0[];

s32 D_00221714 = 0;

/* Initialize the referenced object once and return it. */
void *func_004AFE50(void) {
    if (D_00221714 == 0) {
        func_00501458((s32 *)D_00309598, (s32)D_004B0020, (s32)D_004B0068, (s32)D_004B00D0, 0, 0);
        D_00221714 = 1;
    }
    return D_00309598;
}
