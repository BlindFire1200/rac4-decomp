#include "common.h"

extern s32 *D_0021DDA4;
extern u8 D_00346BE0[];

void func_L00_006EAB20(void) {
    s32 i = 0;
    if (*D_0021DDA4 > 0) {
        u8 *entry = D_00346BE0;
        do {
            u8 *callback_object = *(u8 **)(entry + 0x14);
            ((void (*)(void *))( *(s32 *)(callback_object + 0xC) ))(entry);
            i++;
            entry += 0x31F0;
        } while (i < *D_0021DDA4);
    }
}
