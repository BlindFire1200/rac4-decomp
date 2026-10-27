#include "common.h"

extern s32 D_3367B8[];

// Return the word at D_3367B8 indexed by arg0.
s32 func_00510C18(s32 arg0) {
    return *(s32 *)((arg0 * 4) + (char *)D_3367B8);
}
