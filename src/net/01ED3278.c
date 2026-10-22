#include "common.h"

extern s32 func_01EA95C0(s32 *);

/* Runs the object's optional cleanup callback, then releases the record. */
void func_01ED3278(void *arg0) {
    void (*fp)(s32);
    if (arg0 != 0) {
        fp = *(void (**)(s32))((u8 *)arg0 + 0x24);
        if (fp != 0) {
            fp(*(s32 *)((u8 *)arg0 + 0x38));
        }
        func_01EA95C0((s32 *)&arg0);
    }
}
