#include "common.h"

extern void func_L00_00601888(void);
extern u8 *D_00222550;

void func_L00_00603418(void) {
    if (D_00222550 != 0) {
        func_L00_00601888();
        *(s32 *)(D_00222550 + 0x304C) = 1;
    }
}
