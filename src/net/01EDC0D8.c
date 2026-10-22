#include "common.h"

extern int D_001BCA98[];
extern int D_001BC8A0[];

/* Calls the callback stored in D_001BCA98[0] (if it is set) with the fourth argument and D_001BC8A0[0], then returns 108. */
int func_01EDC0D8(int arg0, int arg1, int arg2, int arg3) {
    int (*temp_v1)(int, int) = (int (*)(int, int))D_001BCA98[0];
    int arg = arg3;

    if (temp_v1 != 0) {
        temp_v1(arg, D_001BC8A0[0]);
    }
    return 0x6C;
}
