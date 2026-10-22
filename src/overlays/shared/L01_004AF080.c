#include "common.h"

/* Sets the passed object's state to 1 / type -1, then looks up the entry with id 0x26C1 and calls the function pointer stored at offset 4 of it, if there is one. */
extern void func_00591BD8(void *o, u8 state, s32 type);
extern s32 func_00588670(s32 id, s32 a1, s32 a2);

void func_L01_004AF080(void *o) {
    void *obj;
    void (*handler)(void);

    func_00591BD8(o, 1, -1);
    obj = (void *)func_00588670(0x26C1, 0, 8);
    if (obj != NULL) {
        handler = *(void (**)(void))((u8 *)obj + 4);
        if (handler != NULL) {
            handler();
        }
    }
}
