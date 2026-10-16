#include "common.h"

extern void func_L00_006EC318(void *, int *, int);
extern void *func_L01_006B4FC0(void *, int, int, int);
void func_L41_00446D30(void *unused, int arg1, int arg2, int arg3) {
    int first, second, third;
    void *stream = func_L01_006B4FC0(unused, 1, 0, 0xFA);
    if (stream != 0) {
        first = arg1;
        func_L00_006EC318(stream, &first, 4);
        second = arg2;
        func_L00_006EC318(stream, &second, 4);
        third = arg3;
        func_L00_006EC318(stream, &third, 4);
    }
}
