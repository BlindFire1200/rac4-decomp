#include "common.h"

extern s32 func_L00_00764668(void);
extern void func_L00_007533F0(void *, s32);
extern s32 D_004EC560[];

typedef void (*Vfunc80)(void *, s32, s32);
typedef void (*VfuncCC)(void *, s32);

typedef struct {
    s32 pad00[32];
    Vfunc80 f80;
    s32 pad84[18];
    VfuncCC fCC;
} Vtbl;

typedef struct {
    s32 pad00[22];
    Vtbl *f58;
} Obj;

typedef struct {
    s32 pad00[54];
    Obj *fD8;
    s32 padDC[98];
    s32 f264;
} Type1;

/* clears the lobby counter, pushes the two menu parameters and fires the five notification slots */
void func_L00_00753190(Type1 *arg0) {
    s32 v;
    s32 w;
    s32 val;
    s32 i;
    s32 *tbl;

    arg0->f264 = 0;
    v = func_L00_00764660();
    w = func_L00_00764668();
    arg0->fD8->f58->f80(arg0->fD8, v, w);

    tbl = D_004EC560;
    i = 4;
    do {
        i--;
        val = *tbl;
        tbl++;
        arg0->fD8->f58->fCC(arg0->fD8, val);
    } while (i >= 0);

    func_L00_007533F0(arg0, 0);
}
