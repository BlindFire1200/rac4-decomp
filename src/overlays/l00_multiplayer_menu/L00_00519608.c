#include "common.h"

extern void func_L00_004F84C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void *func_L00_00517808(void);

/* Calls the multiplayer-menu action callback stored at +0x20 of the manager object, or shows a fallback message box (0xA, 0x68, 0xE) when it is missing. */
s32 func_L00_00519608(void) {
    s32 (*f)(void) = *(s32 (**)(void))((char *)func_L00_00517808() + 0x20);

    if (f != 0) {
        return f();
    }
    func_L00_004F84C8(0xA, 0x68, 0xE, 0, 0);
    return 0;
}
