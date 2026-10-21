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

extern void func_004E2A48(s32);
extern void func_004F3640(s32);
extern void func_L00_00687F28(s32);
extern s32 func_L00_00687F88(s32);
extern Type2 D_0022C790[];
extern Type3 D_0023BF00[];
extern u8 D_004C2850[];
extern Type1 D_004C28D0[];
extern u8 D_004C2900[];
s32 D_002221A4 = 0;
s32 D_002221A8 = 0;

// Pick the stage entry for the current value and toggle flags accordingly
void func_L00_00599F58(void) {
    s32 i;

    D_0022C790[0].f4 = D_004C2850;
    D_0022C790[0].fC = D_004C2900;
    for (i = 0; i < 14; i++) {
        if (!(D_004C28D0[i].f4 < D_0023BF00[0].f74)) {
            D_0022C790[0].f8 = &D_004C28D0[i];
            break;
        }
    }
    if (func_L00_00687F88(1) == 0) {
        func_004F3640(1);
    }
    if (D_002221A8 != i) {
        func_004F3640(0);
        D_002221A8 = i;
    }
    if (i == 2 || i == 6 || i == 8 || i == 10 || i == 12) {
        D_0022C790[0].f10 = 1;
        D_0022C790[0].f11 = 1;
        if (func_L00_00687F88(3) == 0) {
            func_004F3640(3);
        }
    } else if (i == 13) {
        if (func_L00_00687F88(3) != 0) {
            func_L00_00687F28(3);
        }
        D_0022C790[0].f10 = 0;
        D_0022C790[0].f11 = 0;
        if (func_L00_00687F88(4) == 0) {
            func_004F3640(4);
        }
    } else {
        if (func_L00_00687F88(3) != 0) {
            func_L00_00687F28(3);
        }
        D_0022C790[0].f10 = 0;
        D_0022C790[0].f11 = 0;
        if (D_002221A4 != 0) {
            func_004E2A48(D_002221A4);
        }
    }
    if ((u32)(D_0023BF00[0].f74 - 93) < 74 && func_L00_00687F88(6) == 0) {
        func_004F3640(6);
    } else if (D_0023BF00[0].f74 >= 168 && func_L00_00687F88(6) != 0) {
        func_L00_00687F28(6);
    }
}
