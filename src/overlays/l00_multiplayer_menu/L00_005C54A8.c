#include "common.h"

typedef struct {
    u8 f00[0x8C];
    s32 f8C;
    s32 f90;
} Type1;

extern Type1 D_0023EA60;

/* Sets two multiplayer menu fields: arg0 (or 0x40) at +0x8C and arg1 (or 0x10) at +0x90 of D_0023EA60. */
void func_L00_005C54A8(s32 arg0, s32 arg1) {
    s32 v = arg0 ?: 0x40;
    s32 w = arg1 ?: 0x10;
    D_0023EA60.f8C = v;
    D_0023EA60.f90 = w;
}
