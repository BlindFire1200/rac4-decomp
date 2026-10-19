#include "common.h"

typedef struct { u8 pad0[8]; s32 f8; } Type1;
extern void func_004A1170(void *);
extern void func_004A1440(void *, void *, s32);
extern s32 func_00505B20(void);
extern void func_004D94F8(void);
extern u8 D_321140[];
extern u8 D_321590[];

// Reset the 0x114-byte record of D_321140 selected by func_00505B20: run
// func_004D94F8 and func_004A1170 on its +0xA8 block, run func_004A1440 for six
// output slots at D_321590 (8 bytes each) with -1, then set bit 1 and clear bit
// 0 of its +8 flags.
void func_004D9378(void) {
    s32 count = 5;
    Type1 *record;
    u8 *out;
    record = (Type1 *)(D_321140 + (func_00505B20() * 0x114));
    func_004D94F8();
    func_004A1170((u8 *)record + 0xA8);
    out = D_321590;
    do {
        func_004A1440((u8 *)record + 0xA8, out, -1);
        out += 8;
        count--;
    } while (count >= 0);
    record->f8 = (record->f8 | 2) & ~1;
}
