#include "common.h"

extern void func_005D76A8(s32, s32, s32);
extern void func_L00_005DD4A0(s32);
extern s32 func_L01_0056CDB0(void *);
extern void func_L01_0056E7F8(void *);
extern void func_L01_00588B08(void *);
extern void func_L01_00591BD8(void *, s32, s32);
extern void func_L01_005A8928(void *);

// Run the three update calls, release the linked +0x604 object, set +0x6A8 and
// move to state 0x1A (5), then run func_L01_00588B08 when the +0x5D0 flag is
// clear.
void func_L01_0050A110(void *object) {
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);
    s32 value;
    func_L01_0056CDB0(object);
    func_L01_0056E7F8(object);
    func_L01_005A8928(object);
    value = *(s32 *)(linked + 0x604);
    if (value != 0) {
        func_L00_005DD4A0(value);
        *(s32 *)(linked + 0x604) = 0;
    }
    func_005D76A8(0, 0x400, 0);
    *(s32 *)(linked + 0x6A8) = 1;
    func_L01_00591BD8(object, 0x1A, 5);
    if (*(u8 *)(linked + 0x5D0) == 0) func_L01_00588B08(object);
}
