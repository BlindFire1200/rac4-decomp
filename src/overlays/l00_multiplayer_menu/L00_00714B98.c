/* cflags: -mno-split-addresses */
#include "common.h"

s32 func_0069C438(s32, void *, void *);
s32 func_L00_0069C340(s32, void *, void *);

void func_L00_00714B98(void *arg0) {
    s32 temp_a0;

    temp_a0 = *(s32 *)((u32)arg0 + 0x5C);
    if (temp_a0 != 0) {
        func_L00_0069C340(temp_a0, (void *)((u32)arg0 + 0x60), (void *)((u32)arg0 + 0x64));
        func_0069C438(*(s32 *)((u32)arg0 + 0x5C), (void *)((u32)arg0 + 0x68), (void *)((u32)arg0 + 0x6C));
    }
}
