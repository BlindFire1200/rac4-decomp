#include "common.h"

extern void *func_00488C98(s32);
extern void func_00540308(void);

s32 D_00220DDC = 0;

// If the handle is the special saved object, run func_00540308; otherwise look up
// the table for the object at handle+0x18 and call its function pointer at +0x14
// with the handle's object field and the second argument.
void func_005402A8(void *arg0, s32 arg1) {
    void *obj;

    if (arg0 == (void *)D_00220DDC) {
        func_00540308();
    } else {
        obj = func_00488C98(*(s32 *)((u8 *)arg0 + 0x18));
        (*(void (**)(s32, s32))((u8 *)obj + 0x14))(*(s32 *)((u8 *)arg0 + 0x18), arg1);
    }
}
