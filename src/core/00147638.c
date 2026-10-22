/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 D_0016F750[];
extern void func_00147738(s32 arg0);

/* Dispatches the value stored in D_0016F750 through a five-entry table. */
s32 func_00147638(void) {
    s32 ret = 0;

    switch (D_0016F750[0]) {
    case 0:
        func_00147738(0);
        break;
    case 1:
        func_00147738(0);
        break;
    case 2:
        func_00147738(0);
        break;
    case 3:
        func_00147738(0);
        break;
    case 4:
        func_00147738(0);
        break;
    default:
        D_0016F750[0] = 0;
        ret = -1;
        break;
    }
    return ret;
}
