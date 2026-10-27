#include "common.h"

extern void func_01F04E28(s32);
extern void *D_0016E430;

/* Passes the word at offset 0x30D0 of the global object to func_01F04E28. */
void func_01EEFA5C(void) {
    func_01F04E28(*(s32 *)((u8 *)D_0016E430 + 0x30D0));
}
