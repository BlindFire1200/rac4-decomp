#include "common.h"

extern void func_004EE948(void **arg0);
extern void *D_003D2FF8[];

void func_004EEBF0(void **arg0) {
    *arg0 = D_003D2FF8;
    func_004EE948(arg0);
}
