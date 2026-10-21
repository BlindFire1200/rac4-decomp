#include "common.h"
void func_0049C290(s32, s32);
void func_0049C400(s32, s32, s32, s32, s32);
void func_0049D170(s32, s32, s32);
void func_0049D280(s32, s32);
void func_004A0BE8(void *, s32);
void func_004A0BF0(void *, s32, s32);
void func_004A1140(void *, void *, s32, void *, s32, s32);
void func_004A11F0(void *, void *);
s32 func_004A1A60(s32 *, s32);
void func_004BBC50();
s32 func_00505B20();
void func_00505DD0(s32, s32);
extern s32 D_221820;
typedef struct { s32 f0; s32 f4; s32 f8; u8 fC; } Type1;
extern u8 D_30A6F0[];
extern void func_004BCC40(void);
extern void func_004BCE28(void);
void func_004BB018(void) {
    s32 temp_s1_2;
    s32 temp_s2;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_s2 = func_00505B20();
    temp_s0 = (temp_s2 * 0x534) + D_30A6F0;
    func_004BBC50();
    temp_s1 = temp_s0 + 0x4C8;
    func_004A1140(temp_s1, temp_s0 + 0x18, 0x32, func_004BCC40, 0x30, 1);
    func_00505DD0(D_221820, *(s32 *)(temp_s1 + 0x2C));
    func_004A11F0(temp_s1, &func_004BCE28);
    func_004A0BF0(temp_s1, func_004A1A60(&D_221820, 0xE), 1);
    func_004A0BE8(temp_s1, 1);
    func_0049D170(temp_s2, 0, func_004A1A60(&D_221820, 0xF));
    func_0049D280(temp_s2, 1);
    temp_s1_2 = D_221820;
    func_0049C400(temp_s2, 0, temp_s1_2, func_004A1A60(&D_221820, 0xF), 0);
    func_0049C290(temp_s2, 1);
    ((Type1 *)temp_s0)->f0 = 0;
    ((Type1 *)temp_s0)->f4 = 7;
    ((Type1 *)temp_s0)->fC = 0;
    ((Type1 *)temp_s0)->f8 = 0;
}
