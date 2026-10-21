#include "common.h"

extern s32 func_00505B20(void);
extern s32 D_0021EDC8, D_0021EDCC, D_0021EDD4, D_0021EDD8, D_2215A4;
extern u8 D_306DC0[];

// Reset the +0x38 and +0xC words of the entry of D_306DC0 (0x3C bytes each)
// selected by func_00505B20. In mode D_0021EDD4 = 0 with D_0021EDD8 = 1, move
// the pending value D_0021EDCC (or D_0021EDC8 when that is -1) into D_2215A4
// and clear its source.
void func_0049ABE8(void) {
    u8 *entry = D_306DC0 + func_00505B20() * 0x3C;
    s32 old;
    *(s32 *)(entry + 0x38) = 0;
    *(s32 *)(entry + 0xC) = 0;
    if (D_0021EDD4 != 0) return;
    if (D_0021EDD8 != 1) return;
    if (D_0021EDCC != -1) {
        D_2215A4 = D_0021EDCC;
        D_0021EDCC = 0;
        return;
    }
    old = D_0021EDC8;
    D_0021EDC8 = 0;
    D_2215A4 = old;
}
