#include "common.h"

extern void func_0046C6B0(void *);
extern void func_L01_0047F870(u8 *object);
extern s32 func_L01_0047F948(u8 *object);
extern void func_L01_0047FBF0(u8 *object, s32 flag);
extern void func_L01_005264B8(s32);
extern void func_00474368(u8 *object, s32 new_state, s32 param);

void func_L01_0047F798(u8 *object) {
    u8 *block;

    if (object[0x20] == 0) {
        func_L01_0047F870(object);
    }
    block = *(u8 **)(object + 0xAC);
    switch (object[0x20]) {
    case 1:
        (*(u16 *)(object + 0x6A))++;
        if (func_L01_0047F948(object) != 0) {
            if (*(u16 *)(object + 0x6A) >= 4 && *(s32 *)(block + 0x34) != -1) {
                func_L01_005264B8(*(s32 *)(block + 0x34));
            }
            func_L01_0047FBF0(object, block[0x39] != 0);
            func_00474368(object, 2, -1);
        }
        break;
    case 2:
        func_0046C6B0(object);
        break;
    }
}
