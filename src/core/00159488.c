#include "common.h"

extern void func_00126E20(s32);
extern s32 func_00137448(void);
extern void func_00157F98(void);
extern s32 D_0021DCC0;
extern volatile u32 D_1C1F80_[];

s32 D_0021DCB4 = 0;

/* Waits until D_1C1F80_[0] becomes zero; returns 1 when arg0 is 1 and the flag was not already set. */
s32 func_00159488(s32 arg0) {
    s32 f;

    if (D_0021DCB4 == 0) {
        return func_00137448();
    }
    func_00126E20(0);
    f = D_1C1F80_[0] == 0;
    D_0021DCC0 = f;
    if (f == 1) {
        return 0;
    }
    if (arg0 == 1) {
        return 1;
    }
    if (f == 0) {
        do {
            func_00157F98();
            func_00126E20(0);
            f = D_1C1F80_[0] == 0;
            D_0021DCC0 = f;
        } while (f == 0);
    }
    return 0;
}
