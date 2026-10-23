/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 D_0016F750[];
extern void func_00147738(s32 arg0);

/* Dispatches on the mode stored in D_0016F750: modes 1 and 3 call func_00147738(0), modes 0, 2
   and 4 return 0, others clear it and return -1. */
s32 func_00147638(void) {
    s32 ret = 0;

    switch (D_0016F750[0]) {
    case 0:
    case 2:
    case 4:
        break;
    case 1:
    case 3:
        func_00147738(0);
        break;
    default:
        D_0016F750[0] = 0;
        ret = -1;
        break;
    }
    return ret;
}
