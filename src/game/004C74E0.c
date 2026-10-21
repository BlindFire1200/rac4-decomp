#include "common.h"

extern s8 D_0021F93A;
extern s8 D_0021F939;

void func_00497980();                                 /* extern */
void func_00498CF8();                                  /* extern */
void func_004C5B20();                                  /* extern */
extern s8 D_0021F938;

void func_004C74E0(s32 arg0) {
    if (arg0 != 0) {
        func_00498CF8();
        D_0021F93A = 0;
        D_0021F939 = 0;
        D_0021F938 = 0;
        func_00497980(0xE);
        func_004C5B20();
        return;
    }
    func_00497980(0xC);
}
