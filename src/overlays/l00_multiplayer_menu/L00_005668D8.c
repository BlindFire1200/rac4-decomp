#include "common.h"

extern s32 D_00488408[];
extern void func_0011EF60(void);

/* Calls the multiplayer-menu handler stored in D_00488408, falling back to func_0011EF60 when it is NULL. */
void func_L00_005668D8(void) {
    void (*handler)(void) = (void (*)(void))D_00488408[0];

    if (handler != 0) {
        handler();
        return;
    }
    func_0011EF60();
}
