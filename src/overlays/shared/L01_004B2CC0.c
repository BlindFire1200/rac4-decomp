#include "common.h"

extern void func_L00_005DD4A0(void *);
extern void func_L01_0056E7F8(void *arg0);
extern void func_L01_00588B08(void *);
extern void func_L01_00591BD8(u8 *object, s32 new_state, s32 param);
extern void func_L01_005A8928(u8 *obj);

// Run the common updates and state change, then the follow-up for the linked object.
void func_L01_004B2CC0(void *object, s32 flag) {
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);

    func_L01_0056E7F8(object);
    func_L01_005A8928(object);
    func_L01_00591BD8(object, 0x1A, 9);
    if (linked[0x458] == 0) func_L01_00588B08(object);
    else if (flag == 0) func_L00_005DD4A0(object);
}
