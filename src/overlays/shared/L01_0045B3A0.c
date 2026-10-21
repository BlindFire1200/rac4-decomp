#include "common.h"
extern s32 func_L01_0045B378(void *);
s32 func_L01_0045B3A0(u8 *object) {
    u8 *state = *(u8 **)(object + 0xAC);
    if (state[0x614] != 0) return 0;
    if (*(s32 *)(state + 0x46C) != -1) return 0;
    if (func_L01_0045B378(object) == 3) return 0;
    return object[0x67] != 5;
}
