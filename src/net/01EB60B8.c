#include "common.h"

extern s32 func_0011A518(void *, s32, s32);
extern s32 func_01EA95C0(s32 *);

/* Frees a net object: clears the sub-entry at offset 0x10, releases the node, returns 0 (done) or 2 (null pointer). */
s32 func_01EB60B8(s32 *arg0) {
    s32 var_v0;
    s32 *ptr;

    var_v0 = 2;
    ptr = arg0 + 4;
    if (arg0 != 0) {
        func_01EA95C0(ptr);
        func_0011A518(arg0, 0, 0x18);
        var_v0 = 0;
    }
    return var_v0;
}
