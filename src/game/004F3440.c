#include "common.h"

#include "common.h"

extern s64 func_00464778(void);

// Stores the 64-bit result of func_00464778 through the second pointer argument.
void func_004F3440(s32 arg0, s64 *arg1) {
    *arg1 = func_00464778();
}
