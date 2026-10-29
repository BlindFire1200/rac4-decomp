#include "common.h"

/* Stores the result of func_00158400() into entry a1 of the array at +0x90 of D_1D2200. */
typedef struct {
    u8 pad[0x90];
    s32 f90[1];
} Type1;
extern s32 func_00158400();
extern Type1 D_1D2200[];

void func_00488E80(s32 a0, s32 a1) {
    D_1D2200[0].f90[a1] = func_00158400();
}
