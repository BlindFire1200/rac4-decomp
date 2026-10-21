/* cflags: -mno-split-addresses */
#include "common.h"

typedef int u128 __attribute__((mode(TI)));

extern void *func_L00_005DD000(s32, s32);
extern void func_L00_005EB1D8(void *);
extern void func_L01_0043BB38(void *);
extern void func_L01_00591BD8(u8 *object, s32 new_state, s32 param);
extern void func_L01_005A37B8(void *, s32, s32, s32, s32);
extern u8 *D_00222BF4[];

void func_L01_0043B938(u8 *object) {
    u8 *linked = *(u8 **)(object + 0xAC);
    u8 *entry;
    s32 *count;
    s32 i;
    u8 *obj;

    entry = D_00222BF4[0] + (*(s32 *)(linked + 0x64) << 5);
    *(u8 **)(linked + 0x6C) = entry;
    *(s32 *)(entry + 0x18) = 1;
    count = *(s32 **)(*(u8 **)(linked + 0x6C) + 0x10);
    for (i = 0; i < *count - 1; i++) {
        obj = func_L00_005DD000(0x1A7B, 0);
        if (obj != 0) {
            obj[0x31] = 1;
            *(u16 *)(obj + 0x32) = 0x40;
            obj[0x30] = 0;
            *(u16 *)(obj + 0x34) |= 0x104;
            func_L00_005EB1D8(obj);
        }
        ((u8 **)(linked + 0x7C))[i] = obj;
    }
    *(s32 *)(linked + 0x78) = 0;
    *(s32 *)(linked + 0x70) = 0;
    *(s32 *)(linked + 0x74) = 0;
    *(u128 *)(linked + 0xA0) = *(u128 *)(object + 0x10);
    func_L01_005A37B8(object, 6, 1, 1, 0);
    func_L01_0043BB38(object);
    func_L01_00591BD8(object, 1, -1);
}
