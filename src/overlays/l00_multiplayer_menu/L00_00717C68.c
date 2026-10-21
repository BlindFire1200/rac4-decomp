#include "common.h"

extern s32 D_00223260;

void func_004645E8();                                  /* extern */
void func_0046D668();                                  /* extern */
void func_004E7830();                                 /* extern */

void func_L00_00717C68(void) {
    s32 var_s0;

    var_s0 = 0;
    func_004E7830(1);
    func_0046D668();
    if (D_00223260 > 0) {
        do {
            var_s0 += 1;
            func_004645E8();
        } while (var_s0 < D_00223260);
    }
}
