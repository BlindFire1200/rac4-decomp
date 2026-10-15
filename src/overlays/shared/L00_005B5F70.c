#include "common.h"

typedef s32 (*Type1)(s32, s32, s32);
extern Type1 *func_L00_005DEBD0(s32, s32, s32);

// Dispatch to the function registered for this action.
s32 func_L00_005B5F70(s32 unused0, s32 arg1, s32 arg2, s32 arg3) {
    Type1 *callback = func_L00_005DEBD0(0x276E, 0, 4);
    if (callback == NULL) {
        return 0;
    }
    return (*callback)(arg1, arg2, arg3);
}
