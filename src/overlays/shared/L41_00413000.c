#include "common.h"

extern void func_L00_005C97D8();
extern void func_L00_006AC9F0(void *, f32);
extern void func_L00_006CBB48(void *, s32, s32, s32);
extern void func_L00_006FF698(s32, s32, s32);
extern u8 *func_L00_00700690(s32, s32);
extern void func_L41_003BBFE8(s32, void *);
extern s32 func_L41_00411448();
extern s32 func_L41_004114A8(void *);
extern s32 func_L41_004114B8(void *);
extern s32 func_L41_004114C8(void *);

// Dispatch on the state predicates of arg0 for a live target arg1; returns 1 when handled.
s32 func_L41_00413000(void *arg0, void *arg1) {
    u8 *s1;
    u8 *p;
    s32 h;

    s1 = *(u8 **)((u8 *)arg0 + 0xAC);
    if (arg1 != 0 && *(f32 *)((u8 *)arg1 + 0x2E20) > 0.0f) {
    if (*(s32 *)((u8 *)arg1 + 0x25D4) == 0x14) {
        return 0;
    }
    if (func_L41_00411448() != 0) {
        func_L00_006CBB48(arg1, *(s32 *)(s1 + 0xEC), 0, -1);
        p = func_L00_00700690(*(s32 *)(s1 + 0xEC), 0);
        func_L00_006FF698(*(s32 *)((u8 *)arg1 + 0x26E4), *(s32 *)(s1 + 0xEC), *(s16 *)(p + 0x42));
    } else if (func_L41_004114A8(arg0) != 0) {
        func_L00_006CBB48(arg1, *(s32 *)(s1 + 0xF0), 0, -1);
        p = func_L00_00700690(*(s32 *)(s1 + 0xF0), 0);
        func_L00_006FF698(*(s32 *)((u8 *)arg1 + 0x26E4), *(s32 *)(s1 + 0xF0), *(s16 *)(p + 0x42));
    } else if (func_L41_004114B8(arg0) != 0) {
        h = *(s32 *)(s1 + 0xE8);
        if (h != 0) {
            func_L41_003BBFE8(h, arg1);
            *(s32 *)(s1 + 0xE8) = 0;
        }
        func_L00_006AC9F0(arg1, *(f32 *)((u8 *)arg1 + 0x2F24));
        if (*(u8 *)((u8 *)arg1 + 0x266D) != 0) {
            func_L00_005C97D8(0x2995, 0x30C, 2);
        }
    } else {
        func_L41_004114C8(arg0);
    }
    return 1;
    }
    return 0;
}
