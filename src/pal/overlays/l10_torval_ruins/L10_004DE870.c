#include "common.h"

extern void func_L00_00706A38(void *);
extern void func_00474368(void *, s32, s32);

// Stores the linked halfword at +0x74 * 50.0 in +0x76, calls func_L00_00706A38, sets the byte at
// +0x30 to 0xFF and calls func_00474368 with 1 when the linked word at +0x78 is set, else 2.
void func_L10_004DE870(u8 *arg0) {
    u8 *vars = *(u8 **)(arg0 + 0xAC);

    *(s16 *)(vars + 0x76) = (f32)*(s16 *)(vars + 0x74) * 50.0f;
    func_L00_00706A38(arg0);
    arg0[0x30] = 0xFF;
    if (*(s32 *)(vars + 0x78) != 0) {
        func_00474368(arg0, 1, -1);
    } else {
        func_00474368(arg0, 2, -1);
    }
}
