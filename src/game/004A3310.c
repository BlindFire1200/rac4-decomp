#include "common.h"

extern void func_004A3380(void);
extern void func_004A3480(void);
extern void func_004A3848(void);
extern u32 D_307B30[];
void func_004A3310(void) {
    if (D_307B30[9] & 2) func_004A3380();
    if (D_307B30[9] & 1) func_004A3480();
    if (D_307B30[9] & 4) func_004A3848();
}
