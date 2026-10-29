#include "common.h"

// Initialise the four MD-style chaining words at offsets 0, 4, 8, 0xC and clear the two counters at 0x10 and 0x14.
void func_01EB1C20(s32 *arg0) {
    s32 w0;
    s32 w1;
    s32 w2;
    s32 w3;

    w0 = 0x67452301;
    w1 = 0xEFCDAB89;
    w2 = 0x98BADCFE;
    w3 = 0x10325476;
    arg0[0] = w0;
    arg0[3] = w3;
    arg0[1] = w1;
    arg0[2] = w2;
    arg0[4] = 0;
    arg0[5] = 0;
}
