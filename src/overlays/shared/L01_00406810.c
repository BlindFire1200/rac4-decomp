#include "common.h"

typedef int u128 __attribute__((mode(TI)));
extern s32 func_L00_005E60A0(s32);
extern void func_L01_00406718(u128, u128);

// Queue the 128-bit value (at most 15 entries, counter at +0xF5) on the linked
// +0x48 object's +0xAC block unless that object is in state 0xFE or 0xFD, then
// forward value and extra to func_L01_00406718. Skipped when force is zero and
// func_L00_005E60A0(2) is nonzero.
void func_L01_00406810(u8 *object, u128 value, u128 extra, s32 force) {
    u8 *target;
    if (force == 0 && func_L00_005E60A0(2) != 0) return;
    target = *(u8 **)(*(u8 **)(object + 0xAC) + 0x48);
    if (target != 0 && target[0x20] != 0xFE && target[0x20] != 0xFD) {
        u8 *pending = *(u8 **)(target + 0xAC);
        if (pending[0xF5] < 0xF) {
            ((u128 *)pending)[pending[0xF5]] = value;
            pending[0xF5]++;
        }
    }
    func_L01_00406718(value, extra);
}
