#include "common.h"
typedef struct {
    u8 pad[0x68];
    s32 count;
    s32 items[1];
} Type716170;
extern s32 func_0069EA18(s32, s32, s32);
s32 func_L00_00716170(Type716170 *arg0, s32 arg1, s32 arg2) {
    s32 result = 0;
    s32 i;
    for (i = 0; i < arg0->count; i++) {
        result |= func_0069EA18(arg0->items[i], arg1, arg2) != 0;
    }
    return result;
}
