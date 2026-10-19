#include "common.h"

struct Type0 { u8 unk0; u8 pad[15]; s32 unk10; };
extern struct Type0 D_307074;
extern struct Type0 D_307220[];
extern void func_0049C248(s32, s32);
extern void func_0049C4B0(s32, s32, s32, s32);
extern void func_0049D238(s32, s32);
extern void func_0049D398(s32, s32, s32);

// When the entry for index (D_307074 for 4, else D_307220 with 0x200 bytes
// each) has its flag byte set: clear it and, when its +0x10 word is positive,
// run func_0049C4B0 and func_0049C248 for slot 3. Then run func_0049D398 and
// func_0049D238 for slot 1.
void func_0049EF30(s32 index) {
    struct Type0 *entry;
    s32 id_base;
    if (index == 4) {
        entry = &D_307074;
    } else {
        entry = (struct Type0 *)((u8 *)D_307220 + (index << 9));
    }
    id_base = index << 6;
    if (entry->unk0 != 0) {
        entry->unk0 = 0;
        if (entry->unk10 > 0) {
            func_0049C4B0(index, 3, id_base + 0x130002, 0);
            func_0049C248(index, 3);
        }
        func_0049D398(index, 1, id_base + 0x130002);
        func_0049D238(index, 1);
    }
}
