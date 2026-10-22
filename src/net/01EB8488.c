#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
} Type1;

s32 func_01EBECA0(s32, Type1);                       /* extern */

/* Forwards the object's first field and an 8-byte value to func_01EBECA0; 2 if null. */
s32 func_01EB8488(s32 *arg0, Type1 arg1) {
    s32 var_v0;

    var_v0 = 2;
    if (arg0 != 0) {
        var_v0 = func_01EBECA0(*arg0, arg1);
    }
    return var_v0;
}
