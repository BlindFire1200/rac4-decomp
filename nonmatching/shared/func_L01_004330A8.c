/* Not matching yet: BYTES 45/524 (tools/try_func.py func_L01_004330A8 --diff). Not part of the build. */
typedef struct Type2 {
    u16 f0;
    s16 f2;
    u8 f4;
    u8 _p5;
    u8 f6;
    u8 _p7[0x9];
    s32 f10;
    u8 _p14[0x2C];
    u8 f40[1];
} Type2;

typedef struct Type1 {
    u8 _p0[0x20];
    u8 f20;
    u8 _p21[0x8B];
    Type2 *fAC;
    u8 _pB0[0xE];
    u8 fBE;
} Type1;

extern s32 D_00222B28;
extern s32 D_00222A9C;

void func_L00_005B0038(void *a, void *b, void *c);
void func_L00_005BBC40(void *a, void *b, s32 c);
s32 func_L00_005BC9B8(s16 *a);
void func_L00_005DD4A0(void *o);
void func_L01_00433038(Type1 *o);
void func_L01_004332B8(Type1 *o, Type2 *s, s32 c);
void func_L01_004337D0(void);
void func_L01_00558B10(void *a, void *b, s32 c);
void func_L01_00558B80(void *a, void *b, s32 c);
s32 func_L01_00558BC8(void *a, void *b);
void func_L01_00591BD8(void *a, s32 b, s32 c);

/* Per-frame state machine for an object driven by state byte f20. */
void func_L01_004330A8(Type1 *o) {
    Type2 *s = o->fAC;
    u8 v;

    switch (o->f20) {
    case 0:
        v = s->f4;
        v = v < 8 ? v : 7;
        if (v != 0) {
            s->f4 = v;
        } else {
            s->f4 = 1;
        }
        func_L01_004332B8(o, s, 0);
        return;
    case 2:
        if (!(o->fBE & 4)) {
            return;
        }
        func_L01_00591BD8(o, 1, -1);
    case 1:
        func_L01_00558B10(&D_00222B28, s->f40, 0);
        s->f2 = s->f0;
        func_L01_00591BD8(o, 3, -1);
    case 3:
        if (s->f2 != 0 && func_L00_005BC9B8(&s->f2)) {
            o->fBE &= ~4;
        }
        if (!(o->fBE & 4)) {
            func_L01_00558B80(&D_00222B28, s->f40, 0);
            func_L01_00591BD8(o, 4, -1);
        }
        func_L01_00433038(o);
        func_L00_005BBC40(&D_00222B28, s->f40, s->f10);
        func_L00_005B0038(&D_00222A9C, func_L01_004337D0, o);
        return;
    case 4:
        if (o->fBE & 4) {
            func_L01_00558B10(&D_00222B28, s->f40, 0);
            s->f2 = s->f0;
            func_L01_00591BD8(o, 3, -1);
        }
        func_L01_00433038(o);
        func_L00_005BBC40(&D_00222B28, s->f40, s->f10);
        if (func_L01_00558BC8(&D_00222B28, s->f40)) {
            func_L00_005B0038(&D_00222A9C, func_L01_004337D0, o);
            return;
        }
        if (s->f6) {
            func_L00_005DD4A0(o);
        } else {
            func_L01_00591BD8(o, 2, -1);
        }
        return;
    }
}
