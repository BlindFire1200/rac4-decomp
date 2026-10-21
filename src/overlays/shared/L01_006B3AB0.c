#include "common.h"

s32 func_L01_006B3B20(void *);
extern s32 D_003B14E0_[];
#define D_003B14E0 (D_003B14E0_[0])

void *func_L01_006B3AB0(void *arg0) {
    *(s32 *)((u32)arg0 + 0x14) = (s32)&D_003B14E0;
    func_L01_006B3B20((void *)((u32)arg0 + 0x20));
    return arg0;
}
