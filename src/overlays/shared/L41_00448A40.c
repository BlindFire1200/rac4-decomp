#include "common.h"

extern void func_L00_006EC318(void *, void *, int);
extern int func_L01_006B3E48(int, int, void **, void *);
int func_L41_00448A40(void *arg0, void *arg1, int arg2, float f0, float f1) {
    void *stream = 0;
    float first;
    int middle;
    float last;
    int result = func_L01_006B3E48(0x2628, 0x40, &stream, arg0);
    if (stream != 0) {
        func_L00_006EC318(stream, arg1, 12);
        first = f0;
        func_L00_006EC318(stream, &first, 4);
        middle = arg2;
        func_L00_006EC318(stream, &middle, 4);
        last = f1;
        func_L00_006EC318(stream, &last, 4);
    }
    return result;
}
