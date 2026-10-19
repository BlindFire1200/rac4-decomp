#include "common.h"

extern u8 *D_00222C00;
extern void func_L00_005CBF20(s32);
extern void func_L00_005DD4A0(void *);
extern void func_L00_00607960(s32);

// Release the linked object's eight words at +0x20 (each set one through
// func_L00_00607960 and cleared) and its handle at +4 (func_L00_005CBF20, then
// -1). Then set state 5 when the object is D_00222C00, otherwise run
// func_L00_005DD4A0.
void func_L01_003D3F38(u8 *object) {
    u8 *linked = *(u8 **)(object + 0xAC);
    u8 *slot = linked + 0x20;
    s32 i = 7;
    u8 *owner;

    do {
        s32 value = *(s32 *)slot;
        if (value != 0) {
            func_L00_00607960(value);
            *(s32 *)slot = 0;
        }
        slot += 4;
        i--;
    } while (i >= 0);

    owner = D_00222C00;
    if (*(s32 *)(linked + 4) >= 0) {
        func_L00_005CBF20(*(s32 *)(linked + 4));
        *(s32 *)(linked + 4) = -1;
        owner = D_00222C00;
    }
    if (owner == object) {
        object[0x20] = 5;
    } else {
        func_L00_005DD4A0(object);
    }
}
