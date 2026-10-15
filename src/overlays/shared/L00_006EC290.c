#include "common.h"

extern void func_L00_006EC2C0(void);
s32 D_002202A8 = 0;

// Push the entry on the global linked list through its +0x58 link.
void func_L00_006EC290(void *entry) {
    func_L00_006EC2C0();
    *(void **)((u8 *)entry + 0x58) = (void *)D_002202A8;
    D_002202A8 = (s32)entry;
}
