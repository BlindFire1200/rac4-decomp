#include "common.h"
extern void func_0011A9EC(s32, void *);
extern void func_L00_0071B478(void *);
extern void func_L00_0071BB58(void *);
extern void func_L00_00741990(void *);
void func_L00_0071A8A8(void *object) {
    ((void (**)(void *))(*(u8 **)(*(void **)((u8 *)object + 0x268) + 0x58) + 0x140))[0](*(void **)((u8 *)object + 0x268));
    {
        u8 value = *((u8 *)object + 0x26C);
        u8 *target = *(u8 **)((u8 *)object + 0x268);
        *(target + 0xA8) = value;
    }
    {
        u8 value = *((u8 *)object + 0x26D);
        u8 *target = *(u8 **)((u8 *)object + 0x268);
        *(target + 0xA9) = value;
    }
    *(s32 *)(*(u8 **)((u8 *)object + 0x268) + 0x250) = *(s32 *)((u8 *)object + 0x270);
    *(s32 *)(*(u8 **)((u8 *)object + 0x268) + 0x254) = *(s32 *)((u8 *)object + 0x274);
    func_L00_00741990(*(void **)((u8 *)object + 0x268));
    if (*(s32 *)((u8 *)object + 0x27C) == 1) func_0011A9EC(*(s32 *)((u8 *)object + 0x288), (u8 *)object + 0x28C);
    func_L00_0071B478(object);
    func_L00_0071BB58(object);
}
