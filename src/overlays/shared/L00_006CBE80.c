#include "common.h"

extern s32 func_L00_006CBE68(s32, s32, void *, void *);

// If the player is in state 2 and the check on its object succeeds, copy the
// value at +0x640 into the two linked objects.
void func_L00_006CBE80(u8 *player) {
    s32 result;
    u8 *object;
    u32 out0;
    u32 out1;
    void *left;
    void *right;
    if (*(s32 *)(player + 0x2404) != 2) return;
    object = *(u8 **)(player + 0x2EF0);
    result = func_L00_006CBE68((s32)player, object[0x54], &out0, &out1);
    if (result == 0) return;
    left = *(void **)(player + 0x23E0);
    if (left != 0) *(f32 *)((u8 *)left + 0x48) = *(f32 *)(player + 0x640);
    right = *(void **)(player + 0x23E4);
    if (right != 0) *(f32 *)((u8 *)right + 0x48) = *(f32 *)(player + 0x640);
}
