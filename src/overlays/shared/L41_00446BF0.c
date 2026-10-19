#include "common.h"

extern void func_L00_006EC318(void *, int *, int);
extern void *func_L01_006B4FC0(void *, int, int, int);

// Message writer: opens a stream with func_L01_006B4FC0 (kind 3) and writes two
// words.
void func_L41_00446BF0(void *target, int value_a, int value_b) {
    int first;
    int second;
    void *stream = func_L01_006B4FC0(target, 3, 0, 0);
    if (stream != 0) {
        first = value_a;
        func_L00_006EC318(stream, &first, 4);
        second = value_b;
        func_L00_006EC318(stream, &second, 4);
    }
}
