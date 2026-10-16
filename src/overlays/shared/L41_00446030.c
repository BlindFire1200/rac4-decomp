#include "common.h"

extern void func_L00_006EC318(void *, void *, int);
extern int func_L01_006B3E48(int, int, void **, void *);

// Message writer: opens a stream with func_L01_006B3E48 (id 0x261F, 0x90
// bytes), writes the 12-byte header and four words, and returns the open call's
// result.
int func_L41_00446030(void *target, void *header, int value_a, int value_b, int value_c, int value_d) {
    void *stream = 0;
    int first, second, third, fourth;
    int result = func_L01_006B3E48(0x261F, 0x90, &stream, target);
    if (stream != 0) {
        func_L00_006EC318(stream, header, 12);
        first = value_a;
        func_L00_006EC318(stream, &first, 4);
        second = value_b;
        func_L00_006EC318(stream, &second, 4);
        third = value_c;
        func_L00_006EC318(stream, &third, 4);
        fourth = value_d;
        func_L00_006EC318(stream, &fourth, 4);
    }
    return result;
}
