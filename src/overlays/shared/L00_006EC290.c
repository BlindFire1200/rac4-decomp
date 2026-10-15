#include "common.h"

extern void func_L00_006EC2C0(void);
s32 D_002202A8 = 0;

void func_L00_006EC290(void *arg0) {
    func_L00_006EC2C0();
    *(void **)((u8 *)arg0 + 0x58) = (void *)D_002202A8;
    D_002202A8 = (s32)arg0;
}
