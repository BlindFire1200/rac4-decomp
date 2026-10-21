#include "common.h"

extern void func_L00_005BCBF0(void *, void *, s32);
extern void func_L00_005EBC08(s32, void *);

// Accumulate a 16-byte input record into the player's +0x2EAC buffer (copy it on
// the first call, add its three floats and OR its flag byte afterwards), then
// forward the buffer when the +0x2EB9 flags have no high nibble. Does nothing
// when the +0x266D flag is set.
void func_L00_006BD738(u8 *player, u8 *input) {
    if (player[0x266D] != 0) return;
    if (player[0x2ECC] == 0) {
        player[0x2ECC] = 1;
        func_L00_005BCBF0(player + 0x2EAC, input, 0x10);
    } else {
        player[0x2EBA] |= input[0xE];
        *(f32 *)(player + 0x2EAC) += *(f32 *)(input + 0);
        *(f32 *)(player + 0x2EB0) += *(f32 *)(input + 4);
        *(f32 *)(player + 0x2EB4) += *(f32 *)(input + 8);
    }
    if ((*(s8 *)(player + 0x2EB9) & 0xF0) == 0) func_L00_005EBC08(*(s32 *)(player + 0x2EF0), player + 0x2EBC);
}
