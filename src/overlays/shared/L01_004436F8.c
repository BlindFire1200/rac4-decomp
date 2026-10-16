#include "common.h"
typedef int u128 __attribute__((mode(TI)));
extern void func_004437A0(void *);
extern void func_L01_004437A8(void *);
extern void func_L01_00443C98(void *);
extern void func_L01_005A1B38(void);
extern s32 D_0021DDB8;

void func_L01_004436F8(void *arg0) {
    u8 *state = *(u8 **)((u8 *)arg0 + 0xAC);
    void *source = *(void **)(state + 0xE0);
    void *object;
    if (*(u8 *)((u8 *)arg0 + 0x20) == 0) return;
    func_L01_005A1B38();
    if (((D_0021DDB8 & 0xF) == (((s32)arg0 >> 8) & 0xF))) func_004437A0(arg0);
    func_L01_004437A8(arg0);
    func_L01_00443C98(arg0);
    *(u128 *)((u8 *)arg0 + 0x10) = *(u128 *)((u8 *)*(void * volatile *)((u8 *)source + 0x2EF0) + 0x10);
    *(u128 *)((u8 *)arg0 + 0xF0) = *(u128 *)((u8 *)*(void * volatile *)((u8 *)source + 0x2EF0) + 0xF0);
    object = *(void * volatile *)((u8 *)source + 0x2EF0);
    *(u128 *)((u8 *)arg0 + 0xC0) = *(u128 *)((u8 *)object + 0xC0);
    *(u128 *)((u8 *)arg0 + 0xD0) = *(u128 *)((u8 *)object + 0xD0);
    *(u128 *)((u8 *)arg0 + 0xE0) = *(u128 *)((u8 *)object + 0xE0);
}
