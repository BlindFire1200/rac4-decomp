#include "common.h"

/* Calls func_001595B8 with the address of func_00163440 plus eight. */
extern void func_001595B8(void *);
extern char func_00163440[];

void func_001637D0(void) {
    func_001595B8(func_00163440 + 8);
}
