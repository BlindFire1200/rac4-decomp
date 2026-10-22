#include "common.h"

extern void func_L00_005FED90(s32, s32, s32);
extern void func_L00_0071B478(void *);
extern void func_L00_0071BE80(s32);
extern s8 D_00220A20;

s8 D_00220A21 = 0;

// Clears the multiplayer menu state flags, refreshes the menu, and resets the menu buffer.
void func_L00_0073B928(void *arg0) {
    D_00220A20 = 0;
    D_00220A21 = 0;
    func_L00_0071B478(arg0);
    func_L00_0071BE80((s32)arg0);
    func_L00_005FED90(0, 0, 0x400);
}
