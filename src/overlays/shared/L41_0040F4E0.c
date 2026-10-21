#include "common.h"

extern void func_L00_006EC318(void *, int *, int);
extern void *func_L01_006B4FC0(void *, int, int, int);

// Message writer: opens a stream with func_L01_006B4FC0 (kind 1) and writes a
// word and two bytes through func_L00_006EC318.
void func_L41_0040F4E0(void *target, int value, int byte_a, int byte_b) {
    struct { char byte; char pad[15]; int value; } temp;
    void *stream = func_L01_006B4FC0(target, 1, 0, 0xFA);
    if (stream != 0) {
        temp.value = value;
        func_L00_006EC318(stream, &temp.value, 4);
        temp.byte = byte_a;
        func_L00_006EC318(stream, (int *)&temp.byte, 1);
        temp.byte = byte_b;
        func_L00_006EC318(stream, (int *)&temp.byte, 1);
    }
}
