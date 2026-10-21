#include "common.h"

extern s32 D_2217E0;
extern s32 D_30A490[];
extern void func_00499CE0(s32);
extern void func_0049B0D8(s32);
extern void func_0049C4B0(s32, s32, s32, s32);
extern void func_004BAC70(void);
extern s32 func_00505B20(void);

// Tear down the entry for the current owner (func_00505B20): reset its +8 word,
// run func_0049C4B0 with the key D_2217E0, run func_004BAC70, release
// (func_00499CE0) and clear its handles at +0xC, +8 and +0x10, then run
// func_0049B0D8.
void func_004B9DF8(void) {
    s32 handle_a;
    s32 handle_b;
    s32 handle_c;
    s32 index = func_00505B20();
    u8 *entry = (u8 *)D_30A490 + (index * 0x14);
    func_0049C4B0(index, 0, D_2217E0, 0);
    func_004BAC70();
    handle_a = *(s32 *)(entry + 0xC);
    if (handle_a != 0) {
        func_00499CE0(handle_a);
        *(s32 *)(entry + 0xC) = 0;
    }
    handle_b = *(s32 *)(entry + 0x8);
    if (handle_b != 0) {
        func_00499CE0(handle_b);
        *(s32 *)(entry + 0x8) = 0;
    }
    handle_c = *(s32 *)(entry + 0x10);
    if (handle_c != 0) {
        func_00499CE0(handle_c);
        *(s32 *)(entry + 0x10) = 0;
    }
    func_0049B0D8(index);
}
