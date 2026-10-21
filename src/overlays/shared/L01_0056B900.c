#include "common.h"

typedef int u128 __attribute__((mode(TI)));
extern void *func_006658C0();
extern s32 func_L00_005F1208(u128, s32);
extern s32 *D_0021DDA4;

// Return 1 when the owner's +0x3E8 id passes func_L00_005F1208 against any entry's +0xA0 quad or any of its +0x180 quads.
s32 func_L01_0056B900(u8 *owner) {
    s32 i;

    if (*(s32 *)(owner + 0x3E8) == -1) {
        return 0;
    }
    if (*(s32 *)(owner + 0x3E8) < 0) {
        return 0;
    }
    for (i = 0; i < *D_0021DDA4; i++) {
        if (func_L00_005F1208(*(u128 *)((u8 *)func_006658C0(i) + 0xA0), *(s32 *)(owner + 0x3E8)) != 0) {
            return 1;
        }
    }

    for (i = 0; i < owner[0x1C0]; i++) {
        if (func_L00_005F1208(((u128 *)(owner + 0x180))[i], *(s32 *)(owner + 0x3E8)) != 0) {
            return 1;
        }
    }
    return 0;
}
