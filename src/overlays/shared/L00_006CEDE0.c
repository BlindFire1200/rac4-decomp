#include "common.h"

extern s32 func_L00_0061D4E8(void *, s16, void *, void *, f32);

// Switch the +0x3D4 state to 4 when the check at +0xA0 succeeds.
void func_L00_006CEDE0(u8 *player) {
    u8 *data = player + 0xA0;
    if (func_L00_0061D4E8(player, *(s16 *)(player + 0x2E18), data, data,
                          *(f32 *)(player + 0x204)) != 0) {
        *(s16 *)(player + 0x3D4) = 4;
    }
}
