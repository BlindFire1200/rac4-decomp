#include "common.h"

extern s32 D_0021DADC;

void func_00464AF8();                                 /* extern */
void func_00465DF8();                                 /* extern */

void func_00464DD0(void) {
    if (D_0021DADC != 3) {
        func_00465DF8(0);
        func_00464AF8(4);
    }
}
