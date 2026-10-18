#include "common.h"

typedef s32 (*ActionCallback)(s32, s32, s32);
extern ActionCallback *func_L00_005DEBD0(s32, s32, s32);
extern void func_L01_0048DDB0();

// Mark the record active, run its +0x178 handler, fire the action callback, then finish.
void func_L01_0048DED0(void *object, u8 *record) {
    ActionCallback *cb;

    *(s32 *)(record + 0x18C) = 1;
    ((void (*)(s32))(*(void ***)(record + 0x178))[1])(*(s32 *)(record + 0x170));
    cb = func_L00_005DEBD0(0x20ED, 0x12, 8);
    if (cb != 0 && cb[1] != 0) {
        ((void (*)(void))cb[1])();
    }
    func_L01_0048DDB0(object, 1);
}
