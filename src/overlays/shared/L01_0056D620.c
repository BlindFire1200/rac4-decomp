#include "common.h"

typedef struct {
    s32 items[16];
    s32 count;
} Type1;

s32 func_L01_0056D6F8(Type1 *arg0, s32 arg1, s32 arg2);

s32 func_L01_0056D620(Type1 *arg0, s32 arg1) {
    if (arg1 == 0) {
        return 0;
    }
    if (func_L01_0056D6F8(arg0, arg1, 0) != 0) {
        return 1;
    }
    if (arg0->count >= 0x10) {
        return 0;
    }
    arg0->items[arg0->count] = arg1;
    arg0->count++;
    return 1;
}
