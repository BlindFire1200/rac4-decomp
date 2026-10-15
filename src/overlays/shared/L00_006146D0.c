#include "common.h"

extern s32 func_L00_005BC9B8(void *);
extern void func_L00_005E7AC0(void *, s32);
extern void func_L00_00607960(void *);
s32 D_0021ED70 = 0;

// Update the entry's +4 data, then release it when the check on +0xA passes.
void func_L00_006146D0(u8 *entry) {
    func_L00_005E7AC0(entry + 4, D_0021ED70);
    if (func_L00_005BC9B8(entry + 0xA) != 0) {
        func_L00_00607960(entry);
    }
}
