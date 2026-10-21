#include "common.h"

typedef struct Type2 {
    s32 f0[5];
    s32 f14;
} Type2;

typedef struct Type1 {
    s32 f0;
    Type2 *f4;
} Type1;

typedef struct Type4 {
    s32 f0[5];
    s32 (*f14)(void *, s32);
} Type4;

typedef struct Type3 {
    s32 f0;
    s32 f4;
    Type4 *f8;
    u32 fC_0 : 1;
} Type3;

extern Type1 D_00223478[];
extern s32 D_00220468;
Type1 *func_L00_00698D80(void);
Type3 *func_L00_00698288(s32, s32);

// Looks up an object by key and stores its low flag bit in *out when it accepts D_00220468.
s32 func_L41_005C17C0(s32 key, u8 *out) {
    Type1 *p;
    Type2 *t;
    s32 a0;
    Type3 *obj;
    Type3 *found;
    s32 ret = 0;

    if (D_00223478->f4 != 0) {
        p = D_00223478;
    } else {
        p = func_L00_00698D80();
    }
    t = p->f4;
    a0 = 0;
    if (t != 0) {
        a0 = t->f0[t->f14];
    }
    obj = func_L00_00698288(a0, key);
    if (obj != 0 && obj->f8->f14(obj, D_00220468) != 0) {
        found = obj;
    } else {
        found = 0;
    }
    if (found != 0) {
        *out = found->fC_0;
        ret = 1;
    }
    return ret;
}
