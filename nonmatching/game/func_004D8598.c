/* Not matching yet: BYTES 12/188 (tools/try_func.py func_004D8598 --diff). Not part of the build. */
#include "common.h"
extern u8 D_320178[];
extern s32 D_221B28[];
s32 func_00505B20(void);
void func_004D8848(void);
void func_004A1140(void *, void *, s32, s32, s32, s32);
s32 func_004A1A60(void *, s32);
void func_0049D170(s32, s32, s32);
void func_0049D280(s32, s32);
void func_0049C248(s32, s32);
void func_004A1170(void *);
void func_004D8598(void) {
    s32 owner = func_00505B20();
    u8 *entry = D_320178 + owner * 0x3AC;
    u8 *extra = entry + 0x340;
    func_004D8848();
    *(s32 *)(entry + 4) = 0;
    *(s32 *)entry = 0;
    func_004A1140(extra, entry + 0x10, 0x22, 0, 0, 0);
    func_0049D170(owner, 0, func_004A1A60(D_221B28, 6));
    func_0049D280(owner, 1);
    func_0049C248(owner, 0);
    func_004A1170(extra);
    *(s32 *)(entry + 8) = 7;
}
