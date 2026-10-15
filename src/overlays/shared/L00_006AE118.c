#include "common.h"

extern void func_L00_005B0038(void *, void *, s32);
extern s32 D_002221DC;
extern void func_L00_006AE1E0(void);

// Register the callback once per player, guarded by the +0x25C8 flag.
void func_L00_006AE118(u8 *player) {
    if (player[0x25C8] == 0) {
        player[0x25C8] = 1;
        func_L00_005B0038(&D_002221DC, func_L00_006AE1E0, *(s32 *)(player + 0x2EF0));
    }
}
