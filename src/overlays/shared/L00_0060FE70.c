#include "common.h"

s32 func_L00_005BC9B8(s32);
s32 func_L00_00607960(s32);

/* Updates the record unless its halfword field is already unset */
void func_L00_0060FE70(s32 arg0) {
    if (*(s16 *)(arg0 + 0xA) != -1) {
        if (func_L00_005BC9B8(arg0 + 0xA) != 0) {
            func_L00_00607960(arg0);
        }
    }
}
