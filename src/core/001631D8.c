#include "common.h"

extern s8 D_0021DC20;
extern s8 D_0021DC18[];
extern s32 D_0021E0DC;
extern s32 D_0021E0E0;
extern s8 D_0021DC22;
extern s8 D_0021DC21;

static s32 D_0021E0D8 = 0;

/* Clears the global flag bytes and counters. */
void func_001631D8(void) {
    D_0021E0D8 = 0;
    D_0021DC18[0] = 0;
    D_0021DC18[2] = 0;
    D_0021DC18[1] = 0;
    D_0021E0DC = 0;
    D_0021E0E0 = 0;
    D_0021DC22 = 0;
    D_0021DC21 = 0;
    D_0021DC20 = 0;
}
