#include "common.h"

extern void func_L00_006EC318(void *, int *, int);
extern void *func_L01_006B4FC0(void *, int, int, int);
void func_L41_0040F4E0(void *unused, int arg1, int arg2, int arg3) {
    struct { char byte; char pad[15]; int value; } temp;
    void *stream = func_L01_006B4FC0(unused, 1, 0, 0xFA);
    if (stream != 0) {
        temp.value = arg1;
        func_L00_006EC318(stream, &temp.value, 4);
        temp.byte = arg2;
        func_L00_006EC318(stream, (int *)&temp.byte, 1);
        temp.byte = arg3;
        func_L00_006EC318(stream, (int *)&temp.byte, 1);
    }
}
