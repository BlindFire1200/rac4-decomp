/* cflags: -mno-split-addresses */
#include "common.h"

s32 func_004DF0F8(void *);
s32 func_004DF2B8(void *);

extern void *D_221CF0_[];

void func_004DF098(s32 arg0) {
    void *ptr;
    void *temp_a0;
    u16 flag;

    ptr = D_221CF0_[0];
    if (arg0 < *(s16 *)((u8 *)ptr + 0x6)) {
        temp_a0 = *(void **)((u8 *)ptr + (arg0 << 2) + 0x20);
        flag = *(u16 *)((u8 *)temp_a0 + 0x2);
        if (flag & 1) {
            func_004DF2B8(temp_a0);
        } else {
            func_004DF0F8(temp_a0);
        }
    }
}
