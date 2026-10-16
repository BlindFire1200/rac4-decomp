#include "common.h"
extern void func_L00_005BCBF0(void *, void *, s32);
extern void func_L00_005EBC08(s32, void *);
void func_L00_006BD738(u8 *arg0, u8 *arg1) {
    if (arg0[0x266D] != 0) return;
    if (arg0[0x2ECC] == 0) {
        arg0[0x2ECC] = 1;
        func_L00_005BCBF0(arg0 + 0x2EAC, arg1, 0x10);
    } else {
        arg0[0x2EBA] |= arg1[0xE];
        *(f32 *)(arg0 + 0x2EAC) += *(f32 *)(arg1 + 0);
        *(f32 *)(arg0 + 0x2EB0) += *(f32 *)(arg1 + 4);
        *(f32 *)(arg0 + 0x2EB4) += *(f32 *)(arg1 + 8);
    }
    if ((*(s8 *)(arg0 + 0x2EB9) & 0xF0) == 0) func_L00_005EBC08(*(s32 *)(arg0 + 0x2EF0), arg0 + 0x2EBC);
}
