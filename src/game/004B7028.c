#include "common.h"

extern s32 func_00505B20(void);
extern s32 func_004A0208(s32);
extern s32 func_0049B1A0(s32, s32, s32);

typedef struct {
    s32 f0;
    s32 f4;
    u8 pad[0x1F0];
} Type1;

extern Type1 D_003098F0[];

/* stores the current owner's new value in its slot of the per-owner table and re-registers the owner */
void func_004B7028(void) {
    s32 owner = func_00505B20();
    s32 value = func_004A0208(owner);
    D_003098F0[owner].f4 = value;
    func_0049B1A0(owner, 0xA, owner * 0x1F8);
}
