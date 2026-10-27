#include "common.h"

extern s32 func_01EA95C0(s32 *);

/* Passes the address of a stack copy of arg0 to func_01EA95C0 when arg0 is nonzero. */
void func_01EDA770(s32 arg0) {
    s32 tmp;

    tmp = arg0;
    if (arg0 != 0) {
        func_01EA95C0(&tmp);
    }
}
