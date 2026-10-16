#include "common.h"

extern void func_L00_006EC318(void *, int *, int);
extern void *func_L01_006B4FC0(void *, int, int, int);
void func_L41_0040F7C0(void *unused, int arg1, int arg2, int arg3, int arg4) {
    struct { char byte; char pad[15]; int first; int last; } temp;
    void *stream = func_L01_006B4FC0(unused, 2, 0, 0xFA);
    if (stream != 0) {
        temp.first = arg1;
        func_L00_006EC318(stream, &temp.first, 4);
        temp.byte = arg2;
        func_L00_006EC318(stream, (int *)&temp.byte, 1);
        temp.byte = arg3;
        func_L00_006EC318(stream, (int *)&temp.byte, 1);
        temp.last = arg4;
        func_L00_006EC318(stream, &temp.last, 4);
    }
}
