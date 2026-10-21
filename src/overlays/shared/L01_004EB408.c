#include "common.h"

extern void *func_L00_005BD3C0(s16, void *);
extern void func_L00_0066CD78(s32);

// Reset the linked object's fields at +0x2F1..+0x378 (six records at +0x370), then
// release the handle at +0x352 when it still belongs to this object.
void func_L01_004EB408(void *object) {
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);
    s32 i;
    u8 *records = linked + 0x370;
    *(u8 *)(linked + 0x2F1) = 0;
    *(s32 *)(linked + 0x310) = 0;
    *(s32 *)(linked + 0x314) = 0;
    *(s32 *)(linked + 0x318) = 0;
    *(s32 *)(linked + 0x31C) = 0;
    *(f32 *)(linked + 0x324) = *(f32 *)((u8 *)object + 0xF8);
    *(s32 *)(linked + 0x328) = 0;
    *(s32 *)(linked + 0x32C) = 0;
    *(s32 *)(linked + 0x330) = 0;
    linked[0x33D] = 0;
    for (i = 0; i < 6; i++) {
        records[i] = 0;
        *(s32 *)(linked + 0x378 + i * 4) = 0;
    }
    linked[0x376] = 0;
    linked[0x377] = 0;
    {
        void *entry = func_L00_005BD3C0(*(s16 *)(linked + 0x352), records);
        if (entry != 0 && object == *(void **)((u8 *)entry + 0x1C) && *(u8 *)((u8 *)entry + 0x10) != 0) {
            func_L00_0066CD78(*(s16 *)(linked + 0x352));
            *(s16 *)(linked + 0x352) = -1;
        }
    }
}
