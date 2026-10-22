#include "common.h"

typedef void (*net_callback_t)(s32, s32);

extern net_callback_t D_001BCC08[];
extern s32 D_001BCA10[];

/* Loads the registered network callback and, if set, calls it with $a3 and the global D_001BCA10, then returns the event id 28. */
s32 func_01EDDC88(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    net_callback_t handler = D_001BCC08[0];
    if (handler != 0) {
        handler(arg3, D_001BCA10[0]);
    }
    return 28;
}
