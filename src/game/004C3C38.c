#include "common.h"

extern s32 func_004978C0(s32);
extern void func_00497980(s32);
extern void func_0049C200(s32, s32);
extern void func_0049C328(s32, s32, s32);
extern void func_004C3A08(void);
extern s32 func_00505B20(void);
extern void *func_00510BE8(s32);
extern s32 func_0054A7E0(s32, s32);
extern u8 D_30B7F8[];

// Set up the entry for the current owner (func_00505B20): store the
// func_0054A7E0 result at +0x14, run func_00497980 (0x13) and func_004C3A08,
// run func_0049C328 and func_0049C200 for slot 2 and set the entry state to 3.
void func_004C3C38(void) {
    s32 index = func_00505B20();
    u8 *entry = D_30B7F8 + index * 0x74;
    void *player = func_00510BE8(index);
    *(s32 *)(entry + 0x14) = func_0054A7E0(*(s32 *)((u8 *)player + 0x26E4), func_004978C0(*(s32 *)(entry + 0xC)));
    func_00497980(0x13);
    func_004C3A08();
    func_0049C328(index, 2, 1);
    func_0049C200(index, 2);
    *(s32 *)entry = 3;
}
