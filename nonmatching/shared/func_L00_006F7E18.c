/* Not matching yet: BYTES 276/1440 (tools/try_func.py func_L00_006F7E18 --diff). Not part of the build. */
typedef struct { s16 h[9]; } Type1;
typedef struct { s16 h[10]; } Type2;
typedef struct { s32 w[5]; } Type3;
typedef struct { s16 h[5]; } Type4;
typedef struct { s32 w[6]; } Type5;
typedef struct { s32 w[4]; } Type6;
typedef struct { s32 w[10]; } Type7;

typedef struct {
    u8 f0;
    s32 f4;
    s32 f8;
    u8 fC;
    u8 fD;
    Type2 fE;
    u8 f22[8];
    s32 f2C;
    s32 f30;
    s32 f34;
    Type1 f38[4][10];
    Type5 f308;
    Type6 f320;
    Type3 f330[12];
    Type4 f420[6];
    Type7 f45C;
    Type7 f484;
    Type3 f4AC[3];
} Type8;

typedef struct {
    u8 pad0[0x80];
    s32 f80[8];
} Type9;

typedef struct {
    Type5 f0;
    Type6 f18;
    Type3 f28[12];
    Type4 f118[6];
    Type7 f154;
    u8 pad17C[0x28];
    Type7 f1A4;
    Type3 f1CC[3];
    Type2 f208;
} Type11;

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    u8 pad18[0x90];
    Type1 fA8[4][10];
    Type11 f378;
    u8 pad594[0xC4];
    Type9 *f658;
} Type10;

extern Type10 D_0036C740;
extern u8 D_00172958[];
extern u8 D_001722F4[];
void func_L00_006FB938(s32, s32);

// Handle a received message by its type byte: copy state, or reset
void func_L00_006F7E18(Type8 *arg0) {
    s32 i;
    Type1 *d;
    Type11 *p;

    if (arg0->fC == 0x81) {
    } else if (arg0->fC == 0x80) {
        D_00172958[0] = 0x40;
    } else if (arg0->fC == 0x82) {
        d = D_0036C740.fA8[0];
        for (i = 0; i < 9; i++) {
            d[i] = arg0->f38[0][i];
            d[i + 10] = arg0->f38[1][i];
            d[i + 20] = arg0->f38[2][i];
            d[i + 30] = arg0->f38[3][i];
        }
        p = &D_0036C740.f378;
        p->f0 = arg0->f308;
        p->f18 = arg0->f320;
        p->f28[0] = arg0->f330[0];
        p->f28[1] = arg0->f330[1];
        p->f28[2] = arg0->f330[2];
        p->f28[3] = arg0->f330[3];
        p->f28[4] = arg0->f330[4];
        p->f28[5] = arg0->f330[5];
        p->f28[6] = arg0->f330[6];
        p->f28[7] = arg0->f330[7];
        p->f28[8] = arg0->f330[8];
        p->f28[9] = arg0->f330[9];
        p->f28[10] = arg0->f330[10];
        p->f28[11] = arg0->f330[11];
        p->f118[0] = arg0->f420[0];
        p->f118[1] = arg0->f420[1];
        p->f118[2] = arg0->f420[2];
        p->f118[3] = arg0->f420[3];
        p->f118[4] = arg0->f420[4];
        p->f118[5] = arg0->f420[5];
        p->f154 = arg0->f45C;
        p->f1A4 = arg0->f484;
        p->f1CC[0] = arg0->f4AC[0];
        p->f1CC[1] = arg0->f4AC[1];
        p->f1CC[2] = arg0->f4AC[2];
        p->f208 = arg0->fE;
        D_0036C740.f10 = arg0->f2C;
        D_0036C740.f14 = arg0->f30;
        func_L00_006FB938(arg0->f0, arg0->f34);
    } else {
        D_0036C740.f8 = arg0->fC;
        D_0036C740.fC = arg0->fD;
        D_0036C740.f0 = arg0->f4;
        D_0036C740.f4 = arg0->f8;
        D_001722F4[0] = 0;
        for (i = 0; i < 8; i++) {
            D_0036C740.f658->f80[i] = arg0->f22[i];
        }
    }
}
