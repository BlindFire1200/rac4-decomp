#include "common.h"

extern u8 D_0021DD52;

void func_00460110();                                  /* extern */

void func_00461100(void) {
    if (D_0021DD52 != 0) {
        func_00460110();
        D_0021DD52 = 0U;
    }
}
