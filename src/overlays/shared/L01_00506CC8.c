#include "common.h"

extern void func_005D76A8(s32, s32, s32);
extern void func_L00_005DD4A0(void *);
extern s32 func_L01_0056CDB0(void *);
extern void func_L01_0056E7F8(void *);
extern void func_L01_00588B08(void *);
extern void func_L01_005A8928(void *);

// Release the object at linked +0x520, run the three update calls and
// func_005D76A8, then run func_L01_00588B08 when the +0x458 flag is clear, or
// func_L00_005DD4A0 when flag is zero.
void func_L01_00506CC8(void *object, s32 flag) {
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);
    void *callback = *(void **)(linked + 0x520);
    if (callback != 0) {
        func_L00_005DD4A0(callback);
        *(u32 *)(linked + 0x520) = 0;
    }
    func_L01_0056CDB0(object);
    func_L01_0056E7F8(object);
    func_L01_005A8928(object);
    func_005D76A8(0, 0x400, 0);
    if (*(u8 *)(linked + 0x458) == 0) {
        func_L01_00588B08(object);
    } else if (flag == 0) {
        func_L00_005DD4A0(object);
    }
}
