#include "common.h"

extern void func_L00_005AECE8(s32 arg0);
extern s32 D_gp_37F7;

/* Writes 0x100FF to a small global and calls func_L00_005AECE8(0). */
void func_L00_005AF528(void) {
    D_gp_37F7 = 0x100FF;
    func_L00_005AECE8(0);
}
