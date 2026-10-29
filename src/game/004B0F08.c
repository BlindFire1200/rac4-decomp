#include "common.h"

extern s32 func_00501458(s32 *, s32, s32, s32, s32, s32);
extern char D_00309638[];
extern char D_004B1090[];
extern char D_004B10D0[];
extern char D_004B1138[];

s32 D_00221724 = 0;

/* Initialize the referenced object once and return it. */
void *func_004B0F08(void) {
    if (D_00221724 == 0) {
        func_00501458((s32 *)D_00309638, (s32)D_004B1090, (s32)D_004B10D0, (s32)D_004B1138, 0, 0);
        D_00221724 = 1;
    }
    return D_00309638;
}
