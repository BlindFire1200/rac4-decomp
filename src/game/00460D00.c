#include "common.h"

extern u8 D_0021DD53;
extern s32 D_0021DD4C;
extern s32 D_0021DD48;

void func_00439930();                                  /* extern */
void func_00460110();                                  /* extern */

void func_00460D00(void) {
    if (D_0021DD53 != 0) {
        func_00439930();
        func_00460110();
        D_0021DD4C = 0;
        D_0021DD48 = 0;
        D_0021DD53 = 0U;
    }
}
