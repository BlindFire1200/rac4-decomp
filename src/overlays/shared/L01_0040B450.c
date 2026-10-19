#include "common.h"

void func_L00_0066D220(s32, s32, s32);
extern s32 D_003946F0[];

typedef struct { u8 pad0[0x2F10]; s32 f2F10; } Type1;

// Run func_L00_0066D220 (1, 0, param) and clear the D_003946F0 entry indexed by
// the player's +0x2F10 word.
void func_L01_0040B450(s32 param, Type1 *player) {
    func_L00_0066D220(1, 0, param);
    D_003946F0[player->f2F10] = 0;
}
