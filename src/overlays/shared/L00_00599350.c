#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    u8 pad8[0x10];
} Type1;

typedef struct {
    u8 pad0[4];
    void *f4;
    void *f8;
    void *fC;
    u8 f10;
    u8 f11;
} Type2;

typedef struct {
    u8 pad0[0x74];
    s32 f74;
} Type3;

extern void func_L00_0066CD78(s32);
extern void func_L00_006846D0(s32);
extern void func_L00_00684778(s32);
extern s32 func_L00_006847D8(s32);
extern Type2 D_0022C690[];
extern Type3 D_0023BE00[];
extern u8 D_004C2710[];
extern Type1 D_004C2790[];
extern u8 D_004C27C0[];
s32 D_002220A4 = 0;
s32 D_002220A8 = 0;

// Pick the stage entry for the current value and toggle flags accordingly
void func_L00_00599350(void) {
    s32 i;

    D_0022C690[0].f4 = D_004C2710;
    D_0022C690[0].fC = D_004C27C0;
    for (i = 0; i < 14; i++) {
        if (!(D_004C2790[i].f4 < D_0023BE00[0].f74)) {
            D_0022C690[0].f8 = &D_004C2790[i];
            break;
        }
    }
    if (func_L00_006847D8(1) == 0) {
        func_L00_006846D0(1);
    }
    if (D_002220A8 != i) {
        func_L00_006846D0(0);
        D_002220A8 = i;
    }
    if (i == 2 || i == 6 || i == 8 || i == 10 || i == 12) {
        D_0022C690[0].f10 = 1;
        D_0022C690[0].f11 = 1;
        if (func_L00_006847D8(3) == 0) {
            func_L00_006846D0(3);
        }
    } else if (i == 13) {
        if (func_L00_006847D8(3) != 0) {
            func_L00_00684778(3);
        }
        D_0022C690[0].f10 = 0;
        D_0022C690[0].f11 = 0;
        if (func_L00_006847D8(4) == 0) {
            func_L00_006846D0(4);
        }
    } else {
        if (func_L00_006847D8(3) != 0) {
            func_L00_00684778(3);
        }
        D_0022C690[0].f10 = 0;
        D_0022C690[0].f11 = 0;
        if (D_002220A4 != 0) {
            func_L00_0066CD78(D_002220A4);
        }
    }
    if ((u32)(D_0023BE00[0].f74 - 111) < 89 && func_L00_006847D8(6) == 0) {
        func_L00_006846D0(6);
    } else if (D_0023BE00[0].f74 >= 201 && func_L00_006847D8(6) != 0) {
        func_L00_00684778(6);
    }
}
