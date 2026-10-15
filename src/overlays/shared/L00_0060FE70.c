#include "common.h"

extern s32 func_L00_005BC9B8(void *);
extern void func_L00_00607960(void *);

void func_L00_0060FE70(u8 *arg0) {
    if (*(s16 *)(arg0 + 0xA) != -1 && func_L00_005BC9B8(arg0 + 0xA) != 0) {
        func_L00_00607960(arg0);
    }
}
