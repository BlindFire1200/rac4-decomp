#include "common.h"
extern void func_0049C290(s32, s32);
extern void func_0049C400(s32, s32, s32, s32, s32);
extern void func_0049D170(s32, s32, s32);
extern void func_0049D280(s32, s32);
extern void func_004A0BE8(void *, s32);
extern void func_004A0BF0(void *, s32, s32);
extern void func_004A1140(void *, void *, s32, void *, s32, s32);
extern s32 func_004A1A60(s32 *, s32);
extern void func_004D6378(void);
extern s32 func_00505B20(void);
extern void func_00505DD0(s32, s32);
extern void func_004D6200(void);
extern s32 D_221AD8;
extern u8 D_31D100[];
void func_004D5E48(void) {
    s32 value;
    s32 owner = func_00505B20();
    u8 *root = owner * 0x528 + D_31D100;
    u8 *entry;
    func_004D6378();
    entry = root + 0x4BC;
    func_004A1140(entry, root + 0xC, 0x32, func_004D6200, 0x2a, 1);
    func_00505DD0(D_221AD8, *(s32 *)(entry + 0x2C));
    func_004A0BF0(entry, func_004A1A60(&D_221AD8, 1), 1);
    func_004A0BE8(entry, 1);
    func_0049D170(owner, 0, func_004A1A60(&D_221AD8, 8));
    func_0049D280(owner, 1);
    value = D_221AD8;
    func_0049C400(owner, 0, value, func_004A1A60(&D_221AD8, 8), 0);
    func_0049C290(owner, 1);
    *(s32 *)root = 0;
    *(s32 *)(root + 4) = 7;
}
