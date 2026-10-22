#include "common.h"

extern void func_005BCAE0(void *p, s32 v, s32 n);
extern s32 D_0023C030[];
extern s32 D_00222230;

// Clears the 0x600-byte table at 0x23C030 and zeroes the counter at 0x222230.
void func_L00_005B2AF0(void) {
    func_005BCAE0(D_0023C030, 0, 0x600);
    D_00222230 = 0;
}
