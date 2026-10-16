#include "common.h"
extern void *func_L00_005BD3C0(s16, void *);
extern void func_L00_0066CD78(s32);

void func_L01_004EB408(void *arg0) {
    u8 *state = *(u8 **)((u8 *)arg0 + 0xAC);
    s32 i;
    u8 *records = state + 0x370;
    *(u8 *)(state + 0x2F1) = 0;
    *(s32 *)(state + 0x310) = 0;
    *(s32 *)(state + 0x314) = 0;
    *(s32 *)(state + 0x318) = 0;
    *(s32 *)(state + 0x31C) = 0;
    *(f32 *)(state + 0x324) = *(f32 *)((u8 *)arg0 + 0xF8);
    *(s32 *)(state + 0x328) = 0;
    *(s32 *)(state + 0x32C) = 0;
    *(s32 *)(state + 0x330) = 0;
    state[0x33D] = 0;
    for (i = 0; i < 6; i++) {
        records[i] = 0;
        *(s32 *)(state + 0x378 + i * 4) = 0;
    }
    state[0x376] = 0;
    state[0x377] = 0;
    {
        void *entry = func_L00_005BD3C0(*(s16 *)(state + 0x352), records);
        if (entry != 0 && arg0 == *(void **)((u8 *)entry + 0x1C) && *(u8 *)((u8 *)entry + 0x10) != 0) {
            func_L00_0066CD78(*(s16 *)(state + 0x352));
            *(s16 *)(state + 0x352) = -1;
        }
    }
}
