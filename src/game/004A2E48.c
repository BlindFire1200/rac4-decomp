#include "common.h"

extern s32 func_00501458(s32 *, s32, s32, s32, s32, s32);
extern char D_003079F0[];
extern char D_004A2EA8[];
extern char D_004A32C0[];
extern char D_004A3310[];

s32 D_002215F8 = 0;

/* Initialize the referenced object once and return it. */
void *func_004A2E48(void) {
    if (D_002215F8 == 0) {
        func_00501458((s32 *)D_003079F0, (s32)D_004A2EA8, (s32)D_004A32C0, (s32)D_004A3310, 0, 0);
        D_002215F8 = 1;
    }
    return D_003079F0;
}
