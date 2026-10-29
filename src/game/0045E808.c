#include "common.h"

extern s32 D_23ABC0[];
extern s32 D_23F430[];

/* Loads value from D_23ABC0 and stores it plus 0x4B000 to D_23F430 fields. */
void func_0045E808(void) {
    s32 val = D_23ABC0[0];
    D_23F430[1] = val;
    D_23F430[2] = val + 0x4B000;
}
