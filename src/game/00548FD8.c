#include "common.h"

extern void func_00548F48(s32 arg0, s32 arg1);
extern s32 func_0054A708(s32 arg0, s32 arg1);

// Sets up the object with func_0054A708 then calls func_00548F48 19 times with a counter 1..19
void func_00548FD8(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;

    func_0054A708(arg0, arg2);
    i = 1;
    do {
        func_00548F48(arg0, i);
        i++;
    } while (i < 0x14);
}
