#include "common.h"

extern void func_L00_005AECE8(s32 arg0);
extern s32 D_00222188;

// Set a global and call a function
void func_L00_005AF528(void) {
    D_00222188 = 0x100FF;
    func_L00_005AECE8(0);
}
