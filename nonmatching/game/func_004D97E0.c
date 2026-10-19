/* Not matching yet: BYTES 12/188 (tools/try_func.py func_004D97E0 --diff). Not part of the build. */
#include "common.h"
extern u8 D_321650[];
extern s32 D_221B68[];
s32 func_00505B20(void);
void func_004D9BF0(void);
void func_004A1140(void *, void *, s32, s32, s32, s32);
s32 func_004A1A60(void *, s32);
void func_0049D170(s32, s32, s32);
void func_0049D280(s32, s32);
void func_0049C248(s32, s32);
void func_004A1170(void *);
void func_004D97E0(void) {
    s32 owner = func_00505B20();
    u8 *entry = D_321650 + owner * 0x124;
    u8 *extra = entry + 0xB4;
    func_004D9BF0();
    *(s32 *)(entry + 4) = 0;
    *(s32 *)entry = 0;
    func_004A1140(extra, entry + 0xC, 7, 0, 0, 0);
    func_0049D170(owner, 0, func_004A1A60(D_221B68, 6));
    func_0049D280(owner, 1);
    func_0049C248(owner, 0);
    func_004A1170(extra);
    *(s32 *)(entry + 8) = 7;
}
