#include "common.h"

typedef void (*ActionCallback)();
extern ActionCallback *func_L00_005DEBD0(s32, s32, s32);
extern void func_L01_00498860(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);
extern unsigned char *D_00222D34;

// Run func_L01_00498860 on every list item of type 0x2682, then fire actions 0x26C1 and 0x26C2.
void func_L01_00498EB8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    unsigned char *item = D_00222D34;
    ActionCallback *cb;
    if (item != 0) {
        do {
            if (*(short *)(item + 0xBC) == 0x2682) {
                func_L01_00498860(item, arg0, arg1, arg2, arg3, arg4, arg5);
            }
            item = *(unsigned char **)(item + 0x28);
        } while (item != 0);
    }
    cb = func_L00_005DEBD0(0x26C1, 0, 8);
    if (cb != 0 && *cb != 0) {
        (*cb)();
    }
    cb = func_L00_005DEBD0(0x26C2, 0, 8);
    if (cb != 0 && *cb != 0) {
        (*cb)();
    }
}
