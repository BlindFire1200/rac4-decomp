#include "common.h"

extern void *func_006A9160(s32);
extern void func_L00_00670708();
s32 D_002206C4 = 0;
extern s32 D_00222308;
extern s32 D_0021DD9C;

typedef struct Type2 Type2;
typedef struct {
    u8 pad0[0x4C];
    s32 (*f4C)(Type2 *);
} Type3;
struct Type2 {
    u8 pad0[0x14];
    Type3 *f14;
    u8 pad18[0x266D - 0x18];
    u8 f266D;
};
typedef struct {
    s32 f0;
    u8 pad4[0xB8 - 4];
    s32 (*fB8)(s32);
} Type4;
typedef struct {
    u8 pad0[0x2F0];
    s32 f2F0;
    u8 pad2F4[0x25D4 - 0x2F4];
    s32 f25D4;
    u8 pad25D8[0x2FEA - 0x25D8];
    u8 f2FEA;
} Type5;
typedef struct {
    u8 pad0[0x2B0];
    s32 f2B0;
    u8 pad2B4[4];
    Type2 *f2B8;
    Type2 *f2BC;
    u8 pad2C0[0x308 - 0x2C0];
    s32 f308;
    u8 pad30C[0x324 - 0x30C];
    Type4 *f324;
    u8 pad328[0x340 - 0x328];
} Type1;
extern Type1 D_00358FA0[];

// Scan the entries for one whose target is flagged; if found, clear the state and notify.
void func_L00_006F3EC0(void) {
    Type1 *p;
    Type5 *q;
    Type2 *a;
    Type4 *v;
    s32 n;
    s32 found = 0;
    s32 i = 0;

    D_00222308 = 2;
    if (D_002206C4 > 0) {
    p = D_00358FA0;
    do {
        v = p->f324;
        if (p == NULL) goto next;
        if (p->f2B0 == 0 || v->f0 != 1) goto next;
        if (v->fB8 != NULL) {
            n = v->fB8(p->f2B0);
        } else {
            n = p->f308;
        }
        if (n > 0) {
            q = func_006A9160(n - 1);
            if (q != NULL && q->f2FEA == D_0021DD9C) {
                if (q->f2F0 == 0 || q->f25D4 == 20) {
                    found = 1;
                    break;
                }
            }
        }
        a = p->f2B8;
        if (a != NULL && a->f266D != 0 && a->f14->f4C(a) == D_0021DD9C) {
            found = 1;
            break;
        }
        a = p->f2BC;
        if (a != NULL && a->f266D != 0 && a->f14->f4C(a) == D_0021DD9C) {
            found = 1;
            break;
        }
    next:
        i++;
        p++;
    } while (i < D_002206C4);
    }
    if (found) {
        D_00222308 = 0;
        func_L00_00670708();
    }
}
