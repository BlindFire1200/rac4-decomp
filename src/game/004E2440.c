#include "common.h"

// Store a 32-bit value through a pointer argument when the sign-extended low word of the second argument is non-zero.
void func_004E2440(s32 arg0, s64 arg1) {
    s32 *temp_a1;

    temp_a1 = (s32 *) (s32) arg1;
    if (temp_a1 != 0) {
        *temp_a1 = arg0;
    }
}
