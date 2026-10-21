#include "common.h"

extern u8 D_221650;
extern u8 func_00498100(s32);
extern s32 func_004A1A60(void *, s32);
extern s32 func_004A89E8(s32);
extern void func_00504F68(s32, s32);
extern void func_00505328(s32, s32);
extern void func_005054F8(s32, u16);
extern s32 func_00505B20(void);
extern void *func_00548D28(s32, s32);

// Set up slot arg0 for the current owner: when kind is zero only call
// func_00504F68 (slot, 0); otherwise enable it when func_00498100(owner) is
// zero or the slot equals func_004A1A60 (&D_221650, 0x33), then run
// func_00504F68, func_00505328 and func_005054F8 with the lookups for kind.
void func_004A8B10(s32 slot, s32 kind) {
    s32 index = func_00505B20();
    s32 enabled;
    if (kind == 0) {
        func_00504F68(slot, 0);
        return;
    }
    enabled = 0;
    if (func_00498100(index) == 0 || slot == func_004A1A60(&D_221650, 0x33)) enabled = 1;
    func_00504F68(slot, enabled);
    func_00505328(slot, func_004A89E8(kind));
    func_005054F8(slot, *(u16 *)((u8 *)func_00548D28(kind, 0) + 0x36));
}
