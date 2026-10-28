#include "common.h"

/* Writes the four initial state words and clears the two counter words of the structure at the argument. */
void func_01EB10A0(void *arg0) {
    u32 *p = (u32 *)arg0;
    u32 w0 = 0x67452301;
    u32 w1 = 0xEFCDAB89;
    u32 w2 = 0x98BADCFE;
    u32 w3 = 0x10325476;

    p[0] = w0;
    p[3] = w3;
    p[1] = w1;
    p[2] = w2;
    p[4] = 0;
    p[5] = 0;
}
