#include "common.h"

extern void *func_00565080(void *);
extern void func_L00_005EB6C0(void *, s32);
extern void func_L00_0066CCE8(void *, s32);
extern void func_L01_00591BD8(void *, s32, s32);

/* Reset the selected record, clear its halfword slots and enter state one. */
void func_L15_004E5030(void *object) {
    u8 *record;
    s16 *slot;
    s32 i;
    func_L01_00591BD8(object, 6, -1);
    func_L00_005EB6C0(object, 0);
    record = func_00565080(object);
    if (record != 0) {
        *(s32 *)(record + 0) = 0;
        *(s32 *)(record + 0x28) = 0;
        *(s16 *)(record + 0x5C) = 0;
        slot = (s16 *)(record + 0x70);
        i = 8;
        do {
            *slot = 0;
            i--;
            slot--;
        } while (i >= 0);
    }
    *(s32 *)((u8 *)object + 0x98) = 0;
    *((u8 *)object + 0x2C) = 0xFF;
    *(u16 *)((u8 *)object + 0x34) = (*(u16 *)((u8 *)object + 0x34) | 0x41) & 0xEFFF;
    func_L00_0066CCE8(object, 1);
}
