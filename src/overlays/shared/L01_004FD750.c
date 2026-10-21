#include "common.h"

extern void *func_L00_005BD3C0(s16);
extern void func_L00_0066CD78(s32);

void func_L01_004FD750(void *object) {
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);
    s32 i;
    *(u8 *)(linked + 0x225) = 0;
    *(s32 *)(linked + 0x244) = 0;
    *(s32 *)(linked + 0x248) = 0;
    *(s32 *)(linked + 0x24C) = 0;
    *(s32 *)(linked + 0x250) = 0;
    *(f32 *)(linked + 0x258) = *(f32 *)((u8 *)object + 0xF8);
    *(s32 *)(linked + 0x25C) = 0;
    *(s32 *)(linked + 0x260) = 0;
    *(s32 *)(linked + 0x264) = 0;
    {
        u8 *cursor = linked + 0x27D;
        i = 5;
        do {
            *cursor-- = 0;
            i--;
        } while (i >= 0);
    }
    linked[0x27E] = 0;
    {
        void *entry = func_L00_005BD3C0(*(s16 *)(linked + 0x272));
        if (entry != 0 && object == *(void **)((u8 *)entry + 0x1C) && *(u8 *)((u8 *)entry + 0x10) != 0) {
            func_L00_0066CD78(*(s16 *)(linked + 0x272));
            *(s16 *)(linked + 0x272) = -1;
        }
    }
}
