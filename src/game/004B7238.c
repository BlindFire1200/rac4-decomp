#include "common.h"

typedef struct {
    char f00[0x10];
    s32 f10;
    char f14[0x1F8 - 0x14];
} Type1;

extern Type1 D_003098F0[];
extern s32 func_00505B20(void);
extern s32 func_004A0208(s32);
extern void func_0049B1A0(s32, s32, s32);

// Sets up the current player's slot in the global player table and notifies the game about it.
void func_004B7238(void) {
    s32 idx = func_00505B20();
    D_003098F0[idx].f10 = func_004A0208(idx);
    func_0049B1A0(idx, 0x12, idx * 0x1F8);
}
