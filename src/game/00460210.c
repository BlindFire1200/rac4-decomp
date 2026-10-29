#include "common.h"

s32 func_01E9A0F0();
extern u8 D_001723C4_[];
#define D_001723C4 (D_001723C4_[0])

s32 func_00460210(void) {
    if (D_001723C4 != 0) {
        func_01E9A0F0();
    }
    return 1;
}
