#include "common.h"

typedef struct {
    u8 pad0[0x10];
    u8 f10;
    u8 pad11[0x1C - 0x11];
    void *f1C;
} Type2;

typedef struct {
    u8 pad0[0x30];
    u8 f30;
    u8 pad31[3];
    u16 f34;
    u8 pad36[0x98 - 0x36];
    s32 f98;
} Type3;

typedef struct {
    s32 f0;
    s32 f4;
    u8 pad8[0x18 - 8];
} Type4;

typedef struct {
    s32 f0;
    s32 f4;
    u8 pad8[0x30 - 8];
} Type5;

typedef struct {
    u8 pad0[0x24];
    s32 f24;
    Type5 *f28;
    u8 pad2C[4];
} Type6;

typedef struct {
    u8 pad0[8];
    s32 f8;
    Type4 *fC;
    u8 pad10[0x34 - 0x10];
    s32 f34;
    Type6 *f38;
} Type7;

typedef struct {
    u8 pad0[0x170];
    Type3 *f170;
    Type7 *f174;
    s32 f178;
    u8 pad17C[0x1C8 - 0x17C];
    s32 f1C8;
} Type1;

extern Type2 *func_L00_005BD3C0(s16);
extern void func_L00_0066CCE8(void *, s32);
extern void func_L00_0066CD78(s32);
extern void func_L01_00588B08(void *);
extern void func_L01_00591BD8(void *a, s32 b, s32 c);
extern void func_L01_0059B8E0(void *, void *);

/* Detaches the moby from the object: releases its handle and resets state. */
void func_L01_0048AB58(void *arg0, Type1 *arg1, s32 arg2) {
    Type7 *s4;
    Type3 *s0;
    Type2 *v;
    Type4 *p;
    Type6 *q;
    Type5 *r;
    s32 i;
    s32 j;

    s4 = arg1->f174;
    s0 = arg1->f170;
    v = func_L00_005BD3C0(*(s16 *)&arg1->f1C8);
    if (v != 0 && s0 == v->f1C && v->f10 != 0) {
        func_L00_0066CD78(arg1->f1C8);
        arg1->f1C8 = -1;
    }
    func_L01_0059B8E0(arg1->f170, (u8 *)arg1 + 0xCE0);
    if (s4->f8 != 0) {
        p = s4->fC;
        for (i = 0; i < s4->f8; i++) {
            func_L01_0059B8E0(arg1->f170, (u8 *)arg1 + (p->f4 * 0x80 + 0x1E0));
            p++;
        }
    }
    if (s4->f34 != 0) {
        q = s4->f38;
        for (j = 0; j < s4->f34; j++) {
            if (q->f24 != 0) {
                r = q->f28;
                for (i = 0; i < q->f24; i++) {
                    func_L01_0059B8E0(arg1->f170, (u8 *)arg1 + (r->f4 * 0x80 + 0x1E0));
                    r++;
                }
            }
            q++;
        }
    }
    arg1->f170->f34 |= 0x41;
    arg1->f170->f34 &= 0xEFFF;
    arg1->f170->f98 = 0;
    func_L00_0066CCE8(arg1->f170, 1);
    arg1->f170->f98 = 0;
    if (arg2 != 0) {
        func_L01_00591BD8(arg1->f170, 1, -1);
        arg1->f170->f34 |= 2;
        func_L01_00588B08(arg1->f170);
    } else {
        arg1->f170->f30 = 0xFF;
        func_L01_00591BD8(arg1->f170, 3, -1);
    }
    arg1->f174 = 0;
    arg1->f170 = 0;
    arg1->f178 = 0;
}
