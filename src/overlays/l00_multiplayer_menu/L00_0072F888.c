#include "common.h"

extern s32 func_L00_0070C368(void *);
extern void func_L00_0071ADF0(void *, u32, s32, void *);
extern void func_L00_0071AE38(void *record, u32 param_a, s32 param_b, s32 text_a, s32 param_c, s32 text_b);
extern s32 func_L00_0071AEF0(void);
extern void func_L00_0071AFE8(void *, void *);
extern char D_00220F70[];
extern char D_00220F78[];
extern char D_00220F88[];
extern char D_00220F98[];
extern char D_00220FA0[];
extern char D_004BBF70[];

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
    char pad5C[0x238 - 0x5C];
    u32 f238;
    s32 f23C;
    s32 f240;
    char pad244[0x24C - 0x244];
    void *f24C;
} Type4;

// Set up the menu: build eighteen text items and four two-text items on the
// stack, collect them in a list of 22 and hand it to func_L00_0071AFE8.
Type4 *func_L00_0072F888(Type4 *arg0) {
    Type1 i0;
    Type1 i1;
    Type1 i2;
    Type1 i3;
    Type1 i4;
    Type1 i5;
    Type1 i6;
    Type1 i7;
    Type1 i8;
    Type1 i9;
    Type1 i10;
    Type1 i11;
    Type1 i12;
    Type1 i13;
    Type1 i14;
    Type1 i15;
    Type1 i16;
    Type1 i17;
    Type1 i18;
    Type2 j0;
    Type2 j1;
    Type2 j2;
    Type3 list;
    Type3 *l;

    func_L00_0071AEF0();
    arg0->f58 = D_004BBF70;
    func_L00_0070C368((char *)arg0 + 0xCC8);
    arg0->f23C = 0xF;
    arg0->f238 = 0xFFFFFFFF;
    arg0->f240 = 0x31000000;
    arg0->f24C = (char *)arg0 + 0x1130;
    i0.f0 = -1; func_L00_0071ADF0(&i0, 0x1D, arg0->f240 | 0x38, D_00220F70); i0.f0 = 0;
    i1.f0 = -1; func_L00_0071ADF0(&i1, 0x1C, arg0->f240 | 0x37, D_00220F70); i1.f0 = 0;
    i2.f0 = -1; func_L00_0071ADF0(&i2, 0x1B, arg0->f240 | 0x36, D_00220F70); i2.f0 = 0;
    i3.f0 = -1; func_L00_0071ADF0(&i3, 0x1A, arg0->f240 | 0x35, D_00220F70); i3.f0 = 0;
    i4.f0 = -1; func_L00_0071ADF0(&i4, 0x19, arg0->f240 | 0x34, D_00220F70); i4.f0 = 0;
    i5.f0 = -1; func_L00_0071ADF0(&i5, 0x18, arg0->f240 | 0x33, D_00220F70); i5.f0 = 0;
    i6.f0 = -1; func_L00_0071ADF0(&i6, 0x17, arg0->f240 | 0x32, D_00220F70); i6.f0 = 0;
    i7.f0 = -1; func_L00_0071ADF0(&i7, 0x16, arg0->f240 | 0x31, D_00220F70); i7.f0 = 0;
    i8.f0 = -1; func_L00_0071ADF0(&i8, 0x13, arg0->f240 | 0x30, D_00220F70); i8.f0 = 0;
    i9.f0 = -1; func_L00_0071ADF0(&i9, 0x12, arg0->f240 | 0x2F, D_00220F70); i9.f0 = 0;
    i10.f0 = -1; func_L00_0071ADF0(&i10, 0x11, arg0->f240 | 0x2E, D_00220F70); i10.f0 = 0;
    i11.f0 = -1; func_L00_0071ADF0(&i11, 0x10, arg0->f240 | 0x2D, D_00220F70); i11.f0 = 0;
    i12.f0 = -1; func_L00_0071ADF0(&i12, 0xF, arg0->f240 | 0x2C, D_00220F70); i12.f0 = 0;
    i13.f0 = -1; func_L00_0071ADF0(&i13, 0xE, arg0->f240 | 0x2B, D_00220F70); i13.f0 = 0;
    i14.f0 = -1; func_L00_0071ADF0(&i14, 0xD, arg0->f240 | 0x2A, D_00220F70); i14.f0 = 0;
    i15.f0 = -1; func_L00_0071ADF0(&i15, 0xC, arg0->f240 | 0x28, D_00220F70); i15.f0 = 0;
    i16.f0 = -1; func_L00_0071ADF0(&i16, 6, arg0->f240 | 0x27, D_00220F78); i16.f0 = 0;
    i17.f0 = -1; func_L00_0071ADF0(&i17, 5, arg0->f240 | 0x26, D_00220F70); i17.f0 = 0;
    i18.f0 = -1; func_L00_0071ADF0(&i18, 4, arg0->f240 | 0x25, D_00220F88); i18.f0 = 0;
    {
        s32 t = arg0->f240 | 0x24;
        char *s = D_00220F98;
        j0.f0 = -1; func_L00_0071ADF0(&j0, 0xFFFFFFFF, 0, 0);
        func_L00_0071AE38(&j0, 0xFFFFFFFF, 0, (s32)D_00220F70, t, (s32)s);
    }
    {
        s32 t = arg0->f240 | 0x23;
        char *s = D_00220F70;
        j1.f0 = -1; func_L00_0071ADF0(&j1, 0xFFFFFFFF, 0, 0);
        func_L00_0071AE38(&j1, 0xFFFFFFFF, 0, (s32)D_00220F70, t, (s32)s);
    }
    {
        s32 t = arg0->f240 | 0x22;
        char *s = D_00220FA0;
        j2.f0 = -1; func_L00_0071ADF0(&j2, 0xFFFFFFFF, 0, 0);
        func_L00_0071AE38(&j2, 0xFFFFFFFF, 0, (s32)D_00220F70, t, (s32)s);
    }
    l = &list;
    l->f0 = -1; func_L00_0071ADF0(l, 0xFFFFFFFF, 0, 0);
    l->f40 = -1;
    list.f48[0] = &i0;
    list.f48[1] = &i1;
    list.f48[2] = &i2;
    list.f48[3] = &i3;
    list.f48[4] = &i4;
    list.f48[5] = &i5;
    list.f48[6] = &i6;
    list.f48[7] = &i7;
    list.f48[8] = &i8;
    list.f48[9] = &i9;
    list.f48[10] = &i10;
    list.f48[11] = &i11;
    list.f48[12] = &i12;
    list.f48[13] = &i13;
    list.f48[14] = &i14;
    list.f48[15] = &i15;
    list.f48[16] = &i16;
    list.f48[17] = &i17;
    list.f48[18] = &i18;
    list.f48[19] = &j0;
    list.f48[20] = &j1;
    list.f48[21] = &j2;
    list.f44 = 0x16;
    func_L00_0071AFE8(arg0, l);
    return arg0;
}
