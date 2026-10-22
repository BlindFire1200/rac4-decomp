#include "common.h"

extern s32 func_0011A518(void *, s32, s32);

// Sends a 0x10-byte packet on the given handle; returns 0x17 (not connected) if there is no handle.
s32 func_01E9E898(void *arg0) {
    s32 var_v0;

    var_v0 = 0x17;
    if (arg0 != NULL) {
        func_0011A518(arg0, 0, 0x10);
        var_v0 = 0;
    }
    return var_v0;
}
