#include "common.h"

typedef s32 (*Callback)(s32, s32, s32, s32, s32);
extern Callback *func_L00_005DEBD0(s32, s32, s32);

s32 func_L01_00550700(s32 unused, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    Callback *table = func_L00_005DEBD0(0x9BB, 0, 4);
    if (table == 0) {
        return 0;
    }
    return (*table)(arg1, arg2, arg3, arg4, arg5);
}
