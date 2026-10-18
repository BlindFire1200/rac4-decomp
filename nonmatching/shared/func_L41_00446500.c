/* Not matching yet: BYTES 46/836 (tools/try_func.py func_L41_00446500 --diff). Not part of the build. */
typedef struct Type3 {
    s32 f0;
    char _p4[0xC];
    s32 f10;
    char _p14[0x60];
    u8 f74;
} Type3;

typedef struct Type1 {
    char _p0[0xAC];
    Type3 *fAC;
} Type1;

typedef struct Type4 {
    char _p0[0x27B];
    u8 f27B;
} Type4;

typedef struct Type2 {
    char _p0[0x2EC];
    Type1 *f2EC;
    char _p2F0[0xE];
    s16 f2FE;
    char _p300[0x25CC - 0x300];
    s32 f25CC;
    char _p25D0[0x266D - 0x25D0];
    u8 f266D;
    char _p266E[0x26E4 - 0x266E];
    s32 f26E4;
    char _p26E8[0x2E20 - 0x26E8];
    f32 f2E20;
    char _p2E24[0x2EFC - 0x2E24];
    Type4 *f2EFC;
    char _p2F00[0x14];
    s32 f2F14;
} Type2;

typedef struct Type5 {
    char _p0[9];
    s8 f9;
    char _pA[0x16];
    u8 f20;
    char _p21[0xE];
    s8 f2F;
} Type5;

extern Type5 *D_0021DFF0;

extern s32 func_00446418();
extern void func_L00_005C97D8(s32, s32, s32);
extern s32 func_L00_006D2920(Type2 *);
extern s32 func_L00_006F3958(Type2 *);
extern s32 func_L00_006FF6D0(s32, s32);
extern s32 func_L00_006FF700(s32, s32);
extern s32 func_L00_00700708(s32, s32);
extern s32 func_L00_00701AF8(s32, s32);
extern s32 func_L41_00445FA8(s32);
extern s32 func_L41_00446010(void *arg0);
extern s32 func_L41_004464B8(Type2 *);

static inline s32 func_L41_00446500_flag(Type2 *b) {
    s32 r;
    if (b->f2EFC == 0) {
        r = 0;
    } else if (b->f2EFC->f27B == 0) {
        r = 0;
    } else if (b->f25CC == 0x31) {
        r = 1;
    } else {
        r = 0;
    }
    return r;
}

#define CAN_ACT(b) (!((b)->f2E20 <= 0.0f) && \
    (b)->f25CC != 0x39 && (b)->f25CC != 0x68 && (b)->f25CC != 0x6A && (b)->f25CC != 0x76 && \
    (b)->f25CC != 0x7A && (b)->f25CC != 0x7B && (b)->f25CC != 0x7E && (b)->f25CC != 0x7F && \
    (b)->f25CC != 0x94 && (b)->f25CC != 0x99 && func_L00_006F3958(b) == 0 && \
    !(u8)func_L41_00446500_flag(b))

/* Checks whether b may act on a; runs the per-kind handler or reports the failure. */
s32 func_L41_00446500(Type1 *a, Type2 *b) {
    s32 ret = 0;
    Type3 *c = a->fAC;
    s32 busy = func_L41_004464B8(b);
    s32 id, n;

    if (b != 0 && b->f2EC == a && b->f2FE == 0 && busy == 0 && CAN_ACT(b) &&
        func_L00_006D2920(b) != 0 &&
        (b->f2F14 == c->f74 || (c->f74 == 10 && D_0021DFF0->f9 == 0 && D_0021DFF0->f2F != 0))) {
        switch (c->f0) {
        case 1:
        case 2:
            ret = 1;
            break;
        case 3:
        case 4:
            id = func_00446418(c->f10);
            if (!(u8)func_L00_00700708(b->f26E4, id) ||
                (D_0021DFF0->f20 == 0 && func_L00_006FF6D0(b->f26E4, id) < func_L00_006FF700(b->f26E4, id))) {
                ret = 1;
            }
            break;
        case 5: {
            s32 t = func_L41_00446010(b);
            if (t > 0) {
                n = func_L41_00445FA8(c->f10);
                if (n > 0) ret = func_L00_00701AF8(t, n) != 0;
            }
            break;
        }
        }
    } else if (b != 0 && b->f266D != 0 && b->f2EC == a && b->f2FE == 0 && CAN_ACT(b) &&
        b->f2F14 != c->f74 && D_0021DFF0->f9 != 0 && D_0021DFF0->f2F != 0) {
        func_L00_005C97D8(0x2F5E, 0x63F, 2);
    }
    return ret;
}
