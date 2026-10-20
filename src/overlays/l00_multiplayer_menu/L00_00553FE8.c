#include "common.h"

// Link arg1 after arg0: copy +0x18 (marking it with bit 3 of +0x16) and +0x1C, then set arg0's +0x1C to arg1.

typedef struct Type1 {
    char _p0[0x16];
    u8 f16;
    char _p17[0x18 - 0x17];
    struct Type1 *f18;
    struct Type1 *f1C;
} Type1;

void func_L00_00553FE8(Type1 *arg0, Type1 *arg1) {
    Type1 *p = arg0->f18;

    arg1->f18 = p;
    if (p != 0) {
        p->f16 |= 8;
    }
    arg1->f1C = arg0->f1C;
    arg0->f1C = arg1;
}
