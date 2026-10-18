#include "common.h"

typedef int u128 __attribute__((mode(TI)));

typedef struct Type1 {
    u8 pad0[0x10];
    u128 f10;
    u8 pad20[0x98];
    struct Type1 *fB8;
} Type1;

typedef struct Type2 {
    u8 pad0[0x10];
    Type1 *f10;
    u8 pad14[0x1C];
    u128 f30;
} Type2;

typedef struct Type3 {
    u8 pad0[0x18];
    Type1 *f18;
    u8 pad1C[4];
    u128 f20;
} Type3;

extern Type3 D_0023F280[];

void func_L01_0050F848(Type1 *, Type2 *);
static inline Type1 *func_root(Type1 *p) {
    while (p->fB8 != NULL) {
        p = p->fB8;
    }
    return p;
}

s32 func_L05_004A00A0(Type1 *arg0, Type2 *arg1) {
    u128 v;

    if (D_0023F280->f18 != NULL) {
        if (arg0->fB8 != NULL && func_root(arg0->fB8) == func_root(D_0023F280->f18)) {
            return 0;
        }
        arg1->f10 = D_0023F280->f18;
        func_L01_0050F848(arg0, arg1);
        v = arg1->f30;
    } else {
        v = D_0023F280->f20;
    }
    arg0->f10 = v;
    return 1;
}
