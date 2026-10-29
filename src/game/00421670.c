#include "common.h"

typedef int s128 __attribute__((mode(TI)));

extern void func_004210E0(void *);

void func_00421670(s128 arg0) {
    s128 local = arg0;
    func_004210E0(&local);
}
