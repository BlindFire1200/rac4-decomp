#include "common.h"

typedef unsigned int u128 __attribute__((mode(TI)));
extern void func_L00_005B0038(void *, void *, s32);
extern void func_L01_0046B1F0(void *, s32);
extern void func_L01_0046B538(void *, s32);
extern s32 func_L01_0046C198(s32);
extern s32 func_L01_00598418(u128 value);
extern void func_L01_0046B6C8();
extern s32 D_0021E824;
extern s32 D_00222A90;
extern s32 D_00222A98;

// Update an object: when active, run its two steps and queue a callback on one of two lists.
void func_L01_0046B140(unsigned char *obj) {
    s32 s1 = *(s32 *)(obj + 0xAC);
    if (D_0021E824 == 1 || func_L01_00598418(*(u128 *)(obj + 0x10)) != 0) {
        if (*(u8 *)(obj + 0x20) == 0) {
            func_L01_0046B1F0(obj, s1);
        }
        func_L01_0046B538(obj, s1);
        if (func_L01_0046C198(s1) != 0) {
            func_L00_005B0038(&D_00222A90, func_L01_0046B6C8, (s32)obj);
            return;
        }
        func_L00_005B0038(&D_00222A98, func_L01_0046B6C8, (s32)obj);
    }
}
