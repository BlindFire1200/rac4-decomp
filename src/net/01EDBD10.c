#include "common.h"

extern s32 D_001BCA4C[];
extern s32 D_001BC854[];

/* Calls the network callback registered in D_001BCA4C (if any) with the 4th argument
   and the value from D_001BC854, then returns 28. */
s32 func_01EDBD10(s32 a0, s32 a1, s32 a2, s32 a3) {
    void (*fp)(s32, s32) = (void (*)(s32, s32))D_001BCA4C[0];
    if (fp) {
        fp(a3, D_001BC854[0]);
    }
    return 28;
}
