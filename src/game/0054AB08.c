#include "common.h"

extern void *func_0054A980(s32 arg0);
extern s32 func_0054AAD8(s32 arg0);
// Look up the record for arg0 and return its word at +0x10 plus arg1.
s32 func_0054AB08(s32 arg0, s32 arg1) {
    return *(s32 *)((u8 *)func_0054A980(func_0054AAD8(arg0)) + 0x10) + arg1;
}
