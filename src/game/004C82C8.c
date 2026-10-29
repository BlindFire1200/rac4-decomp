#include "common.h"

extern s32 func_00501458(s32 *, s32, s32, s32, s32, s32);
extern char D_0030D140[];
extern char D_004C8428[];
extern char D_004C86A0[];
extern char D_004C8768[];

s32 D_002218D4 = 0;

/* Initialize the referenced object once and return it. */
void *func_004C82C8(void) {
    if (D_002218D4 == 0) {
        func_00501458((s32 *)D_0030D140, (s32)D_004C8428, (s32)D_004C86A0, (s32)D_004C8768, 0, 0);
        D_002218D4 = 1;
    }
    return D_0030D140;
}
