#include "common.h"

extern void func_0015DB88(void *arg0, s32 arg1);
extern u8 D_003D3508[];

void func_00510A38(void *arg0, s32 arg1) {
    *(void **)((u32)arg0 + 0x8) = D_003D3508;
    if ((arg1 & 1) != 0) {
        func_0015DB88(arg0, arg1 & 1);
    }
}
