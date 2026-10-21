#include "common.h"

extern void func_L00_006ACA80(void *, void *);

// Reset the +0x2E56 counter and run func_L00_006ACA80 for each of the 0x12 entries.
void func_L00_006ACE58(u8 *player) {
    s32 i;
    *(s16 *)(player + 0x2E56) = 0;
    for (i = 0; i < 0x12; i++) {
        func_L00_006ACA80(player, player + 0x820 + i * 0xB0);
    }
}
