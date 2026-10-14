#include "common.h"

extern void func_0046CAE8(void);
extern void func_0046CCB8(void);
extern void func_0046CEA0(void);
extern void func_0046D0C8(void);

extern s32 D_221448;
extern s32 D_22144C;
extern s32 D_265D60;

/* Check condition and call appropriate function */
void func_0046D340(void) {
    u32 var_v1;

    func_0046CAE8();
    func_0046D0C8();
    var_v1 = D_22144C;
    if (D_221448 != 0) {
        func_0046CCB8();
        var_v1 = D_22144C;
    }
    if ((u32)&D_265D60 < var_v1) {
        func_0046CEA0();
    }
}
