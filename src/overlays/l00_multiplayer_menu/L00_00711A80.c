#include "common.h"

extern void func_0069CC48(void *, s32, s32);
extern void func_0069D318(void *, void *);
extern void func_0069D408(void *, s32);
extern s32 func_L00_005E6358(s32, s32, s32, s32, s32, s32);
extern char D_00220C10[];

// Update the two sub-objects at +0x14 and +0x5C for the mode word at +4: mode 0
// does nothing, mode 1 only runs func_0069CC48 on them, other modes also set a
// color from the mode (3-6) and a position (+0x18, and +0x64 indexed by +0x14A8
// or D_00220C10 when the index is negative).
void func_L00_00711A80(u8 *item) {
    s32 color;
    s32 type;
    s32 index;
    if (*(s32 *)(item + 4) == 0) return;
    if (*(u8 **)(item + 0x14) == 0 && *(u8 **)(item + 0x5C) == 0) return;
    if (*(s32 *)(item + 4) == 1) {
        if (*(u8 **)(item + 0x14) != 0) func_0069CC48(*(u8 **)(item + 0x14), 1, 0);
        if (*(u8 **)(item + 0x5C) != 0) func_0069CC48(*(u8 **)(item + 0x5C), 1, 0);
        return;
    }
    if (*(u8 **)(item + 0x14) != 0) func_0069CC48(*(u8 **)(item + 0x14), 1, 1);
    if (*(u8 **)(item + 0x5C) != 0) func_0069CC48(*(u8 **)(item + 0x5C), 1, 1);
    type = *(s32 *)(item + 4);
    if (type == 3) color = 0x80808080;
    else if (type == 4) color = 0x80D6CBBE;
    else if (type == 5) color = func_L00_005E6358(0x80D6CBBE, 0x66A6BEFA, 0x2D, 1, 0, 1);
    else if (type == 6) color = 0x66A6BEFA;
    else color = 0x80D6CBBE;
    if (*(u8 **)(item + 0x14) != 0) {
        func_0069D408(*(u8 **)(item + 0x14), color);
        func_0069D318(*(u8 **)(item + 0x14), item + 0x18);
    }
    if (*(u8 **)(item + 0x5C) == 0) return;
    func_0069D408(*(u8 **)(item + 0x5C), color);
    index = *(s32 *)(item + 0x14A8);
    if (index >= 0) func_0069D318(*(u8 **)(item + 0x5C), item + 0x64 + index * 0x50);
    else func_0069D318(*(u8 **)(item + 0x5C), D_00220C10);
}
