#include "common.h"

typedef struct Type4 {
    char pad0[0x14];
    s32 f14;
} Type4;

typedef struct Type3 {
    char pad0[0x3BA];
    s16 f3BA;
    char pad3BC[0x25CC - 0x3BC];
    s32 f25CC;
    char pad25D0[0x266D - 0x25D0];
    u8 f266D;
    char pad266E[0x2F28 - 0x266E];
    Type4 *f2F28;
} Type3;

typedef struct Type2 Type2;
struct Type2 {
    char pad0[0xA8];
    void (*fA8)(Type2 *);
    char padAC[0xBC - 0xAC];
    s16 fBC;
};

typedef struct Type1 {
    char pad0[0x2B0];
    Type2 *f2B0;
    char pad2B4[4];
    Type3 *f2B8;
    Type3 *f2BC;
    char pad2C0[0x2FC - 0x2C0];
    u8 f2FC;
    u8 f2FD;
    char pad2FE[0x328 - 0x2FE];
    Type3 *f328;
    Type3 *f32C;
} Type1;

extern s32 D_0021DDB4;
s32 func_L00_005A00F8(void);
void (**func_L00_005DEBD0(s32, s32, s32))(Type2 *);
s32 func_L00_006D2920(Type3 *);
void func_L00_006EF678(Type1 *, Type3 *);
void func_L00_006EF830(Type1 *, Type3 *, s32, s32);
void func_L00_006EFAA0(Type1 *, Type3 *);
void func_L00_006EFD20(Type1 *, Type3 *, s32, s32);
u8 func_L00_006F3930(Type3 *);

// Update two player slots' states, blocked when any player is in state 0x71 or 0x63
void func_L00_006F4160(Type1 *arg0) {
    s32 flag = 0;
    Type3 *p;

    if (func_L00_005A00F8() || D_0021DDB4 == 1
        || (arg0->f2B8 && arg0->f2B8->f25CC == 0x71)
        || (arg0->f328 && arg0->f328->f25CC == 0x71)
        || (arg0->f2BC && arg0->f2BC->f25CC == 0x71)
        || (arg0->f32C && arg0->f32C->f25CC == 0x71)
        || (arg0->f2B8 && arg0->f2B8->f25CC == 0x63)
        || (arg0->f328 && arg0->f328->f25CC == 0x63)
        || (arg0->f2BC && arg0->f2BC->f25CC == 0x63)
        || (arg0->f32C && arg0->f32C->f25CC == 0x63)) {
        flag = 1;
    }

    if (arg0->f2B8 == NULL) {
        arg0->f2FC = 0;
        if (arg0->f328 != NULL && !flag) {
            func_L00_006EFAA0(arg0, arg0->f328);
            if (arg0->f2B0->fBC == 0x2054) {
                (*func_L00_005DEBD0(0x2054, 0, 4))(arg0->f2B0);
            }
        }
    } else {
        if (flag) {
            arg0->f2FC = 0;
        } else {
            arg0->f2FC = func_L00_006F3930(arg0->f2B8);
        }
        if (flag || !arg0->f2FC) {
            func_L00_006EFD20(arg0, arg0->f2B8, 0, 1);
            arg0->f2B0->fA8(arg0->f2B0);
        } else {
            p = arg0->f2B8;
            if (!p->f266D && (!(p->f2F28->f14 & 4) || !func_L00_006D2920(p))) {
                arg0->f2B8->f3BA = 2;
            }
        }
    }

    if (arg0->f2BC == NULL) {
        arg0->f2FD = 0;
        if (arg0->f32C != NULL && !flag) {
            func_L00_006EF678(arg0, arg0->f32C);
        }
    } else {
        if (flag) {
            arg0->f2FD = 0;
        } else {
            arg0->f2FD = func_L00_006F3930(arg0->f2BC);
        }
        if (flag || !arg0->f2FD) {
            func_L00_006EF830(arg0, arg0->f2BC, 0, 1);
            arg0->f2B0->fA8(arg0->f2B0);
        } else {
            p = arg0->f2BC;
            if (!p->f266D && (!(p->f2F28->f14 & 4) || !func_L00_006D2920(p))) {
                arg0->f2BC->f3BA = 2;
            }
        }
    }
}
