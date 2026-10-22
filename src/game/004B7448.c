#include "common.h"

typedef struct {
    u8 pad00[8];
    s32 f08;
    u8 pad0C[0x1F8 - 0xC];
} Type1;

extern Type1 D_003098F0[];
extern s32 func_0049B1A0(s32, s32, s32);
extern s32 func_004A0208(s32);
extern s32 func_00505B20(void);

/* Stores the owner's updated value in its slot of the per-owner table and re-registers the owner. */
void func_004B7448(void) {
    s32 owner = func_00505B20();
    s32 value = func_004A0208(owner);
    D_003098F0[owner].f08 = value;
    func_0049B1A0(owner, 0x1C, owner * 0x1F8);
}
