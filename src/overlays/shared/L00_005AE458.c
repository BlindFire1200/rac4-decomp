#include "common.h"

extern void func_L00_005BCAE0(void *, s32, s32);
extern u8 D_004C4B80[];
s32 D_0021E4CC = 0;
s8 D_0021E4C8 = 0;
s32 D_0021E4D0 = 0;

// Reset the global state and clear the 0x50-byte buffer.
void func_L00_005AE458(void) {
    D_0021E4CC = 0x404040;
    D_0021E4C8 = 0;
    D_0021E4D0 = 0;
    func_L00_005BCAE0(D_004C4B80, 0, 0x50);
}
