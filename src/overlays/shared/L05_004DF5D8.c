#include "common.h"

typedef struct L05Type2 {
    char pad[0x144];
    int f144;
} L05Type2;

typedef struct L05Type1 {
    char pad[0x20];
    unsigned char f20;
    char pad2[0xAC - 0x21];
    L05Type2 *fAC;
} L05Type1;

extern void func_00568B98(L05Type1 *o, unsigned char state, int type);

/* Returns 1 after calling the shared handler when the linked table entry equals arg1 and the object's type byte is 3 or 6. */
int func_L05_004DF5D8(L05Type1 *arg0, int arg1) {
    L05Type2 *p = arg0->fAC;
    unsigned char t;

    if (p->f144 != arg1) {
        return 0;
    }
    t = arg0->f20;
    if (t == 3 || t == 6) {
        func_00568B98(arg0, 7, -1);
        return 1;
    }
    return 0;
}
