#include "common.h"

extern s32 func_0054A580(s32, s32, s32);
extern s32 func_0054A608(s32, s32, s32);
extern s32 func_0054A688(s32, s32, s32);

// Loop 0x13 times calling three functions
s32 func_0054A708(s32 arg0, s32 arg1) {
    s32 counter;

    for (counter = 1; counter < 0x14; counter++) {
        func_0054A580(arg0, counter, arg1);
        func_0054A608(arg0, counter, arg1);
        func_0054A688(arg0, counter, arg1);
    }

    return 1;
}
