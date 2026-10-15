#include "common.h"

typedef struct Type2 {
    u8 pad0[4];
    s32 f4;
    u8 pad8[8];
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    s16 f20;
    u8 f22;
    u8 f23;
    u8 pad24;
    u8 f25;
    u8 f26;
    u8 f27;
    u8 f28;
    u8 f29;
    u8 f2A;
    u8 f2B;
    u8 f2C;
    u8 pad2D;
    s16 f2E;
    u8 pad30[0x50];
    s32 f80;
    s32 f84;
    s32 f88;
    u8 pad8C[0x14];
    s32 fA0[64];
    s32 f1A0[64];
} Type2;

typedef struct Type1 {
    u8 pad0[0x20];
    u8 f20;
    u8 pad21[0x8B];
    Type2 *fAC;
    u8 padB0[0xC];
    s16 fBC;
} Type1;

typedef struct Type3 {
    u8 pad0[0x26E4];
    s32 f26E4;
} Type3;

typedef struct Type4 {
    s32 f0;
    s32 f4;
} Type4;

extern s32 D_00222D14;
extern s32 D_0021DDB8;

s32 func_L00_005C8CF0(s32);
Type4 *func_L00_005EAC30(Type1 *);
s32 func_L00_00702148(s32, s32);
void func_L01_00497878();

/* checks a moby against a set of filter conditions and records the hit */
void func_L01_00498860(Type1 *arg0, Type1 *arg1, Type3 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    Type2 *s;
    s32 ok;
    s32 flag;
    s32 bits;
    s32 n;
    s32 i;
    Type4 *p;
    s32 j;
    s32 k;

    if (arg0->fBC == 0x2682) {
        s = arg0->fAC;
        if (arg0->f20 == 0) {
            func_L01_00497878();
        }
        ok = 1;
        if (s->f10 != 0) {
            flag = 0;
            if (s->f18 != -1) {
                if (func_L00_005C8CF0(arg1->fBC) != s->f18) {
                    ok = 0;
                }
            }
            if (s->f1C != -1) {
                if ((((s32)arg1 - D_00222D14) >> 8) != s->f1C) {
                    ok = 0;
                }
            }
            if (s->f22 != 0) {
                if (arg3 != s->f22) {
                    ok = 0;
                }
            }
            if (s->f23 != 0) {
                if (func_L00_00702148(arg2->f26E4, arg3) != s->f23) {
                    ok = 0;
                }
            }
            if (s->f25 != 0 && s->f20 == 0) {
                n = 0;
                for (i = 1; i < 20; i++) {
                    n += (s->f84 >> i) & 1;
                }
                if (n < s->f25) {
                    s->f84 |= 1 << arg3;
                    if (s->f4 >= s->f14) {
                        ok = 0;
                    }
                }
            }
            if (s->f26 != 0 && s->f20 == 0) {
                n = 0;
                for (i = 1; i < 9; i++) {
                    n += (s->f88 >> i) & 1;
                }
                if (n < s->f26) {
                    if (s->f4 >= s->f14) {
                        ok = 0;
                    }
                    s->f88 |= 1 << func_L00_00702148(arg2->f26E4, arg3);
                }
            }
            if (s->f27 != 0 && s->f2C != 0) {
                flag = ((s->f80 >> arg3) ^ 1) & 1;
            }
            if (s->f28 != 0 && arg4 == 0) {
                ok = 0;
            }
            if (s->f29 != 0 && arg5 == 0) {
                ok = 0;
            }
            if (s->f2A != 0 && arg6 == 0) {
                ok = 0;
            }
            if (s->f2C != 0 && (ok == 0 || flag != 0)) {
                for (k = 0; k < 64; k++) {
                    s->fA0[k] = -1;
                }
                s->f4 = 0;
            }
            if (ok != 0) {
                if (s->f20 != 0 || s->f2B != 0) {
                    for (j = 0; j < 64; j++) {
                        if (s->fA0[j] == -1) {
                            if (s->f26 == 0 || func_L00_00702148(arg2->f26E4, arg3) != 0) {
                                s->fA0[j] = D_0021DDB8;
                            }
                            if (s->f26 != 0 && func_L00_00702148(arg2->f26E4, arg3) != 0) {
                                s->f1A0[j] = func_L00_00702148(arg2->f26E4, arg3);
                            } else if (s->f25 != 0) {
                                s->f1A0[j] = arg3;
                            }
                            break;
                        }
                    }
                } else if (s->f27 != 0 && s->f2C == 0) {
                    for (i = 0; i < 20; i++) {
                        if (s->fA0[i] == -1) {
                            s->fA0[i] = 0;
                        }
                        if (i == arg3) {
                            s->fA0[i]++;
                        }
                    }
                } else if (s->f2E != 0) {
                    p = func_L00_005EAC30(arg1);
                    if (p != 0) {
                        s->f4 += p->f4;
                    }
                } else {
                    s->f4++;
                }
                s->f80 |= 1 << arg3;
            }
        }
    }
}
