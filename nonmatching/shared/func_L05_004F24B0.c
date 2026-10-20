/* Not matching yet: BYTES 9/104 (tools/try_func.py func_L05_004F24B0 --diff). Not part of the build. */
#include "common.h"
extern void func_004F2518(void *);
extern s32 func_L05_004F32E0(void *);
extern void func_L00_005FC990(void *);
extern void func_L00_005B0038(void *, void *, void *);
extern void func_L05_004F3320(void *);
extern u8 D_0022289C[];
void func_L05_004F24B0(void *arg0) {
    u8 *state = *(u8 **)(arg0 + 0xAC);
    void *cb;
    func_004F2518(arg0);
    if (func_L05_004F32E0(arg0) == 0) {
        *(u8 *)(state + 0x85) = 2;
        func_L00_005FC990(arg0);
        cb = func_L05_004F3320;
        func_L00_005B0038(D_0022289C, cb, arg0);
    }
}
