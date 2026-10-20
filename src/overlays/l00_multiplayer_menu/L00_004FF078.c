#include "common.h"

// Run the shutdown steps in order and return 1.

extern void func_L00_00500CF8(void);
extern void func_L00_004FF0C8(void);
extern void func_L00_00517460(void);
extern void func_L00_00516ED8(void);
extern s32 func_L00_00525B70(s32 arg0);
extern void func_L00_00520D28(s32 arg0);
extern void func_L00_005085A8(void);

s32 func_L00_004FF078(void) {
    func_L00_00500CF8();
    func_L00_004FF0C8();
    func_L00_00517460();
    func_L00_00516ED8();
    func_L00_00520D28(func_L00_00525B70(0));
    func_L00_005085A8();
    return 1;
}
