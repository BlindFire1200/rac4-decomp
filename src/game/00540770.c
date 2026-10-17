#include "common.h"
extern s32 D_00172170[];
extern s32 func_00540650(void *, s32, s32);
extern void func_00511520(void *);
void func_00540770(void *arg0, s32 arg1, s32 arg2) {
    u8 *object = arg0;
    s32 value = arg1 & 0xFF;
    if (func_00540650(arg0, value, arg2 & 0xFF) != 0) {
        *(u8 *)(object + 0x50) = value;
        if (*(s32 *)(object + 0x34) == D_00172170[0]) {
            func_00511520(arg0);
        }
        *(s32 *)(object + 0x34) = -1;
        *(s32 *)(object + 4) = -1;
    }
}
