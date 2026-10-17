#include "common.h"

s32 func_L00_005C9F50(s32);
extern s32 D_004EE5B8[];

// Fill the 11-entry table D_004EE5B8 with func_L00_005C9F50 lookups for the ids
// 0x2EB5-0x2EBF.
void func_L00_00764250(void) {
    D_004EE5B8[0] = func_L00_005C9F50(0x2EB5);
    D_004EE5B8[1] = func_L00_005C9F50(0x2EB6);
    D_004EE5B8[2] = func_L00_005C9F50(0x2EB7);
    D_004EE5B8[3] = func_L00_005C9F50(0x2EB8);
    D_004EE5B8[4] = func_L00_005C9F50(0x2EB9);
    D_004EE5B8[5] = func_L00_005C9F50(0x2EBA);
    D_004EE5B8[6] = func_L00_005C9F50(0x2EBB);
    D_004EE5B8[7] = func_L00_005C9F50(0x2EBC);
    D_004EE5B8[8] = func_L00_005C9F50(0x2EBD);
    D_004EE5B8[9] = func_L00_005C9F50(0x2EBE);
    D_004EE5B8[10] = func_L00_005C9F50(0x2EBF);
}
