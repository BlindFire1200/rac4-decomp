#include "common.h"
extern void *func_00595D38(void *);
extern void func_L01_005BAEC0(void *, void *, void *, f32, f32);
void func_L01_005BAE58(void *arg0, void *arg1, void *arg2, f32 x, f32 y) {
    void *result = func_00595D38(arg0);
    if (result) func_L01_005BAEC0(result, arg1, arg2, x, y);
}
