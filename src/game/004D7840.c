#include "common.h"

struct Type1 { s32 unk0; s32 unk4; s32 unk8; };
struct Type0 { s32 pad0[2]; struct Type1 *unk8; };
extern s32 func_004A1A60(s32, s32);
extern s32 func_004D8178(s32);
extern s32 func_004D81D8(s32);
extern s32 func_00505238(s32, s32);
extern void func_00505328(s32, s32);

void func_004D7840(s32 arg0, struct Type0 *arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    struct Type1 *temp_s2 = arg1->unk8;
    s32 temp_s1 = (s32)arg1 + 4;
    func_00505238(func_004A1A60(temp_s1, 2), temp_s2->unk0);
    temp_s0 = func_004A1A60(temp_s1, 3);
    temp_v0 = func_004D81D8(temp_s2->unk8);
    func_00505238(temp_s0, temp_v0);
    func_00505238(func_004A1A60(temp_s1, 4), temp_s2->unk4);
    temp_s0_2 = func_004A1A60(temp_s1, 3);
    temp_v0 = func_004D8178(temp_s2->unk8);
    func_00505328(temp_s0_2, temp_v0);
}
