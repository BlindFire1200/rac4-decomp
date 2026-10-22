#include "common.h"

/* Look up the global object; if it exists, hand arg0's 16-byte payload plus the
   object's own float to the setter helper and return its result, else return 0. */
typedef int u128 __attribute__((mode(TI)));

extern void *func_00595D00(void);
extern s32 func_005A9968(void *arg0, u128 arg1, s32 arg2, f32 arg3, f32 arg4);

s32 func_L01_005AB590(void *arg0) {
    void *temp_v0;
    s32 result;

    temp_v0 = func_00595D00();
    if (temp_v0 != 0) {
        result = func_005A9968(arg0, *(u128 *)((char *)arg0 + 0x10), 1, 0.0f,
                               *(f32 *)((char *)temp_v0 + 0xD4));
    } else {
        result = 0;
    }
    return result;
}
