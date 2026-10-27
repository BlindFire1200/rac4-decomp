#include "common.h"

extern s32 D_001A5B80_[];
#define D_001A5B80 (D_001A5B80_[0])

/* Stores arg0 at the global and sets up its header (link words at +4, +8, +0xC; next at +0x10). */
void *func_00127DC8(s32 arg0) {
    void *temp_v1;

    D_001A5B80 = arg0;
    temp_v1 = (void *)&D_001A5B80_[0];
    *(s32 *)((u8 *)temp_v1 + 0x4) = 0;
    *(void **)((u8 *)temp_v1 + 0xC) = (u8 *)temp_v1 + 0x10;
    *(void **)((u8 *)temp_v1 + 0x8) = (u8 *)temp_v1 + 0x10;
    return temp_v1;
}
