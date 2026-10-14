#include "common.h"

void func_L00_006D0B68(void *, s32);
s32 func_L00_006D10E0(void *);
void func_L00_006F3EC0(void);
extern s32 D_0021E6B4;
extern s32 *D_0021DDA4;
extern s32 D_0021DD9C;
extern s32 D_0021DDB4;
extern void *D_0022CA80[];
extern u8 D_00346BE0[];
extern u8 D_171DE0[];

#define S32(p, o) (*(s32 *)((p) + (o)))
#define PTR(p, o) (*(u8 **)((p) + (o)))
#define FL(q) (*(u16 *)((q) + 0x34))

/* Per-player update: sets or clears visibility flags on each player's parts. */
void func_L00_006A9A78(void) {
    s32 i;
    u8 *p;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 drawn;
    s32 k;
    s32 v;
    s32 x;
    s16 t;
    s32 *base;
    u8 *q;
    u8 *e;

    for (i = 0; i < *D_0021DDA4; i++) {
        {
            p = D_00346BE0 + i * 0x31F0;
            if (p != 0) {
                a = 0;
                if (*(s16 *)(p + 0x3A2) != 0 ||
                    (p[0x2662] != 0 && (S32(p, 0x25CC) == 1 || S32(p, 0x25CC) == 0x1D))) {
                    a = 1;
                }
                b = 0;
                if (D_171DE0[S32(p, 0x2F10)] == 1) {
                    v = S32(p, 0x25CC);
                    x = 0;
                    if (v == 1 || v == 0x1D || p[0x2ECE] != 0 || p[0x2ED0] != 0) {
                        x = 1;
                    }
                    if (x == 1) {
                        b = 1;
                    } else {
                        b = 0;
                    }
                }
                c = 0;
                d = func_L00_006D10E0(p) == 2;
                if (p[0x2ED6] != 0 || S32(p, 0x25D4) == 0x14 || S32(p, 0x25CC) == 0x7A) {
                    if (p[0x2662] != 0) {
                        c = 1;
                    } else {
                        c = 0;
                    }
                }
                if (D_0021E6B4 != 1) {
                    base = (s32 *)((u32)D_0022CA80 + S32(p, 0x2F10) * 0x470);
                    t = *(s16 *)(base[0x50 / 4] + 0x86);
                    if (t == 0x17 || t == 0x13) {
                        d = 0;
                    }
                }
                drawn = 0;
                if ((d || a || b || c) && i == D_0021DD9C) {
                    drawn = 1;
                    FL(PTR(p, 0x634)) |= 1;
                    for (k = 0; k < 6; k++) {
                        if (k == 0) {
                            continue;
                        }
                        q = PTR(p + k * 0x50, 0x22F0);
                        if (q != 0) {
                            FL(q) |= 1;
                        }
                        q = PTR(p + k * 0x50, 0x22F4);
                        if (q != 0) {
                            FL(q) |= 1;
                        }
                    }
                    if (S32(p, 0x2318) == 1 && (q = PTR(p, 0x22F0)) != 0 &&
                        D_0021DDB4 == 0 && q[0x20] != 0) {
                        FL(q) &= 0xFFBE;
                    }
                    func_L00_006D0B68(p, 1);
                    if (S32(p, 0x25CC) == 0x1D && S32(p, 0x2318) == 5) {
                        FL(PTR(p, 0x22F0)) |= 1;
                    }
                }
                if (!drawn) {
                    if (S32(p, 0x25CC) != 0x31 && c == 0) {
                        FL(PTR(p, 0x634)) &= 0xFFFE;
                        for (k = 0; k < 6; k++) {
                            q = PTR(p + k * 0x50, 0x22F0);
                            if (q != 0) {
                                FL(q) &= 0xFFFE;
                            }
                            q = PTR(p + k * 0x50, 0x22F4);
                            if (q != 0) {
                                FL(q) &= 0xFFFE;
                            }
                        }
                        func_L00_006D0B68(p, 0);
                    }
                    if (S32(p, 0x2EE8) != 0 && S32(p, 0x2318) == 1) {
                        q = PTR(p, 0x22F0);
                        if (q != 0) {
                            FL(q) |= 1;
                        }
                        q = PTR(p, 0x22F4);
                        if (q != 0) {
                            FL(q) |= 1;
                        }
                    }
                    if ((p[0x2668] != 0 && S32(p, 0x2318) == 1) || p[0x2663] != 0) {
                        e = PTR(p, 0x22F0);
                        if (e != 0) {
                            FL(e) |= 0x41;
                        }
                    }
                }
            }
        }
    }
    func_L00_006F3EC0();
}
