#include "common.h"

typedef s32 (*ActionCallback)(s32);
extern ActionCallback *func_L00_005DEBD0(s32, s32, s32);

s32 func_L41_004174C8(s32 arg0) {
    s32 result = 0;
    ActionCallback *table = func_L00_005DEBD0(0x266E, 0, 0x18);
    if (table != NULL) {
        ActionCallback fn = table[3];
        if (fn != NULL) {
            result = fn(arg0);
        }
    }
    return result;
}
