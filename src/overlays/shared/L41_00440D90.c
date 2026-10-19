#include "common.h"

extern void func_L00_006EC318(void *, s32 *, s32);
extern void *func_L01_006B4FC0(s32, s32, s32, s32);

// Message writer: opens a stream with func_L01_006B4FC0 (kind 2) and writes two
// words, without checking that the stream was opened.
void func_L41_00440D90(s32 target, s32 value_a, s32 value_b) {
    s32 first;
    s32 second;
    void *stream = func_L01_006B4FC0(target, 2, 0, 0);
    first = value_a;
    func_L00_006EC318(stream, &first, 4);
    second = value_b;
    func_L00_006EC318(stream, &second, 4);
}
