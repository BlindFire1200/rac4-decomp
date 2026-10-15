#include "common.h"

extern void func_L00_006ACA80(void *, void *);

void func_L00_006ACE58(u8 *arg0) {
    s32 i;
    *(s16 *)(arg0 + 0x2E56) = 0;
    for (i = 0; i < 0x12; i++) {
        func_L00_006ACA80(arg0, arg0 + 0x820 + i * 0xB0);
    }
}
