#include "common.h"

// Stores a value in the first word and sets a flag byte when the value changes.
void func_00496B28(s32 *arg0, s32 arg1) {
    if (arg0[0] != arg1) {
        arg0[0] = arg1;
        ((u8 *)arg0)[8] = 1;
    }
}
