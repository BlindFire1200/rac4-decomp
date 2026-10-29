#include "common.h"

extern s32 func_00505B20(void);
extern s32 func_004A0208(s32);
/* The callee reads two arguments (index, value); these callers also pass a third that the callee overwrites, so it is declared without a parameter list. */
extern void func_0049B1A0();

typedef struct {
    u8 f0;
    u8 pad1[3];
    s32 f4;
    s32 f8;
} Type2;

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    u8 pad14[0x194 - 0x14];
    Type2 f194[8];
    s32 f1F4;
} Type1;

extern Type1 D_003098F0[];
/* stores the current owner's new value in its slot of the per-owner table and re-registers the owner */
void func_004B7028(void) {
    s32 owner = func_00505B20();
    s32 value = func_004A0208(owner);
    D_003098F0[owner].f4 = value;
    func_0049B1A0(owner, 0xA, owner * 0x1F8);
}
