#include "common.h"

extern void func_00499CE0(s32);
extern void func_0049B0D8(s32);
extern void func_0049C4B0(s32, s32, s32, s32);
extern void func_004CFEC0(void);
extern s32 func_00505B20(void);
extern s32 D_221980;
extern u8 D_316D00[];

// Tear down the entry for the current owner (func_00505B20): reset its +8 word,
// run func_0049C4B0 with the key D_221980, run func_004CFEC0, release
// (func_00499CE0) and clear its handles at +0xC and +0x10, then run
// func_0049B0D8.
void func_004CF6D8(void) {
    s32 index = func_00505B20();
    u8 *entry = D_316D00 + index * 0x9E0;
    *(s32 *)(entry + 8) = 0;
    func_0049C4B0(index, 0, D_221980, 0);
    func_004CFEC0();
    if (*(s32 *)(entry + 0xC) != 0) {
        func_00499CE0(*(s32 *)(entry + 0xC));
        *(s32 *)(entry + 0xC) = 0;
    }
    if (*(s32 *)(entry + 0x10) != 0) {
        func_00499CE0(*(s32 *)(entry + 0x10));
        *(s32 *)(entry + 0x10) = 0;
    }
    func_0049B0D8(index);
}
