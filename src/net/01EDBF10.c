#include "common.h"

// func_01EDBF10: calls the registered callback in D_001BCA80 with the 4th argument and D_001BC888, then returns 104.
extern void (*D_001BCA80[])(s32, s32);
extern s32 D_001BC888[];

s32 func_01EDBF10(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void (*fn)(s32, s32) = D_001BCA80[0];

    if (fn != 0) {
        fn(arg3, D_001BC888[0]);
    }
    return 104;
}
