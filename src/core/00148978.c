/* cflags: -fno-opt-stack */
#include "common.h"

#include "common.h"

typedef struct Type1 {
    f32 f0;
    s32 f4;
    void *f8;
} Type1;

void func_001480F8(void *, s32, s32);

extern s32 *(*D_0016F740_[])(s32, s32);
#define D_0016F740 (D_0016F740_[0])

// Allocates the object and its child block, then initialises both.
s32 func_00148978(Type1 **arg0) {
    Type1 *p;
    void *q;

    if (arg0 == 0) {
        return 1;
    }
    *arg0 = 0;
    p = (Type1 *)D_0016F740(1, 0xC);
    if (p == 0) {
        return 1;
    }
    *arg0 = p;
    q = D_0016F740(0xD, 4);
    p->f8 = q;
    if (q == 0) {
        return 1;
    }
    p->f4 = 0;
    p->f0 = 1000.0f;
    func_001480F8(q, 0, 0x34);
    return 0;
}
