#include "common.h"

extern void func_0055D3B8(void *arg0, void *arg1, s32 arg2);
extern u8 D_00230280[];

typedef int u128x __attribute__((mode(TI)));

// Copies a 128-bit value out of a table entry into the object, then calls func_0055D3B8.
void func_L01_00524F58(void *arg0) {
    u8 *entry = D_00230280 + *(s32 *)((u8 *)arg0 + 0x94) * 0x470;
    *(u128x *)((u8 *)arg0 + 0x30) = *(u128x *)(entry + 0x230);
    func_0055D3B8(arg0, entry + 0x200, 0x30);
}
