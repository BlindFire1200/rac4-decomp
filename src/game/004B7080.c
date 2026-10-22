#include "common.h"

extern s32 func_00505B20(void);
extern s32 func_004A0208(s32);
extern void func_0049B1A0(s32, s32, s32);

typedef struct {
    s32 f00;
    s32 f04;
    u8 f08[0x1F0];
} Type1;

extern Type1 D_003098F0[];

/* Registers a new vehicle for the current player index in the global table. */
void func_004B7080(void) {
    s32 idx = func_00505B20();
    s32 val = func_004A0208(idx);
    s32 off = idx * 0x1F8;
    D_003098F0[idx].f04 = val;
    func_0049B1A0(idx, 0xC, off);
}
