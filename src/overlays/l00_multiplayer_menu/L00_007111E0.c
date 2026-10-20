#include "common.h"

extern void func_0069CC48(void *, s32, s32);
extern void func_0069D318(void *, void *);
extern void func_0069D408(void *, s32);

void func_L00_007111E0(u8 *item) {
    s32 color;
    s32 type;
    if (*(s32 *)(item + 4) == 0) return;
    if (*(u8 **)(item + 0x14) == 0 && *(u8 **)(item + 0x60) == 0) return;
    if (*(s32 *)(item + 4) == 1) {
        if (*(u8 **)(item + 0x14) != 0) func_0069CC48(*(u8 **)(item + 0x14), 1, 0);
        if (*(u8 **)(item + 0x60) != 0) func_0069CC48(*(u8 **)(item + 0x60), 1, 0);
        return;
    }
    if (*(u8 **)(item + 0x14) != 0) func_0069CC48(*(u8 **)(item + 0x14), 1, 1);
    if (*(u8 **)(item + 0x60) != 0) func_0069CC48(*(u8 **)(item + 0x60), 1, 1);
    type = *(s32 *)(item + 4);
    if (type == 3) color = 0x80808080;
    else if (type == 4) color = 0x80D6CBBE;
    else if (type == 5) color = 0x66A6BEFA;
    else if (type == 6) color = 0x66A6BEFA;
    else color = 0x80D6CBBE;
    if (*(u8 **)(item + 0x14) != 0) {
        func_0069D408(*(u8 **)(item + 0x14), color);
        func_0069D318(*(u8 **)(item + 0x14), item + 0x18);
    }
    if (*(u8 **)(item + 0x60) == 0) return;
    func_0069D408(*(u8 **)(item + 0x60), color);
    type = *(u8 *)(item + 0x5C);
    if (type != 0) func_0069D318(*(u8 **)(item + 0x60), item + 0x6C);
    else func_0069D318(*(u8 **)(item + 0x60), item + 0x64);
}
