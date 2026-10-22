#include "common.h"

extern void func_0049DFF8(s32 arg0, s32 arg1);
extern void func_00505D30(s32 arg0);

extern s32 D_307B30[];

// Clear the pending-state flags in D_307B30 and reset the sound engine.
void func_004A32C0(void) {
    if (D_307B30[7] != 0 || D_307B30[8] != 0) {
        D_307B30[7] = 0;
        D_307B30[8] = 0;
        func_0049DFF8(4, 0);
    }
    func_00505D30(0x16);
}
