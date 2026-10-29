/* cflags: -O2 -G0 */
/* C adapted from OpenRAC/rac4-decomp pull request #43 (SCES_532.85 reconstruction of the same routine) */
#include "common.h"
typedef struct { u8 f0[12]; } __attribute__((packed)) Type1;
typedef struct { u8 pad[5]; u8 f5, f6, f7; } Type2;
extern Type1 D_001A4628;
/* Decrement the date using the month lengths. */
void func_00155908(Type2 *arg0) {
    Type1 var1 = D_001A4628;
    arg0->f5--;
    if ((arg0->f7 & 3) == 0) var1.f0[1] = 29;
    if (arg0->f5 == 0) {
        arg0->f6--;
        if (arg0->f6 == 0) {
            if (arg0->f7 == 0) arg0->f7 = 99;
            else arg0->f7--;
            arg0->f6 = 12;
        }
        arg0->f5 = var1.f0[arg0->f6 - 1];
    }
}
