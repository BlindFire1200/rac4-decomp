/* cflags: -fno-opt-stack */
#include "common.h"

#include "common.h"

typedef struct Type1 Type1;
typedef struct Type2 Type2;

struct Type2 {
    u8 f00[0x38];
    s32 f38;
};

struct Type1 {
    u8 f00[0xC];
    s16 fC;
    u8 f0E[0x0E];
    s32 f1C;
    u8 f20[0xC];
    s32 (*f2C)(s32);
    u8 f30[0x24];
    Type2 *f54;
};

extern s32 D_00163E74_[];

extern s32 func_0011C2D8(void *);
extern void func_0011C6C0(u8 *);

/* Runs one transfer step on the object: initialises its handle, asks the
   flag-driven callback and the completion hook, then clears the flags. */
s32 func_0011C220(u8 *arg0) {
    Type1 *o = (Type1 *)arg0;
    Type2 *p;
    s32 s;
    s32 (*fp)(s32);

    if (o == NULL) {
        return 0;
    }
    if (o->f54 == NULL) {
        o->f54 = (Type2 *)D_00163E74_[0];
    }
    p = o->f54;
    if (p->f38 == 0) {
        func_0011C6C0((u8 *)p);
    }
    if (o->fC == 0) {
        return 0;
    }
    s = 0;
    if ((u16)o->fC & 8) {
        s = func_0011C2D8(o);
    }
    fp = o->f2C;
    if (fp != NULL) {
        if (fp(o->f1C) <= -1) {
            s = -1;
        }
    }
    o->fC = 0;
    return s;
}
