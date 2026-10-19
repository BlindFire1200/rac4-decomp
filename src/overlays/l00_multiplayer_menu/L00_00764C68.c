#include "common.h"

extern s32 func_L00_005C9F50(s32);
extern s32 D_004EE658[];

// Resolve and store the eight menu resource identifiers.
void func_L00_00764C68(void) {
    D_004EE658[0] = func_L00_005C9F50(0x2626);
    D_004EE658[1] = func_L00_005C9F50(0x2627);
    D_004EE658[2] = func_L00_005C9F50(0x2622);
    D_004EE658[3] = func_L00_005C9F50(0x2628);
    D_004EE658[4] = func_L00_005C9F50(0x2624);
    D_004EE658[5] = func_L00_005C9F50(0x2623);
    D_004EE658[6] = func_L00_005C9F50(0x262A);
    D_004EE658[7] = func_L00_005C9F50(0x2625);
}
