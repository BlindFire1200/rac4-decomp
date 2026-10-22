#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
} Type1;

extern void *func_L00_004FACD8(s32);
extern void func_L00_004F84C8(s32, s32, s32, s32, s32);

/* Allocates an 8 byte item and initialises it, or reports an error if the allocation fails. */
void *func_L00_005373D8(void) {
    Type1 *p = func_L00_004FACD8(8);

    if (p == NULL) {
        s32 err[12];
        s32 *errp = &err[0];
        err[11] = 0xD6;
        func_L00_004F84C8(0xD, 0x77, 0x21, 0, 0);
        return NULL;
    }

    p->f0 = -1;
    p->f4 = 0;
    return p;
}
