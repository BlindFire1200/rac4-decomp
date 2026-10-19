#include "common.h"

extern s32 func_L00_005C9710(s32);

// Return 1 when any of the four slots at +0x50 of the linked +0xAC object is set
// (not -1) and its halfword id passes func_L00_005C9710; otherwise 0.
s32 func_L01_003D0668(void *object) {
    s32 i;
    s32 *slots = (s32 *)(*(u8 **)(object + 0xAC) + 0x50);
    for (i = 0; i < 4; i++) {
        if (slots[i] != -1 && func_L00_005C9710(*(s16 *)&slots[i]) != 0) return 1;
    }
    return 0;
}
