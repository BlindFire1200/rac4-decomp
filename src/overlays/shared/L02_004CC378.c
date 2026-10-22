#include "common.h"

extern s32 func_L02_004CD488(s32);

// Bump the linked object's +0x89 counter and drop its +0x88 counter when the call succeeds.
void func_L02_004CC378(void *arg0, s32 arg1) {
    u8 *linked = *(u8 **)((u8 *)arg0 + 0xAC);
    *(u8 *)(linked + 0x89) = (u8)(*(u8 *)(linked + 0x89) + 1);
    if (func_L02_004CD488(arg1) != 0) {
        *(u8 *)(linked + 0x88) = (u8)(*(u8 *)(linked + 0x88) - 1);
    }
}
