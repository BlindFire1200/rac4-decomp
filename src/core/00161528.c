#include "common.h"

extern void func_00152968(s32);
s32 D_0021E020 = 0;
s32 D_0021E024 = 0;

/* Issues the queued value once when the pending flag is 1 and the value is not -1, then clears the flag. */
void func_00161528(void) {
    s32 temp_a0;

    if (D_0021E024 == 1) {
        temp_a0 = D_0021E020;
        if (temp_a0 != -1) {
            func_00152968(temp_a0);
            D_0021E024 = 0;
        }
    }
}
