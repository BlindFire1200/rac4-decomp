#include "common.h"
s32 func_004534D0(s32 *);
s32 func_00497768(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 old = *arg1;
    s32 current;
    s32 result;
    if (*arg0 != 0) {
        func_004534D0(arg0);
        if (*arg1 < arg2) *arg1 = *arg1 + 1;
        if (*arg0 == 0) return 4;
    } else {
        func_004534D0(arg1);
    }
    current = *arg1;
    if (old == current) return 0;
    if (old == 0) return 1;
    if (current == 0) return 2;
    return 3;
}
