/* cflags: -mno-split-addresses */
#include "common.h"
typedef int u128 __attribute__((mode(TI)));
extern u8 D_00222B28[];
extern s32 func_L00_005BC248(u8 *, s32, f32, f32);
extern void func_L01_004DA300(void *, f32);
void func_L01_004DA958(u8 *arg0) {
    u8 *entry = *(u8 **)(arg0 + 0xAC);
    if (entry != 0 && func_L00_005BC248(D_00222B28, (s32)(entry + 0x20), (f32)*(s16 *)(arg0 + 0x32), (f32)*(f32 *)(entry + 0xC) * 2.0f) != -1) {
        func_L01_004DA300(arg0, *(f32 *)(entry + 8));
    }
}
