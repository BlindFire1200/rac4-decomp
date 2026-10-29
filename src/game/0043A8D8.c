#include "common.h"

extern s32 D_229C80[];

void func_0043A8D8(s32 arg0) {
    s32 *base = (s32 *)((u32)arg0 * 0x470 + (u32)D_229C80);
    *(u16 *)((u32)(*(void **)((u32)base + 0x50)) + 0x7E) = 1;
    *(u8 *)((u32)(*(void **)((u32)base + 0x50)) + 0x7D) = 0;
}
