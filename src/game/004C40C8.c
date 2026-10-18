#include "common.h"

extern u8 D_30B7F8[];
extern s32 func_00505B20(void);
extern void *func_00510BE8(s32);
extern s32 func_004978C0(s32);
extern s32 func_0054A4A0(s32, s32, s32, s32);
extern s32 func_0054A788(s32, s32, s32);
extern void func_004C2610(void);
extern void func_0049C328(s32, s32, s32);
extern s32 func_0049C390(s32, s32);
extern void func_004C33D0(void);
extern void func_004C34D8(void);
extern void func_00497980(s32);

void func_004C40C8(void) {
    s32 index = func_00505B20();
    u8 *entry = D_30B7F8 + index * 0x74;
    void *object = func_00510BE8(index);
    s32 id = func_004978C0(*(s32 *)(entry + 0xC));
    s32 count = *(s32 *)(entry + 0x18);
    s32 next = count + 1;
    if (func_0054A4A0(*(s32 *)((u8 *)object + 0x26E4), id, next, 1) != 0) {
        func_004C2610();
        if (entry[0x62] == 0) {
            if ((s8)entry[0x58] <= 0) {
                entry[0x62] = 1;
                func_0049C328(index, 3, 1);
                func_0049C390(index, 2);
            } else if (func_0054A788(*(s32 *)((u8 *)object + 0x26E4), id, next) <= 0) {
                count = (s8)entry[0x58] - 1;
            }
        }
        func_004C33D0();
        *(s32 *)(entry + 0x18) = count;
        func_004C34D8();
        func_00497980(0x14);
        *(s32 *)(entry + 8) |= 0x32;
    }
}
