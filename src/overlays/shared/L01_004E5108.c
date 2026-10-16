#include "common.h"
extern s32 func_L00_005C8CF0(s16);
extern u8 *D_00222D14;
extern void *func_L00_005DEBD0(s32, s32, s32);
extern void func_L01_004E4F60(void *);
extern void func_L01_00591BD8(void *, s32, s32);

void func_L01_004E5108(void *object) {
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);
    u8 *entry = linked;
    u8 *end = linked + 0x80;
    do {
        u8 *description = D_00222D14 + (*(s32 *)entry << 8);
        s32 type = func_L00_005C8CF0(*(s16 *)(description + 0xBC));
        u32 *callback = (u32 *)func_L00_005DEBD0(type, 0xB, 0x10);
        if (callback == 0 || callback[0] == 0 || callback[1] == 0 || callback[2] == 0 || callback[3] == 0) {
            *(s32 *)entry = -1;
            *(s32 *)(entry + 4) = -1;
        }
        entry += 8;
    } while ((s32)entry < (s32)end);
    func_L01_004E4F60(object);
    *((u8 *)object + 0x30) = 0xFF;
    func_L01_00591BD8(object, 1, -1);
}
