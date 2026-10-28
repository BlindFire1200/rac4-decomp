/* cflags: @ee29 -O2 -G0 */
/* C adapted from rac3-decomp func_001254B8 (NTSC-U func_001254B8, commit 403f30a9) */
#include "common.h"

typedef struct Type1 {
    struct Type1 *f0;
    struct Type1 *f4;
    u8 pad8[8];
    unsigned long f10;
    unsigned long f18;
    unsigned long f20;
} Type1;

/* State prefix includes the list head at offset 0x18. */
typedef struct { u8 pad0[0x18]; Type1 *head; } ListState_12DFB8;
extern ListState_12DFB8 D_00165D28;

void *func_0012DFB8(Type1 *h)
{
    Type1 *cur;
    Type1 *f4;
    unsigned long var1;
    void *ret;

    f4 = 0;
    var1 = h->f20 + h->f10 - h->f18;
    cur = D_00165D28.head;
    for (;;) {
        if (cur == 0) {
            break;
        }
        if (var1 < cur->f20 + cur->f10 - cur->f18) {
            break;
        }
        f4 = cur;
        cur = f4->f0;
    }
    h->f4 = f4;
    h->f0 = cur;
    if (cur != 0) {
        cur->f4 = h;
    }
    ret = &D_00165D28;
    if (f4 != 0) {
        f4->f0 = h;
    } else {
        D_00165D28.head = h;
    }
    return ret;
}
