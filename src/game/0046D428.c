#include "common.h"
extern void *func_00488D40(s32 arg0);
s32 func_0046D428(s32 arg0, s32 arg1) {
    s32 (*func_ptr)(s32, s32, void *);
    void *ptr = func_00488D40(arg0);
    if (ptr != 0) {
        func_ptr = *(s32 (**)(s32, s32, void *))((u8 *)ptr + 0x10);
        if (func_ptr != 0) {
            s32 local;
            return func_ptr(arg0, arg1, &local);
        }
    }
    return 0;
}
