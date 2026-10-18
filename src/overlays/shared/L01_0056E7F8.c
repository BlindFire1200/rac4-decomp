#include "common.h"

typedef struct Type1 {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    u8 f20;
    u8 f21;
    u8 f22;
} Type1;

extern void *func_L00_005C8EB8(void *);

void func_L01_0056E7F8(void *arg0) {
    Type1 *p;

    p = func_L00_005C8EB8(arg0);
    if (arg0 != 0 && p != 0) {
        p->f0 = 0;
        p->f4 = 0;
        p->f8 = 0;
        p->f10 = 0;
        p->f14 = 0;
        p->f18 = 0;
        p->f1C = 0;
        p->f20 = 0;
        p->f21 = 3;
        p->f22 = 0;
    }
}
