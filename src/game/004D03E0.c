#include "common.h"

extern s32 D_2219A0;
extern u8 D_31A960[];
s32 func_00436C58(s32);
void func_00499CE0(s32);
void func_0049B0D8(s32);
void func_0049C4B0(s32, s32, s32, s32);
void func_004D14C8(void);
s32 func_00505B20(void);

// Tear down the entry for the current owner (func_00505B20, D_31A960 with 0x1A4
// bytes each): reset its +8 word, run func_0049C4B0 with the key D_2219A0 and
// func_004D14C8, release (func_00499CE0) and clear its handles at +0xC, +0x10
// and +0x14, run func_00436C58 (0) and func_0049B0D8.
void func_004D03E0(void) {
    s32 owner = func_00505B20();
    u8 *entry = D_31A960 + owner * 0x1A4;
    *(s32 *)(entry + 8) = 0;
    func_0049C4B0(owner, 0, D_2219A0, 0);
    func_004D14C8();
    if (*(s32 *)(entry + 0xC) != 0) { func_00499CE0(*(s32 *)(entry + 0xC)); *(s32 *)(entry + 0xC) = 0; }
    if (*(s32 *)(entry + 0x10) != 0) { func_00499CE0(*(s32 *)(entry + 0x10)); *(s32 *)(entry + 0x10) = 0; }
    if (*(s32 *)(entry + 0x14) != 0) { func_00499CE0(*(s32 *)(entry + 0x14)); *(s32 *)(entry + 0x14) = 0; }
    func_00436C58(0);
    func_0049B0D8(owner);
}
