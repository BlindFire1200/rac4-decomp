#include "common.h"

typedef struct Type1 Type1;
struct Type1 {
    s32 f0;
    s32 f4;
    f32 f8;
    f32 fC;
    s32 f10;
    s32 f14;
    s32 f18[16];
    s32 f58[34];
    s32 fE0[59];
    s32 f1CC;
    s32 f1D0[2049];
    s32 f21D4;
    s32 f21D8[97];
    s32 f235C;
    s32 f2360[199];
};

extern Type1 D_00329CE0[];
extern s32 func_00500988(s32 a0);
extern s32 func_005009F0(s32 arg0);
extern void *func_00503D00(Type1 *arg0);

s32 D_00222018 = 0;

/* Sets up the five instance structs once, then returns the one at index arg0. */
s32 func_004FF940(s32 arg0) {
    if (D_00222018 == 0) {
        Type1 *p = &D_00329CE0[0];
        s32 i;

        for (i = 4; i != -1; i--) {
            p->f0 = 0;
            p->f4 = 0;
            p->f8 = 1.0f;
            p->fC = 1.0f;
            p->f10 = 0;
            p->f14 = 0;
            {
                s32 *q = &p->f58[0];
                s32 j = 34;

                do {
                    *q = 0;
                    q++;
                    j--;
                } while (j != -1);
            }
            func_00500988((s32)&p->f1CC);
            func_005009F0((s32)&p->f21D4);
            func_00503D00((Type1 *)&p->f235C);
            p++;
        }
        D_00222018 = 1;
    }
    return (arg0 * 0x267C) + (s32)&D_00329CE0[0];
}
