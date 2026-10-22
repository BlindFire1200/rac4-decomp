#include "common.h"

extern void func_00497980(s32);
extern s32 D_0030A160[];
s32 D_0021F840 = 0;

// Clears the pending-request flag D_0021F840, marks table entry arg0 as state 2
// in the 16-byte-stride table D_0030A160, then calls func_00497980 with 0xC.
void func_004B7E40(s32 arg0) {
    D_0021F840 = 0;
    D_0030A160[arg0 * 4] = 2;
    func_00497980(0xC);
}
