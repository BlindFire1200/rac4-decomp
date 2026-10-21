#include "common.h"

extern s32 func_0049C390(s32, s32);
extern void func_004C3C38(void);
extern void func_004C3CE0(void);
extern s32 func_00505B20(void);
extern u8 D_30B7F8[];

// Run func_004C3C38 or func_004C3CE0 for type 1 or 2 of the current owner's
// entry (D_30B7F8, 0x74 bytes each). When its state is not 1, set bit 7 of its
// +8 flags and run func_0049C390 for slots 0 and 1.
void func_004C3E48(void) {
    s32 index = func_00505B20();
    u8 *entry = D_30B7F8 + index * 0x74;
    s32 type = *(s32 *)(entry + 0x10);
    switch (type) {
    case 1: func_004C3C38(); break;
    case 2: func_004C3CE0(); break;
    }
    if (*(s32 *)entry != 1) {
        *(s32 *)(entry + 8) |= 0x80;
        func_0049C390(index, 0);
        func_0049C390(index, 1);
    }
}
