#include "common.h"
extern s32 func_L00_0066CC08(void *, s32);
extern s32 func_L00_0066D220(s32, s32, void *);
void func_L05_003E4478(void *arg0) {
    if (*(u8 *)(arg0 + 0x20) == 0) {
        *(u8 *)(arg0 + 0x20) = 1;
        *(s16 *)(arg0 + 0x6E) = -1;
    }
    if (*(s16 *)(arg0 + 0x6E) != -1) {
        if (func_L00_0066CC08(arg0, *(s16 *)(arg0 + 0x6E)) == 0) *(s16 *)(arg0 + 0x6E) = -1;
        if (*(s16 *)(arg0 + 0x6E) != -1) return;
    }
    *(s16 *)(arg0 + 0x6E) = func_L00_0066D220(0, 4, arg0);
}
