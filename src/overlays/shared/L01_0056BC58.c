#include "common.h"

typedef int u128 __attribute__((mode(TI)));

typedef struct Type1 {
    /* 0x00 */ void *f0;
    /* 0x04 */ u8 f4;
    /* 0x05 */ u8 f5;
    /* 0x06 */ u8 f6;
    /* 0x07 */ u8 f7;
    /* 0x08 */ u16 f8;
    /* 0x0A */ u16 fA;
    /* 0x0C */ u8 *fC;
    /* 0x10 */ s16 f10;
    /* 0x12 */ u8 f12[6];
    /* 0x18 */ s32 f18;
    /* 0x1C */ s32 f1C;
    /* 0x20 */ s32 f20;
    /* 0x24 */ s32 f24;
    /* 0x28 */ s32 f28;
    /* 0x2C */ f32 f2C;
    /* 0x30 */ u128 f30;
    /* 0x40 */ u128 f40;
} Type1;

typedef struct Type2 {
    void *(*f0)(void *);
    s32 f4[5];
    void (*f18)(void *, void *);
} Type2;

extern void *func_00595D00(void *);
extern void *func_00595D70(void *);
extern void *func_005A16E8(void *);
extern s32 func_L00_005C8CF0(s32);
extern void **func_L00_005C8EB8(void *);
extern Type2 *func_L00_005DEBD0(s32, s32, s32);
extern s32 func_L01_0056D620(void *, void *);
extern s32 func_L01_0056D9B0(s32);
extern u8 *func_L01_00588BC0(s32);
extern Type1 D_00248500[];

// Releases every pooled entry owned by arg0, restoring or respawning its object
void func_L01_0056BC58(u8 *arg0) {
    Type1 *e;
    u8 *obj;
    u8 *sub;
    u8 *r;
    Type2 *tbl;
    s32 i;
    s32 j;

    if (arg0 == 0) {
        return;
    }
    if (*(s32 *)(arg0 + 8) == -1) {
        return;
    }
    if (func_L01_0056D9B0(*(s32 *)(arg0 + 8)) == 0) {
        return;
    }
    for (i = 0; i < 0x80; i++) {
        e = &D_00248500[i];
        if (e->f0 != arg0) {
            continue;
        }
        if (e->f5 != 0) {
            obj = e->fC;
            if (e->f6 != 0) {
                *(s32 *)(obj + 0x98) = *(s32 *)(*(u8 **)(obj + 0x24) + 0x10);
            }
            *(u16 *)(obj + 0x34) = e->f8;
            {
                u8 *m = func_00595D00(obj);
                if (m != 0) {
                    sub = *(u8 **)(m + 0x5C);
                    if (sub != 0) {
                        if (e->f7 != 0) {
                            *(s32 *)(sub + 0x98) = *(s32 *)(*(u8 **)(sub + 0x24) + 0x10);
                        }
                        *(u16 *)(*(u8 **)(m + 0x5C) + 0x34) = e->fA;
                    }
                }
            }
            e->f0 = 0;
            {
                Type2 *t = func_L00_005DEBD0(func_L00_005C8CF0(e->f10), 0xE, 0x1C);
                if (t != 0 && t->f0 != 0) {
                    u8 *q = t->f0(obj);
                    if (q != 0) {
                        q[0x4C] = 1;
                    }
                }
            }
        } else {
            obj = func_L01_00588BC0(func_L00_005C8CF0(e->f10));
            if (obj == 0) {
                continue;
            }
            tbl = func_L00_005DEBD0(func_L00_005C8CF0(e->f10), 0xE, 0x1C);
            e->f0 = 0;
            *(u128 *)(obj + 0x10) = e->f30;
            *(u128 *)(obj + 0xF0) = e->f40;
            if (tbl != 0 && tbl->f0 != 0) {
                r = tbl->f0(obj);
                if (r != 0) {
                    u8 *dst;
                    u8 *src;
                    j = 0;
                    dst = r + 0x44;
                    src = e->f12;
                    do {
                        dst[j] = src[j];
                        j++;
                    } while (j < 6);
                    *(s32 *)(r + 0x24) = e->f18;
                    *(s32 *)(r + 0x28) = e->f1C;
                    *(s32 *)(r + 0x2C) = e->f20;
                    *(s32 *)(r + 0x30) = e->f24;
                    *(s32 *)(r + 0x34) = e->f28;
                    r[0x4D] = e->f4;
                    r[0x4C] = 1;
                }
            }
            {
                u8 *a = func_005A16E8(obj);
                if (a != 0) {
                    *(f32 *)(a + 0x38) = e->f2C;
                }
            }
            if (*(f32 *)(arg0 + 0x400) > 0.0f) {
                u8 *b = func_00595D70(obj);
                if (b != 0) {
                    *(f32 *)(b + 0x28) = *(f32 *)(arg0 + 0x400);
                }
            }
            tbl->f18(obj, e);
        }
        {
            void **p = func_L00_005C8EB8(obj);
            if (p != 0) {
                *p = arg0;
            }
        }
        func_L01_0056D620(arg0 + 0xD0, obj);
        *(u16 *)(arg0 + 2) = *(u16 *)(arg0 + 2) - 1;
    }
    arg0[0x3E1] = 1;
}
