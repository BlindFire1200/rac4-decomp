#include "common.h"

extern void func_00501AA0(void);
f32 D_00220ADC = 0;
f32 D_00220AE0 = 0;

/* Stores the two float arguments into globals D_00220ADC and D_00220AE0, then calls func_00501AA0. */
void func_00501B28(f32 fparg0, f32 fparg1) {
    D_00220ADC = fparg0;
    D_00220AE0 = fparg1;
    func_00501AA0();
}
