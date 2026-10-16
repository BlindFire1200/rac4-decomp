#include "common.h"

typedef int u128 __attribute__((mode(TI)));

extern void func_L00_005DE048(void *, s32, void *);
extern void func_L01_00469420(void *, u128, u128, f32);

// Fetch two vectors (kinds 2 and 3) for the object and pass them, with the byte
// at +0x28A of the linked object converted to float, to func_L01_00469420.
void func_L01_004693B0(void *object) {
    u8 *linked = *(u8 **)((u8 *)object + 0xAC);
    f32 value = (f32)linked[0x28A];
    u128 first;
    u128 second;
    func_L00_005DE048(object, 2, &first);
    func_L00_005DE048(object, 3, &second);
    func_L01_00469420(object, first, second, value);
}
