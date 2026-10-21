#include "common.h"

extern void func_L00_005DD4A0(void *);
extern void func_L01_0047E310(u8 *object);
extern s32 func_L01_0047E3E8(u8 *object);
extern void func_L01_0047E690(u8 *object, s32 flag);
extern void func_L01_005241D8(s32);
extern void func_L01_00591BD8(u8 *object, s32 new_state, s32 param);

void func_L01_0047F798(u8 *object) {
    u8 *block;

    if (object[0x20] == 0) {
        func_L01_0047E310(object);
    }
    block = *(u8 **)(object + 0xAC);
    switch (object[0x20]) {
    case 1:
        (*(u16 *)(object + 0x6A))++;
        if (func_L01_0047E3E8(object) != 0) {
            if (*(u16 *)(object + 0x6A) >= 4 && *(s32 *)(block + 0x34) != -1) {
                func_L01_005241D8(*(s32 *)(block + 0x34));
            }
            func_L01_0047E690(object, block[0x39] != 0);
            func_L01_00591BD8(object, 2, -1);
        }
        break;
    case 2:
        func_L00_005DD4A0(object);
        break;
    }
}
