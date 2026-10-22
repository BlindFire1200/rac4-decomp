#include "common.h"

extern s32 func_00505B20(void);
extern s32 func_004A0208(s32);
extern s32 func_0049B1A0(s32, s32, s32);

typedef struct {
    s32 f0;
    s32 f4;
    s32 pad[124];
} Type1;

extern Type1 D_003098F0[];

/* Grabs the current player slot, stores the owner handle in the global player table and registers the slot. */
void func_004B7130(void) {
    s32 idx;

    idx = func_00505B20();
    D_003098F0[idx].f4 = func_004A0208(idx);
    func_0049B1A0(idx, 7, idx * 0x1F8);
}
