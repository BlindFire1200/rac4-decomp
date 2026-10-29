#include "common.h"

extern s32 func_00501458(s32 *, s32, s32, s32, s32, s32);
extern char D_003083E8[];
extern char D_004A9C90[];
extern char D_004A9C98[];
extern char D_004A9CD0[];

s32 D_0022165C = 0;

/* Initialize the referenced object once and return it. */
void *func_004A9C30(void) {
    if (D_0022165C == 0) {
        func_00501458((s32 *)D_003083E8, (s32)D_004A9C90, (s32)D_004A9C98, (s32)D_004A9CD0, 0, 0);
        D_0022165C = 1;
    }
    return D_003083E8;
}
