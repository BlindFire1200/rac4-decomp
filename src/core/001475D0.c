/* cflags: -fno-opt-stack */
#include "common.h"

extern s32 D_0016F750[];
extern void func_00147738(s32 arg0);

/* Records arg0 in D_0016F750 and dispatches it through a five-entry table. */
s32 func_001475D0(s32 arg0) {
    s32 ret = 0;

    D_0016F750[0] = arg0;
    switch (arg0) {
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
