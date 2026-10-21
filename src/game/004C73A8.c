#include "common.h"

void func_00497980();                                 /* extern */
void func_004C5B20();                                  /* extern */
extern s8 D_0021F938;

void func_004C73A8(s32 arg0) {
    if (arg0 != 0) {
        D_0021F938 = 0;
        func_00497980(0xE);
        func_004C5B20();
        return;
    }
    func_00497980(0xC);
}
