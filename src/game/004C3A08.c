#include "common.h"
typedef struct Type1 { s32 f0; s32 f4; } Type1;
typedef struct Type2 { u8 pad0[0x22]; s16 f22; } Type2;
extern s32 func_0045E038(s32);
extern void func_0049C158(s32, s32, s32, s32);
extern s32 func_004A1A60(s32 *, s32);
extern void func_00505238(s32, s32);
extern s32 func_00505328(s32, u32);
extern s32 func_00505B20(void);
extern Type2 *func_00549B00(s32);
extern Type1 D_003D2298[];
extern s32 D_221888;
extern u8 D_30B7F8[];
void func_004C3A08(void) {
    s32 first;
    s32 second;
    s32 owner = func_00505B20();
    u8 *root = owner * 0x74 + D_30B7F8;
    func_0049C158(owner, 2, func_004A1A60(&D_221888, D_003D2298[*(s32 *)(root + 0x14)].f4), 0);
    func_00505328(func_004A1A60(&D_221888, D_003D2298[*(s32 *)(root + 0x14)].f0), 0x80D0D0D0);
    if (*(s32 *)(root + 0x14) > 0) {
        first = func_004A1A60(&D_221888, 0x51);
        func_00505238(first, func_0045E038(func_00549B00(*(s32 *)(root + 0x14))->f22));
        return;
    }
    second = func_004A1A60(&D_221888, 0x51);
    func_00505238(second, func_0045E038(0x34B6));
}
