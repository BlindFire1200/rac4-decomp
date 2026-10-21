#include "common.h"

extern s32 func_L00_005C9F50(s32);
extern void func_L00_0071ADF0(void *, u32, s32, void *);
extern void func_L00_0071AE38(void *record, u32 param_a, s32 param_b, s32 text_a, s32 param_c, s32 text_b);
extern s32 func_L00_0071AEF0(void *);
extern void func_L00_0071AFE8(void *, void *);
extern char D_004BE588[];

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    char fC[0x34];
} Type1;

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    char fC[0x34];
    s32 f40;
    char f44[0xCC];
} Type2;

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    char fC[0x34];
    s32 f40;
    s32 f44;
    void *f48[98];
} Type3;

typedef struct {
    char pad0[0x58];
    void *f58;
    char pad5C[0x23C - 0x5C];
    s32 f23C;
    s32 f240;
    char pad244[0x24C - 0x244];
    void *f24C;
    char pad250[0x660 - 0x250];
    s32 f660;
    s32 f664;
    s32 f668;
    char pad66C[0x674 - 0x66C];
    u8 f674;
} Type4;

Type4 *func_L00_00748E40(Type4 *arg0) {
    Type2 a;
    Type1 i0;
    Type1 i1;
    Type1 i2;
    Type1 i3;
    Type1 i4;
    Type1 i5;
    Type2 j0;
    Type2 j1;
    Type3 list;
    Type3 *l;

    func_L00_0071AEF0(arg0);
    arg0->f58 = D_004BE588;
    arg0->f674 = 1;
    arg0->f23C = 0x1E;
    arg0->f240 = 0x55000000;
    arg0->f24C = (char *)arg0 + 0x678;
    arg0->f660 = 0;
    arg0->f664 = 0;
    arg0->f668 = 0;
    a.f0 = -1; func_L00_0071ADF0(&a, 0xFFFFFFFF, 0, 0);
    func_L00_0071AE38(&a, 0xFFFFFFFF, 0, 0, 0x55000022, 0);
    i0.f0 = -1; func_L00_0071ADF0(&i0, 0x14, arg0->f240 | 0x20, 0); i0.f0 = 0;
    i1.f0 = -1; func_L00_0071ADF0(&i1, 0x13, arg0->f240 | 0x1F, 0); i1.f0 = 0;
    i2.f0 = -1; func_L00_0071ADF0(&i2, 0x12, arg0->f240 | 0x1E, 0); i2.f0 = 0;
    i3.f0 = -1; func_L00_0071ADF0(&i3, 0x11, arg0->f240 | 0x1D, 0); i3.f0 = 0;
    i4.f0 = -1; func_L00_0071ADF0(&i4, 0x10, arg0->f240 | 0x1C, 0); i4.f0 = 0;
    i5.f0 = -1; func_L00_0071ADF0(&i5, 0xF, arg0->f240 | 0x1B, 0); i5.f0 = 0;
    {
        s32 t = arg0->f240 | 0x1A;
        s32 s = func_L00_005C9F50(0x234F);
        j0.f0 = -1; func_L00_0071ADF0(&j0, 0xFFFFFFFF, 0, 0);
        func_L00_0071AE38(&j0, 0xFFFFFFFF, 0, 0, t, s);
    }
    {
        s32 t = arg0->f240 | 0x17;
        s32 s = func_L00_005C9F50(0xCD5);
        j1.f0 = -1; func_L00_0071ADF0(&j1, 0xFFFFFFFF, 0, 0);
        func_L00_0071AE38(&j1, 0xFFFFFFFF, 0, 0, t, s);
    }
    l = &list;
    l->f0 = -1; func_L00_0071ADF0(l, 0xFFFFFFFF, 0, 0);
    l->f40 = -1;
    list.f44 = 9;
    list.f48[7] = &j0;
    list.f48[0] = &a;
    list.f48[1] = &i0;
    list.f48[2] = &i1;
    list.f48[3] = &i2;
    list.f48[4] = &i3;
    list.f48[5] = &i4;
    list.f48[6] = &i5;
    list.f48[8] = &j1;
    func_L00_0071AFE8(arg0, l);
    return arg0;
}
