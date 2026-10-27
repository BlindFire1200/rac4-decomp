#include "common.h"

// Returns the word at +0x10 of the object that the pointer at arg0 refers to, or 0 if either pointer is null.
s32 func_01ED90B8(void **arg0) {
    s32 r;
    void *p;

    r = 0;
    if (arg0 != NULL) {
        p = *arg0;
        if (p != NULL) {
            r = *(s32 *)((u8 *)p + 0x10);
        }
    }
    return r;
}
