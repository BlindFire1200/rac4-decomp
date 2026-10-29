#include "common.h"

extern void *D_229F30[];

/* Copies 128-bit values from offset 0xC0/0xD0 to 0x50/0x60 if byte at offset 2 is nonzero. */
void func_0043B698(s32 arg0) {
    typedef int u128 __attribute__((mode(TI)));
    void *p = (void *)((u32)arg0 * 0x470 + (u32)D_229F30);
    u8 *base = (u8 *)p;

    if (*(u8 *)(base + 2) != 0) {
        *(u128 *)(base + 0x50) = *(u128 *)(base + 0xC0);
        *(u128 *)(base + 0x60) = *(u128 *)(base + 0xD0);
    }
}
