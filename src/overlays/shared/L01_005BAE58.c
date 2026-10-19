#include "common.h"

extern void *func_00595D38(void *);
extern void func_L01_005BAEC0(void *, void *, void *, f32, f32);

// Look up the entry for key (func_00595D38) and forward the remaining arguments
// to func_L01_005BAEC0 when it exists.
void func_L01_005BAE58(void *key, void *arg1, void *arg2, f32 x, f32 y) {
    void *found = func_00595D38(key);
    if (found) func_L01_005BAEC0(found, arg1, arg2, x, y);
}
