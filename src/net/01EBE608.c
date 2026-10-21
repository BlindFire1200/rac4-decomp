/* cflags: -G0 */
#include "common.h"

void func_01EBE608(s32 *a0, s32 a1) {
    if (a0 != 0) {
        *(s32*)((u8*)a0 + 0x70) = a1;
    }
}
