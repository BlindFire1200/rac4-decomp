#include "common.h"

extern s32 func_00510AC8();

/* Returns func_00510AC8() when arg1 is nonzero and the word at 0xC is not below arg1, else 0. */
s32 func_00510B30(void *arg0, u32 arg1) {
    if (*(u32 *)((char *)arg0 + 0xC) < arg1 || arg1 == 0) {
        return 0;
    }
    return func_00510AC8();
}
