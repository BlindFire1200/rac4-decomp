#include "common.h"

extern void func_00501AA0(void);
f32 D_00220AC4 = 0;
f32 D_00220AC8 = 0;

/* Stores the two float arguments into globals D_00220AC4 and D_00220AC8, then calls func_00501AA0. */
void func_00501B08(f32 fparg0, f32 fparg1) {
    D_00220AC4 = fparg0;
    D_00220AC8 = fparg1;
    func_00501AA0();
}
