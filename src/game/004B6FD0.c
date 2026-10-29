/* cflags: -G0 */
/* C adapted from rac4-decomp func_004B7080 (commit 5d517a2) */
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
/* Registers a new vehicle for the current player index in the global table. */

void func_004B6FD0(void) {
    s32 idx = func_00505B20();
    s32 val = func_004A0208(idx);
    s32 off = idx * 0x1F8;
    D_003098F0[idx].f4 = val;
    func_0049B1A0(idx, 0x9, off);
}
