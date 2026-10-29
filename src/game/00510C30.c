#include "common.h"

// Return arg0 if its flag byte at 0x266D is set, otherwise NULL.
void *func_00510C30(s32 arg0) {
    s32 var_v0;

    var_v0 = arg0;
    if (var_v0 != 0) {
        if (*(u8 *)(var_v0 + 0x266D) != 0) {
            return (void *)var_v0;
        }
    }
    return 0;
}
