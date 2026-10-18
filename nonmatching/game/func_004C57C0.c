/* Not matching yet: BYTES 25/332 (tools/try_func.py func_004C57C0 --diff). Not part of the build. */
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
void func_004C6070();
void func_004C7828();
s32 func_00505B20();
void func_00505DD0(s32, s32);
extern s32 D_2218C8;
extern u8 D_30B9D8[];
extern void func_004C5B78(void);
extern void func_004C5BE8(void);
void func_004C57C0(void) {
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s4;
    u8 *temp_s0;
    u8 *temp_s3;

    temp_s2 = func_00505B20();
    temp_s4 = temp_s2 * 0xB30;
    func_004C6070();
    temp_s3 = temp_s4 + D_30B9D8;
    func_004C7828();
    temp_s0 = temp_s3 + 0xAB4;
    func_004A1140(temp_s0, temp_s3 + 0x64, 0x42, func_004C5BE8, 0x30, 1);
    func_00505DD0(D_2218C8, *(s32 *)(temp_s0 + 0x2C));
    func_004A11F0(temp_s0, &func_004C5B78);
    func_004A0BF0(temp_s0, func_004A1A60(&D_2218C8, 0xE), 1);
    func_004A0BE8(temp_s0, 1);
    func_0049D170(temp_s2, 0, func_004A1A60(&D_2218C8, 0xF));
    func_0049D280(temp_s2, 1);
    temp_s0_2 = D_2218C8;
    func_0049C400(temp_s2, 0, temp_s0_2, func_004A1A60(&D_2218C8, 0xF), 0);
    func_0049C290(temp_s2, 1);
    *(s32 *)(D_30B9D8 + temp_s4 + 0x10) = 7;
    *(s32 *)(temp_s3 + 0x0) = 0;
    *(s32 *)(temp_s3 + 0x8) = 0;
    temp_s3[0xC] = 0;
}
