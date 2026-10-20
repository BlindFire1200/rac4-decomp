#include "common.h"

typedef void (*ActionCallback)(void *);
extern ActionCallback *func_L00_005DEBD0(s32, s32, s32);

// Fire action 0x13 for the object's class: slot 1 when arg1 is 1, slot 0 otherwise.
void func_L01_0064EA50(unsigned char *object, s32 arg1) {
    ActionCallback *cb = func_L00_005DEBD0(*(short *)(object + 0xBC), 0x13, 0xC);
    if (cb != 0) {
        if (arg1 == 1) {
            cb[1](object);
        } else {
            cb[0](object);
        }
    }
}
