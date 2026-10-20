#include "common.h"

typedef struct Type2 {
    char pad0[0x20];
    unsigned char f20;
    char pad21[0x7];
    int f28;
} Type2;

typedef struct Type3 {
    char pad0[0x1FC];
    Type2 *f1FC;
} Type3;

typedef struct Type1 {
    char pad0[0xAC];
    Type3 *fAC;
} Type1;

int func_00596F28(Type2 *);
int func_L01_005014F8(Type1 *, Type2 *);
extern Type2 *D_0028D220[];
extern Type2 *D_00222D38;

void func_L01_00501418(Type1 *arg0) {
    Type3 *s2 = arg0->fAC;
    Type2 *e;
    Type2 **p;

    Type2 *cur = s2->f1FC;
    if (cur != 0) {
        if (cur->f20 == 0xFE) goto clear;
        if (cur->f20 == 0xFD) goto clear;
        if (!func_L01_005014F8(arg0, cur)) {
        clear:
            s2->f1FC = 0;
        }
        if (s2->f1FC != 0) {
            return;
        }
    }
    p = D_0028D220;
    e = *p;
    if (e != 0) {
        do {
            if ((e->f28 != 0 || e == D_00222D38) && func_00596F28(e)) {
                if (func_L01_005014F8(arg0, e)) {
                    s2->f1FC = e;
                    break;
                }
            }
            p++;
            e = *p;
        } while (e != 0);
    }
}
