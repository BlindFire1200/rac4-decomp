#include "common.h"

extern s32 func_001524D8(void);
extern s32 func_001527D8(s32);
extern s32 func_00152AF8(s32);
extern s32 func_00161528(void);

s32 D_0021E020 = 0;
s32 D_0021E028 = 0;

// Check and call based on globals
s32 func_001615C0(void) {
    if (D_0021E020 != -1) {
        func_00161528();
        if (D_0021E028 == 1) {
            func_00152AF8(D_0021E020);
            D_0021E028 = 0;
        }
        func_001527D8(D_0021E020);
        D_0021E020 = -1;
    }
    func_001524D8();
    return 0;
}
