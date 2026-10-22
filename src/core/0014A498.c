/* cflags: -fno-opt-stack */
#include "common.h"

extern void (*D_0016F744_[])(s32);
#define D_0016F744 (D_0016F744_[0])

// Releases the object's child and then the object itself.
void func_0014A498(s32 **arg0) {
    s32 *p = *arg0;

    if (p != 0) {
        if (p[2] != 0) {
            D_0016F744(p[2]);
            (*arg0)[2] = 0;
        }
        if (*arg0 != 0) {
            D_0016F744(*arg0);
            *arg0 = 0;
        }
    }
}
