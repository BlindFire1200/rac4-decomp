#include "common.h"

extern s32 func_00501458(s32 *, s32, s32, s32, s32, s32);
extern char D_00309690[];
extern char D_004B22A0[];
extern char D_004B22D8[];
extern char D_004B2348[];

s32 D_00221734 = 0;

/* Initialize the referenced object once and return it. */
void *func_004B2160(void) {
    if (D_00221734 == 0) {
        func_00501458((s32 *)D_00309690, (s32)D_004B22A0, (s32)D_004B22D8, (s32)D_004B2348, 0, 0);
        D_00221734 = 1;
    }
    return D_00309690;
}
