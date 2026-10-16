#include "common.h"

typedef int u128 __attribute__((mode(TI)));
extern void func_004437A0(void *);
extern void func_L01_004437A8(void *);
extern void func_L01_00443C98(void *);
extern void func_L01_005A1B38(void);
extern s32 D_0021DDB8;

// Per-frame update for an active object (+0x20 nonzero): run the three update
// calls, then copy the +0x10, +0xC0-+0xE0 and +0xF0 vectors from the object at
// +0x2EF0 of the linked +0xE0 owner. The volatile pointer reads are needed for the match.
void func_L01_004436F8(void *self) {
    u8 *linked = *(u8 **)((u8 *)self + 0xAC);
    void *source = *(void **)(linked + 0xE0);
    void *object;
    if (*(u8 *)((u8 *)self + 0x20) == 0) return;
    func_L01_005A1B38();
    if (((D_0021DDB8 & 0xF) == (((s32)self >> 8) & 0xF))) func_004437A0(self);
    func_L01_004437A8(self);
    func_L01_00443C98(self);
    *(u128 *)((u8 *)self + 0x10) = *(u128 *)((u8 *)*(void * volatile *)((u8 *)source + 0x2EF0) + 0x10);
    *(u128 *)((u8 *)self + 0xF0) = *(u128 *)((u8 *)*(void * volatile *)((u8 *)source + 0x2EF0) + 0xF0);
    object = *(void * volatile *)((u8 *)source + 0x2EF0);
    *(u128 *)((u8 *)self + 0xC0) = *(u128 *)((u8 *)object + 0xC0);
    *(u128 *)((u8 *)self + 0xD0) = *(u128 *)((u8 *)object + 0xD0);
    *(u128 *)((u8 *)self + 0xE0) = *(u128 *)((u8 *)object + 0xE0);
}
