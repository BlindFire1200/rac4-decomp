/* Not matching yet: BYTES 2/292 (tools/try_func.py func_L01_00468A38 --diff). Not part of the build. */
#include "common.h"
typedef int u128 __attribute__((mode(TI)));

extern s32 func_00469678(void *);
extern s32 func_004697A0(void *);
extern s32 func_005AF4B8(void *);
extern void func_005A85F8(void *, s32, s32);
extern void func_L00_005EB750(void *, s32);
extern void func_L00_005F15B8(void *);
extern void func_L01_00468D48(void *);
extern void func_L01_00468DA8(void *);
extern void func_L01_004696B0(void *);
extern void func_L01_00591BD8(void *, s32, s32);
extern void func_L01_00593D50(void *, f32, f32, f32);
extern void func_L01_005A1B38(void *);
extern void func_L01_005AE158(void *);

void func_L01_00468A38(void *object) {
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);
    if (func_004697A0(object) != 0) {
        if (linked[0x458] == 0 || linked[0x45A] == 0) return;
        if (func_00469678(object) == 0) return;
        func_L01_00468D48(object);
        func_L01_004696B0(object);
        return;
    }
    func_L01_005AE158(object);
    func_L00_005EB750(object, 0);
    if ((u8)(*(u8 *)((u8 *)object + 0x69) - 6) >= 2) {
        if (func_005AF4B8(object) != 0) func_L01_00591BD8(object, 0x19, 6);
    }
    func_005A85F8(object, 5, -1);
    func_L01_00468DA8(object);
    func_L01_005A1B38(object);
    func_L00_005F15B8(object);
    func_L01_00593D50(object, 32.0f, -1.0f, 0.0f);
    linked[0x482] = 0;
    if (linked[0x503] == 0 && *(s32 *)(linked + 0x140) != 0) {
        u128 transform = *(u128 *)((u8 *)object + 0x10);
        linked[0x503] = 1;
        *(u128 *)(linked + 0x490) = transform;
    }
}
