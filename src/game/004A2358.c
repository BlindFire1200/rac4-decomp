#include "common.h"

extern s32 func_00501458(s32 *, s32, s32, s32, s32, s32);
extern char D_00307908[];
extern char D_004A2440[];
extern char D_004A2680[];
extern char D_004A2448[];

s32 D_002215C4 = 0;

/* Initialize the referenced object once and return it. */
void *func_004A2358(void) {
    if (D_002215C4 == 0) {
        func_00501458((s32 *)D_00307908, (s32)D_004A2440, (s32)D_004A2680, (s32)D_004A2448, 0, 0);
        D_002215C4 = 1;
    }
    return D_00307908;
}
