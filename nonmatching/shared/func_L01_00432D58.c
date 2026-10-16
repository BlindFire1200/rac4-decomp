/* Not matching yet: BYTES 21/524 (tools/try_func.py func_L01_00432D58 --diff). Not part of the build. */
/* cflags: -mno-split-addresses */
typedef int u128 __attribute__((mode(TI)));

typedef struct Mat3 {
    u128 r[3];
} Mat3;

typedef struct Type2 {
    u8 f0;
    char pad1[3];
    s16 f4;
    s16 f6;
    s8 f8;
    s8 f9;
} Type2;

typedef struct Obj {
    char pad0[0x10];
    u128 f10;
    u8 f20;
    char pad21[0x49];
    u16 f6A;
    char pad6C[0x40];
    Type2 *fAC;
    char padB0[0x8];
    struct Obj *fB8;
    char padBC[0x4];
    Mat3 fC0;
    Mat3 fF0;
} Obj;

extern void func_L00_005B0038(void *a, void *b, void *c);
extern s32 func_L00_005BC9B8(void *p);
extern void func_L00_005DD4A0(Obj *o);
extern void func_L00_005DDF50(Obj *o, s32 b, void *c);
extern void func_L00_005DE048(Obj *o, u8 b, void *c);
extern void func_L00_005EB300(void *a, void *b);
extern void func_L01_00432C40(Obj *o);
extern void func_L01_00591BD8(void *a, s32 b, s32 c);
extern void func_L01_004329D0();
extern s32 D_00222A9C[];

/* per-frame update: advance timer, follow target, run state machine */
void func_L01_00432D58(Obj *o) {
    Type2 *s = o->fAC;
    Obj *t;
    Obj *t0;
    u128 m[4];
    s32 a, b;
    Mat3 *d;
    Mat3 *src;

    if (++o->f6A > 0x96) {
        func_L01_00591BD8(o, 3, -1);
    }
    t0 = o->fB8;
    if (t0 == 0 || t0->f20 == 0xFE || t0->f20 == 0xFD) {
        o->fB8 = 0;
    }
    if (o->f20 != 3) {
        t = o->fB8;
        if (t != 0) {
            if (t != 0 && t->f20 != 0xFE && t->f20 != 0xFD && s->f9 >= 0) {
                func_L00_005DDF50(t, s->f9, m);
                func_L00_005EB300(m, &o->fF0);
                d = &o->fC0;
                src = (Mat3 *)m;
                *d = *src;
            }
            t = o->fB8;
            if (t != 0 && t->f20 != 0xFE && t->f20 != 0xFD && s->f8 >= 0) {
                func_L00_005DE048(t, s->f8, &o->f10);
            }
        }
    }
    switch (o->f20) {
    case 0:
        func_L01_00591BD8(o, 1, -1);
        break;
    case 1:
        if ((s->f0 ^ 1) & 1) {
            func_L01_00432C40(o);
        }
        s->f4 = 0xF;
        s->f6 = 0x13;
        func_L01_00591BD8(o, 2, -1);
        break;
    case 2:
        a = func_L00_005BC9B8(&s->f6) != 0;
        b = func_L00_005BC9B8(&s->f4) != 0;
        if (a && b) {
            func_L01_00591BD8(o, 3, -1);
        } else {
            func_L00_005B0038(D_00222A9C, func_L01_004329D0, o);
        }
        break;
    case 3:
        func_L00_005DD4A0(o);
        break;
    }
}
