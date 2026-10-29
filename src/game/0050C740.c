#include "common.h"

extern void func_0050CAC0(void *, s32, s32);
// Passes its two arguments and the word at offset 0x1E8 of the first on to func_0050CAC0.
void func_0050C740(void *arg0, s32 arg1) {
    func_0050CAC0(arg0, arg1, *(s32 *)((u8 *)arg0 + 0x1E8));
}
