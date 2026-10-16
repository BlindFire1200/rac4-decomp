#include "common.h"

extern void func_L00_006EC318(void *, void *, int);
extern int func_L01_006B3E48(int, int, void **, void *);
int func_L41_00446030(void *unused, void *data, int arg2, int arg3, int arg4, int arg5) {
    void *stream = 0;
    int first, second, third, fourth;
    int result = func_L01_006B3E48(0x261F, 0x90, &stream, unused);
    if (stream != 0) {
        func_L00_006EC318(stream, data, 12);
        first = arg2;
        func_L00_006EC318(stream, &first, 4);
        second = arg3;
        func_L00_006EC318(stream, &second, 4);
        third = arg4;
        func_L00_006EC318(stream, &third, 4);
        fourth = arg5;
        func_L00_006EC318(stream, &fourth, 4);
    }
    return result;
}
