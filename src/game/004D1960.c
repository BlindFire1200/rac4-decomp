#include "common.h"

extern s32 D_2219C0;
extern u8 D_31B050[];
extern void func_00499CE0(s32);
extern void func_0049B0D8(s32);
extern void func_0049C4B0(s32, s32, s32, s32);
extern void func_004D2038(void);
extern s32 func_00505B20(void);

// Tear down the entry for the current owner (func_00505B20): reset its +8 word,
// run func_0049C4B0 with the key D_2219C0, run func_004D2038, release
// (func_00499CE0) and clear its handles at +0xC, +0x10 and +0x14, then run
// func_0049B0D8.
void func_004D1960(void) {
    s32 handle_a;
    s32 handle_b;
    s32 handle_c;
    s32 index = func_00505B20();
    u8 *entry = D_31B050 + (index * 0x15C);
    *(s32 *)(entry + 8) = 0;
    func_0049C4B0(index, 0, D_2219C0, 0);
    func_004D2038();
    handle_a = *(s32 *)(entry + 0xC);
    if (handle_a != 0) {
        func_00499CE0(handle_a);
        *(s32 *)(entry + 0xC) = 0;
    }
    handle_b = *(s32 *)(entry + 0x10);
    if (handle_b != 0) {
        func_00499CE0(handle_b);
        *(s32 *)(entry + 0x10) = 0;
    }
    handle_c = *(s32 *)(entry + 0x14);
    if (handle_c != 0) {
        func_00499CE0(handle_c);
        *(s32 *)(entry + 0x14) = 0;
    }
    func_0049B0D8(index);
}
