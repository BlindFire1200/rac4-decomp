#include "common.h"

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
/* The callee reads two arguments (index, value); these callers also pass a third that the callee overwrites, so it is declared without a parameter list. */
extern void func_0049B1A0();
extern s32 func_004A0208(s32);
extern s32 func_00505B20(void);
/* Registers the current player slot in the global table and tells the world about the update. */
void func_004B73F0(void) {
    s32 owner;
    owner = func_00505B20();
    D_003098F0[owner].f8 = func_004A0208(owner);
    func_0049B1A0(owner, 0x15, owner * 0x1F8);
}
