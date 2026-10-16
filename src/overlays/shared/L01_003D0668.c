#include "common.h"
extern s32 func_L00_005C9710(s32);
s32 func_L01_003D0668(void *arg0) {
    s32 i;
    s32 *items = (s32 *)(*(u8 **)(arg0 + 0xAC) + 0x50);
    for (i = 0; i < 4; i++) {
        if (items[i] != -1 && func_L00_005C9710(*(s16 *)&items[i]) != 0) return 1;
    }
    return 0;
}
