#include "common.h"

// Stores four float fields of the object at arg0 (offsets 0x1F0, 0x1F4, 0x1F8, 0x1FC).
void func_0050CE58(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    *(f32 *)((u8 *)arg0 + 0x1F0) = fparg0;
    *(f32 *)((u8 *)arg0 + 0x1F8) = fparg1;
    *(f32 *)((u8 *)arg0 + 0x1F4) = fparg2;
    *(f32 *)((u8 *)arg0 + 0x1FC) = fparg3;
}
