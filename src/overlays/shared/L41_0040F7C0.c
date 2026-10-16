#include "common.h"

extern void func_L00_006EC318(void *, int *, int);
extern void *func_L01_006B4FC0(void *, int, int, int);

// Message writer: opens a stream with func_L01_006B4FC0 (kind 2) and writes a
// word, two bytes and a final word.
void func_L41_0040F7C0(void *target, int first_value, int byte_a, int byte_b, int last_value) {
    struct { char byte; char pad[15]; int first; int last; } temp;
    void *stream = func_L01_006B4FC0(target, 2, 0, 0xFA);
    if (stream != 0) {
        temp.first = first_value;
        func_L00_006EC318(stream, &temp.first, 4);
        temp.byte = byte_a;
        func_L00_006EC318(stream, (int *)&temp.byte, 1);
        temp.byte = byte_b;
        func_L00_006EC318(stream, (int *)&temp.byte, 1);
        temp.last = last_value;
        func_L00_006EC318(stream, &temp.last, 4);
    }
}
