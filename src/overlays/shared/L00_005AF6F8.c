#include "common.h"

extern void func_L00_005AECE8(s32);
extern void func_L00_005B0ED8(s32, s32, s32, s32);
extern void func_L00_005C4BB0(s32);
extern s32 D_00222188;

// Reset sequence ending in the +0xF0 setting.
void func_L00_005AF6F8(void) {
    func_L00_005C4BB0(0);
    func_L00_005B0ED8(0, 0, 0, 0x80);
    D_00222188 = 0xF0;
    func_L00_005AECE8(0);
}
