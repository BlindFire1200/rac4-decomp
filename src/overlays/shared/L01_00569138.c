#include "common.h"

typedef struct Type1 {
    char pad0[0x18];
    f32 f18;
    char pad1C[0x28 - 0x1C];
    s32 f28;
    char pad2C[0x34 - 0x2C];
    u16 f34;
    char pad36[0xBC - 0x36];
    s16 fBC;
} Type1;

typedef struct Type2 {
    void *(*f0)(Type1 *);
    char pad4[0x14 - 0x4];
    void (*f14)(Type1 *, void *);
} Type2;

typedef struct Type3 {
    char pad0[0x18];
    Type1 *f18;
} Type3;

typedef struct Type4 {
    void *f0;
    s32 f4;
    char pad8[0xC - 0x8];
    Type3 *fC;
} Type4;

typedef struct Type5 {
    char pad0[0xD0];
    Type1 *fD0[16];
    s32 f110;
} Type5;

extern s32 func_L00_005C8CF0(s16);
extern Type4 *func_L00_005C8EB8(Type1 *);
extern Type2 *func_L00_005DEBD0(s32, s32, s32);
extern s32 func_L00_005E6560(Type1 *);
extern void func_L00_005E6720(Type1 *);
extern f32 *func_L00_005EAC30(Type1 *);
extern void func_L01_0056D7D8(Type1 **, Type1 *);
extern void func_L01_0056E9D0(s32, Type1 *);
extern Type1 *D_00222D38;

// Update the entries of a list, removing those that are finished
void func_L01_00569138(Type5 *arg0) {
    char buf[0x50];
    s32 i;
    Type4 *s2;
    Type2 *s1;
    u8 *a0;
    s32 s4;
    Type1 *e;
    f32 *fp;

    for (i = 0; i < arg0->f110; i++) {
        s2 = func_L00_005C8EB8(arg0->fD0[i]);
        if (arg0->fD0[i] == 0) {
            continue;
        }
        s1 = func_L00_005DEBD0(func_L00_005C8CF0(arg0->fD0[i]->fBC), 0xE, 0x1C);
        a0 = 0;
        if (s1 != 0 && s1->f0 != 0) {
            a0 = s1->f0(arg0->fD0[i]);
        }
        s4 = 0;
        if (a0 != 0 && a0[0x4C] != 0) {
            s4 = 1;
            if (arg0->fD0[i]->f28 != 0 || arg0->fD0[i] == D_00222D38 || arg0->fD0[i]->f18 <= 0.0f) {
                a0[0x4C] = 0;
            }
        }
        if (s4 == 0) {
            e = arg0->fD0[i];
            if (e->f28 == 0 && e != D_00222D38 && !(e->f34 & 2)
                && func_L00_005E6560(e) == 0 && s1 != 0 && s1->f14 != 0) {
                fp = func_L00_005EAC30(arg0->fD0[i]);
                if (fp != 0 && *fp <= 0.0f) {
                    func_L00_005E6720(arg0->fD0[i]);
                    s1->f14(arg0->fD0[i], buf);
                }
            }
        }
        if (func_L00_005E6560(arg0->fD0[i]) == 0 || s4 != 0) {
            if (s2 == 0) {
                goto remove;
            }
            if (s2->f0 != 0) {
                continue;
            }
        }
        if (s2 != 0) {
            if (s2->fC != 0 && s2->fC->f18 == arg0->fD0[i]) {
                s2->fC->f18 = 0;
            }
            if (s2->f0 == arg0 && s2->f4 != 0) {
                func_L01_0056E9D0(s2->f4, arg0->fD0[i]);
            }
        }
    remove:
        func_L01_0056D7D8(arg0->fD0, arg0->fD0[i]);
        i--;
    }
}
