#include "common.h"

/* Net callback dispatch: if a callback is installed in D_001BCA70 it is called
   with the function's 4th argument and the global D_001BC878, then 0x20 is
   returned. */
extern void (*D_001BCA70[])(int, int);
extern int D_001BC878[];

int func_01EDBE28(int arg0, int arg1, int arg2, int arg3) {
    if (D_001BCA70[0] != 0) {
        D_001BCA70[0](arg3, D_001BC878[0]);
    }
    return 0x20;
}
