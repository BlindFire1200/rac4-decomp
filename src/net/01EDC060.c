#include "common.h"

/* Net: invokes the installed handler with the new payload and the connection state, then returns 144. */
extern int D_001BCA90[4];
extern int D_001BC898[4];

int func_01EDC060(int arg0, int arg1, int arg2, int arg3) {
    int x = arg3;
    if (D_001BCA90[0] != 0) {
        ((void (*)(int, int))D_001BCA90[0])(x, D_001BC898[0]);
    }
    return 0x90;
}
