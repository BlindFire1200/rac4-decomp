/* Not matching yet: BYTES 8/140 (tools/try_func.py func_00477120 --diff). Not part of the build. */
#include "common.h"
extern void func_004700B0(void *, s32, s32, s32);
extern void *func_00476F50(void);
void func_00477120(void *arg0, void *arg1) {
    void *s0 = arg1;
    s32 v0, a1_val, a2, a3, color;
    if (!s0) { s0 = func_00476F50(); if (!s0) return; }
    v0 = *(s16 *)((u8 *)s0 + 2);
    if (v0 == 0) return;
    a1_val = *(s32 *)((u8 *)s0 + 8);
    *(s16 *)((u8 *)s0 + 2) = 0;
    a3 = (a1_val >> 16) & 0xFF;
    a2 = (a1_val >> 8) & 0xFF;
    color = (s32)((u32)a1_val >> 24);
    func_004700B0(arg0, a1_val & 0xFF, a2, a3);
    if ((*(s32 *)((u8 *)s0 + 0xC) & 1) != 0) *(u8 *)((u8 *)arg0 + 0x23) = (u8)color;
}
