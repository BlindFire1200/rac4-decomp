#include "common.h"

extern void func_00739E80(void *, s32, s32);
extern s32 func_L00_005C9F50(s32);
extern s32 func_L00_00719C68(s32, s32, void *, s32, s32, void *, s32);
extern s32 D_00220D14;
extern void func_L00_00719EE8(void);

// Call the method at +0x140 of the object's vtable, then let func_L00_00719C68
// choose among the entries at +0x738 (text id 0x1647). When a choice is made,
// pass the matching word at +0x278 and entry to func_00739E80.
void func_L00_00739B48(void *object) {
    s32 owner;
    u8 *items;
    s32 choice;
    ((void (**)(void *))(*(u8 **)((u8 *)object + 0x58) + 0x140))[0](object);
    items = (u8 *)object + 0x738;
    owner = D_00220D14;
    choice = func_L00_00719C68(owner, func_L00_005C9F50(0x1647), items, *(s32 *)((u8 *)object + 0x274), 0, func_L00_00719EE8, 1);
    if (choice >= 0) {
        func_00739E80(object, *(s32 *)((u8 *)object + (choice << 2) + 0x278), *(s32 *)(items + (choice << 2)));
    }
}
