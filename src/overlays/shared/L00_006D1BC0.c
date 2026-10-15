#include "common.h"

extern s32 func_L00_005E60D0(s32, s32);
extern void func_L00_005E3648(s32, s32, s32, s32);

// Clear the pending flag and forward the player's object and parameters,
// substituting one computed value when the +0x3A6 field is set.
void func_L00_006D1BC0(u8 *player) {
    s32 value;
    if (player[0x266F] != 0) player[0x266F] = 0;
    if (*(s16 *)(player + 0x3A6) != 0) {
        value = func_L00_005E60D0(0x7F, 0xFF);
        func_L00_005E3648(*(s32 *)(player + 0x2EF0), value,
                          *(s32 *)(player + 0x2E8C), value);
    } else {
        func_L00_005E3648(*(s32 *)(player + 0x2EF0),
                          *(s32 *)(player + 0x2E88),
                          *(s32 *)(player + 0x2E8C),
                          *(s32 *)(player + 0x2E90));
    }
}
