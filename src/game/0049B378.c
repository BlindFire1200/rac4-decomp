#include "common.h"

extern s32 func_00501458(s32 *, s32, s32, s32, s32, s32);
extern char D_00306EB0[];
extern char D_0049B808[];
extern char D_0049B8A0[];
extern char D_0049B8A8[];

s32 D_002215A8 = 0;

/* Initialize the referenced object once and return it. */
void *func_0049B378(void) {
    if (D_002215A8 == 0) {
        func_00501458((s32 *)D_00306EB0, (s32)D_0049B808, (s32)D_0049B8A0, (s32)D_0049B8A8, 0, 0);
        D_002215A8 = 1;
    }
    return D_00306EB0;
}
