#include "common.h"

void func_L01_00465ED0(void *, s32, s32, s32);

// Run func_L01_00465ED0 with the linked object's counter byte (+4) and the two
// parameters, then increment the counter.
void func_L01_00465F70(u8 *object, s32 param_a, s32 param_b) {
    u8 *linked = *(u8 **)(object + 0xAC);
    func_L01_00465ED0(object, linked[4], param_a, param_b);
    linked[4]++;
}
