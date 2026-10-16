#include "common.h"

extern void func_L00_005F1400(s32, s32);
extern void func_L00_005F1498(s32);
extern void func_L00_005F15B8(s32);
extern void func_L00_005F1620(void);

// Switch the player's follow-up handling on its +0x25D4/+0x25CC state values:
// in state 0x14 or 0x76 run the release variant (func_L00_005F1498), otherwise
// the update variant (func_L00_005F15B8, func_L00_005F1620).
void func_L00_006B7048(u8 *player) {
    u8 *p = player;
    if (*(s32 *)(p + 0x25D4) == 0x14 || *(s32 *)(p + 0x25CC) == 0x76) {
        func_L00_005F1400(*(s32 *)(p + 0x2EF0), 0);
        func_L00_005F1498(*(s32 *)(p + 0x2EF0));
    } else {
        func_L00_005F1400(*(s32 *)(p + 0x2EF0), 1);
        func_L00_005F15B8(*(s32 *)(p + 0x2EF0));
        func_L00_005F1620();
    }
}
