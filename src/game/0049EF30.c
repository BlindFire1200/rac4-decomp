#include "common.h"

struct Type0 { u8 unk0; u8 pad[15]; s32 unk10; };
extern struct Type0 D_307074;
extern struct Type0 D_307220[];
extern void func_0049C248(s32, s32);
extern void func_0049C4B0(s32, s32, s32, s32);
extern void func_0049D238(s32, s32);
extern void func_0049D398(s32, s32, s32);

void func_0049EF30(s32 arg0) {
    struct Type0 *var_v1;
    s32 temp_s1;
    if (arg0 == 4) {
        var_v1 = &D_307074;
    } else {
        var_v1 = (struct Type0 *)((u8 *)D_307220 + (arg0 << 9));
    }
    temp_s1 = arg0 << 6;
    if (var_v1->unk0 != 0) {
        var_v1->unk0 = 0;
        if (var_v1->unk10 > 0) {
            func_0049C4B0(arg0, 3, temp_s1 + 0x130002, 0);
            func_0049C248(arg0, 3);
        }
        func_0049D398(arg0, 1, temp_s1 + 0x130002);
        func_0049D238(arg0, 1);
    }
}
