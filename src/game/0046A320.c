#include "common.h"

extern s32 D_0021F190;
void *D_0021F194 = 0;

/* If the object at D_0021F194 has a callback at +0x10, call it with D_0021F190. */
void func_0046A320(void) {
    void *obj = D_0021F194;
    if (obj != 0) {
        void (*fn)(s32) = *(void (**)(s32))((u8 *)obj + 0x10);
        if (fn != 0) {
            fn(D_0021F190);
        }
    }
}
