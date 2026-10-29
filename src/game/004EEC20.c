#include "common.h"

extern void func_004EE948(void **arg0);
extern void *D_003D2FE0[];

void func_004EEC20(void **arg0) {
    *arg0 = D_003D2FE0;
    func_004EE948(arg0);
}
