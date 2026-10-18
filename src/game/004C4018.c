#include "common.h"
extern s32 func_004978C0(s32);
extern void func_00497980(s32);
extern void func_004C2610(void);
extern void func_004C34D8(void);
extern s32 func_00505B20(void);
extern void *func_00510BE8(s32);
extern s32 func_0054A290(s32, s32, s32);
extern u8 D_30B7F8[];
void func_004C4018(void) {
    s32 result = 0;
    s32 index = func_00505B20();
    u8 *entry = D_30B7F8 + index * 0x74;
    void *object = func_00510BE8(index);
    if (func_0054A290(*(s32 *)((u8 *)object + 0x26E4), func_004978C0(*(s32 *)(entry + 0xC)), *(s32 *)(entry + 0x18) + 1) != 0) {
        result = 1;
        func_004C2610();
    }
    if (result != 0) {
        func_00497980(0x14);
        func_004C34D8();
        *(s32 *)(entry + 8) |= 0x32;
    } else {
        func_00497980(4);
    }
}
