#include "common.h"

extern void func_L00_004F84C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void *func_L00_004FACD8(s32 arg0);

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
} Type1;

/* Allocates a 12-byte entry, zeroes its three fields and returns it; on allocation failure shows error 7/0x65/0x21 and returns NULL. */
void *func_L00_00516F10(void) {
    Type1 *p = (Type1 *)func_L00_004FACD8(0xC);

    if (p != 0) {
        p->f0 = 0;
        p->f8 = 0;
        p->f4 = 0;
        return p;
    }

    func_L00_004F84C8(7, 0x65, 0x21, 0, 0);
    return 0;
}
