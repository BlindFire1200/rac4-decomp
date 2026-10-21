#include "common.h"

extern s32 D_0021E6B4;
extern s32 D_0021DFF0[];
extern s32 func_L00_006FF6D0(s32, s32);
extern u8 *func_L00_00700690(s32, s32);

// Check whether the player's +0x26E4 value reaches the required amount for the
// given entry (-1 selects the player's current one). Returns 1 when the check
// does not apply (flag unset, entry disabled, or the +0x20 flag of the first
// global entry is set in mode 1).
s32 func_L00_006CE3C0(u8 *player, s32 entry_id, s32 required) {
    s32 index = entry_id;
    u8 *record;

    if (player[0x266D] == 0) {
        return 1;
    }
    if (index == -1) {
        index = *(s32 *)(player + 0x2318);
    }
    record = func_L00_00700690(index, 0);
    if (*(s16 *)(record + 0x42) == 0) {
        return 1;
    }
    if (D_0021E6B4 == 1 && D_0021DFF0[0] != 0 && *(s8 *)(D_0021DFF0[0] + 0x20) != 0) {
        return 1;
    }
    return func_L00_006FF6D0(*(s32 *)(player + 0x26E4), index) >= required;
}
