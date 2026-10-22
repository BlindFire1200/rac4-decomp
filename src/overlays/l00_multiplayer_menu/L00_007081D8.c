#include "common.h"

extern void func_00159FF8(void *);
extern void func_0015A010(void *);
extern u8 D_00707FD0[];

u8 D_002209A2 = 0;

/* Sets the multiplayer-menu init flag, then hands the overlay's shared state block to both setup routines. */
void func_L00_007081D8(void) {
    D_002209A2 = 1;
    func_00159FF8(D_00707FD0);
    func_0015A010(D_00707FD0);
}
