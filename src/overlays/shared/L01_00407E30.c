#include "common.h"

extern u8 D_003A4E90[];
extern s32 func_L00_00599A28(void *, s32);
extern void func_L00_006B8688(void *, s32);
extern void func_L00_005E75B0(void *, s32, s32, f32);
extern void func_L01_00406F30(void *, s32, s32);

// Store the lookup result for the player's +0x2F00 value in the linked object's
// +0x50 word, then run the player and object setup calls and func_L01_00406F30.
void func_L01_00407E30(u8 *object, u8 *player, s32 param_a, s32 param_b) {
    u8 *linked = *(u8 **)(object + 0xAC);
    *(s32 *)(linked + 0x50) = func_L00_00599A28(D_003A4E90, *(s32 *)(player + 0x2F00));
    func_L00_006B8688(player, -1);
    func_L00_005E75B0(object, 2, 0, 0.0f);
    func_L01_00406F30(object, param_a, param_b);
}
