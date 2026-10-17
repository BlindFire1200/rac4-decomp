#include "common.h"

extern void func_0046A320(void);
extern void func_00497E10(s32);
extern void func_004B3E20(void);
extern void func_004B4C68(void);
extern s32 *D_0021DDA4;
void func_004B22D8(void) {
    s32 i = 0;
    func_004B4C68();
    func_004B3E20();
    func_0046A320();
    if (*D_0021DDA4 > 0) {
        do {
            func_00497E10(i);
            i++;
        } while (i < *D_0021DDA4);
    }
}
