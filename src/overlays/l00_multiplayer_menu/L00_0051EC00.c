#include "common.h"

typedef struct {
    void *f0;
    void *f4;
    void *f8;
    int (*fC)(void *, int, int, int, int, int, int, int);
} Type1;

typedef struct {
    Type1 *f0;
} Type2;

/* Calls the function at offset 0xC of the object pointed to by arg0, passing arg0, 1 and the remaining arguments, and returns its result. */
int func_L00_0051EC00(Type2 *arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
    return arg0->f0->fC(arg0, 1, arg1, arg2, arg3, arg4, arg5, arg6);
}
