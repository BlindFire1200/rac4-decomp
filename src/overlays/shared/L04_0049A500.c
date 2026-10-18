#include "common.h"
void func_L01_0069E6B0(void *);
void func_L04_0049A500(u8 *a0) {
    u8 *object = *(u8 **)(a0 + 0xAC);
    u8 *entry = *(u8 **)(object + 0x2D0);
    if (entry[0x2E0] == 0 && *(void **)(entry + 0x2B8) != 0) {
        object[0x726] = 0x17;
        func_L01_0069E6B0(*(void **)(entry + 0x2B8));
    }
}
