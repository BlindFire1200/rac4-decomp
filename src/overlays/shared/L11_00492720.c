#include "common.h"

typedef struct {
    s32 pad[0x2B];
    void *fAC;
} Type1;

typedef struct {
    f32 f0;
    s32 i4;
} L11Sub;

typedef struct {
    s32 pad[0x14];
    L11Sub sub;
} Type2;

extern void func_0053D128();

/* Raises the sub-object's counter to at least 0x32, mirrors it into the float field, then asks for a state update. */
void func_L11_00492720(Type1 *arg0) {
    Type2 *p = (Type2 *)arg0->fAC;
    L11Sub *s = &p->sub;

    if (s->i4 < 2) {
        s->i4 = 0x32;
    }
    p->sub.f0 = (f32)s->i4;
    func_0053D128(arg0, 1, -1);
}
