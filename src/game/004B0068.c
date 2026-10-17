#include "common.h"
extern s32 *D_0021DDA4;
void func_0049A6B0(s32, s32);
void func_004B0EA0(void);
void func_004B0068(void) {
    s32 i = 0;
    s32 count;
    func_004B0EA0();
    count = *D_0021DDA4;
    if (count > 0) {
        do {
            func_0049A6B0(i, 0x40);
            i++;
        } while (i < *D_0021DDA4);
    }
}
