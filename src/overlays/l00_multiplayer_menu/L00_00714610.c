#include "common.h"

extern void func_0011D920(void *, void *, s32);
extern void func_0069CC48(void *, s32, s32);
extern void func_0069D318(void *, void *);
extern void func_0069D408(void *, s32);
extern s32 func_L00_005C9F50(s32);
extern s32 func_L00_005E6358(s32, s32, s32, s32, s32, s32);
extern char D_00220C68[];

void func_L00_00714610(u8 *item) {
    s32 color;
    s32 type;
    s32 count;
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
    count = *(s32 *)(item + 0x60);
    if (count == 0 && *(s32 *)(item + 0xA0) >= 0) func_0011D920(item + 0x75, (void *)func_L00_005C9F50(*(s32 *)(item + 0xA0)), *(s32 *)(item + 0x60));
    else if (count == 1 && *(s32 *)(item + 0xA4) >= 0) func_0011D920(item + 0x75, (void *)func_L00_005C9F50(*(s32 *)(item + 0xA4)), *(s32 *)(item + 0x60));
    else if (count >= 2 && *(s32 *)(item + 0xA8) >= 0) func_0011D920(item + 0x75, (void *)func_L00_005C9F50(*(s32 *)(item + 0xA8)), *(s32 *)(item + 0x60));
    else func_0011D920(item + 0x75, D_00220C68, *(s32 *)(item + 0x60));
    func_0069D318(*(u8 **)(item + 0x5C), item + 0x75);
    count = *(s32 *)(item + 0x60);
    *(s32 *)(item + 0x64) = count;
}
