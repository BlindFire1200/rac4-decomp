/* cflags: -fno-opt-stack */
#include "common.h"

typedef struct Type5 Type5;
typedef struct Type8 Type8;

struct Type5 {
    u8 pad[0xC];
    s16 fC;
    u8 pad2[0x4A];
};

struct Type8 {
    Type8 *f0;
    s32 f4;
    Type5 *f8;
};

/* Walks the linked list of element blocks and ORs the callback results. */
s32 func_0011D3E8(s32 arg0, s32 (*arg1)(void *)) {
    Type8 *p = (Type8 *)((u8 *)arg0 + 0x1D8);
    s32 r = 0;
    s32 i;
    Type5 *e;

    while (p != NULL) {
        i = p->f4;
        e = p->f8;
        while (--i >= 0) {
            if (e->fC != 0) {
                r |= arg1(e);
            }
            e++;
        }
        p = p->f0;
    }
    return r;
}
