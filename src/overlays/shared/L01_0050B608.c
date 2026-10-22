#include "common.h"

extern void func_L01_0050AF48(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern s32 func_L01_0050B658(void *arg0, s32 arg1, s32 arg2);

// If the pending-request lookup comes back empty, ask the parent to release this item.
void func_L01_0050B608(void *arg0, s32 arg1) {
    if (func_L01_0050B658(arg0, arg1, 0) == 0) {
        func_L01_0050AF48(arg0, arg1, -1, 0);
    }
}
