#include "common.h"

extern s32 func_00501458(s32 *, s32, s32, s32, s32, s32);
extern char D_003078D8[];
extern char D_004A1B40[];
extern char D_004A1D50[];
extern char D_004A1B48[];

s32 D_002215BC = 0;

/* Initialize the referenced object once and return it. */
void *func_004A1A78(void) {
    if (D_002215BC == 0) {
        func_00501458((s32 *)D_003078D8, (s32)D_004A1B40, (s32)D_004A1D50, (s32)D_004A1B48, 0, 0);
        D_002215BC = 1;
    }
    return D_003078D8;
}
