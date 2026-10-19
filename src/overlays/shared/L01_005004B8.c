#include "common.h"

extern void *func_L00_005DEBD0(s32, s32, s32);
extern void func_L01_00591BD8(void *, s32, s32);
extern u8 *D_00222D14;

// Clear bit 12 of the flags at +0x34, link the +0x1C0 entry of the D_00222D14
// list into the linked object (+0x1D8) with its callback (+0x204), default the
// +0x1D4 word from +0x140 and move to state 2 (-1).
void func_L01_005004B8(void *self) {
    u8 *linked = *(u8 **)((u8 *)self + 0xAC);
    u8 *object;
    *(u16 *)((u8 *)self + 0x34) &= 0xEFFF;
    *(s32 *)linked = 0;
    object = D_00222D14 + (*(s32 *)(linked + 0x1C0) << 8);
    *(u8 **)(linked + 0x1D8) = object;
    *(void **)(linked + 0x204) = func_L00_005DEBD0(*(s16 *)(object + 0xBC), 0, 0x48);
    if (*(s32 *)(linked + 0x1D4) == -1) {
        s32 value = *(s32 *)(linked + 0x140);
        if (value != -1) *(s32 *)(linked + 0x1D4) = value;
    }
    func_L01_00591BD8(self, 2, -1);
}
