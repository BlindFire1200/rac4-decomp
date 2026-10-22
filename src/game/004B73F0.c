#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s8 pad[492];
} Type1;

extern s32 func_0049B1A0(s32, s32, s32);
extern s32 func_004A0208(s32);
extern s32 func_00505B20(void);
extern Type1 D_003098F0[];

/* Registers the current player slot in the global table and tells the world about the update. */
void func_004B73F0(void) {
    s32 owner;
    owner = func_00505B20();
    D_003098F0[owner].f8 = func_004A0208(owner);
    func_0049B1A0(owner, 0x15, owner * 0x1F8);
}
