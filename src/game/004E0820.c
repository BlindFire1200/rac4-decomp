#include "common.h"

// Looks up the entry at offset 0x4BBC of the table at 0x1CA040 (0x1C2040 + 0x8000),
// hands it to func_00159638 together with index 2, then calls func_004399A0.
extern void func_00159638(s32, s32);
extern void func_004399A0(void);
extern s32 D_001C2040[];

void func_004E0820(void) {
    func_00159638(2, D_001C2040[0x32EF]);
    func_004399A0();
}
