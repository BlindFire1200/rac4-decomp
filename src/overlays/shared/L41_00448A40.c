#include "common.h"

extern void func_L00_006EC318(void *, void *, int);
extern int func_L01_006B3E48(int, int, void **, void *);

// Message writer: opens a stream with func_L01_006B3E48 (id 0x2628, 0x40
// bytes), writes the 12-byte header, a float, a word and a float, and returns
// the open call's result.
int func_L41_00448A40(void *target, void *header, int mid_value, float first_value, float last_value) {
    void *stream = 0;
    float first;
    int middle;
    float last;
    int result = func_L01_006B3E48(0x2628, 0x40, &stream, target);
    if (stream != 0) {
        func_L00_006EC318(stream, header, 12);
        first = first_value;
        func_L00_006EC318(stream, &first, 4);
        middle = mid_value;
        func_L00_006EC318(stream, &middle, 4);
        last = last_value;
        func_L00_006EC318(stream, &last, 4);
    }
    return result;
}
