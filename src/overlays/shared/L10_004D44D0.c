#include "common.h"

extern void func_L00_005DD4A0(void *);
extern s32 func_L01_0056CDB0(u8 *object);
extern void func_L01_0056E7F8(void *);
extern void func_L01_00588B08(void *);
extern void func_L01_00591BD8(void *, s32, s32);
extern void func_L01_005A8928(void *);

/* Initialize the linked state and choose the next handler. */
void func_L10_004D44D0(void *object, s32 skipCleanup) {
    u8 *state = *(u8 **)((u8 *)object + 0xAC);
    func_L01_0056CDB0(object);
    func_L01_0056E7F8(object);
    func_L01_005A8928(object);
    *(s32 *)(state + 0x444) = 0;
    func_L01_00591BD8(object, 1, 0);
    if (state[0x3F8] == 0) {
        func_L01_00588B08(object);
    } else if (skipCleanup == 0) {
        func_L00_005DD4A0(object);
    }
}
