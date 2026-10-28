/* cflags: -fno-opt-stack -mcheck-zero-division */
#include "common.h"

extern char *func_00122248(char *);
extern u8 D_001641E8[];

char *func_001222C0(s32 value, char *buf, u32 radix) {
    s32 i;
    u32 neg = (u32)value >> 31;
    u32 u = value;

    if (neg && radix == 10) {
        u = -value;
    }
    i = 0;
    do {
        buf[i++] = D_001641E8[u % radix];
        u /= radix;
    } while (u != 0);
    if (neg) {
        buf[i++] = '-';
    }
    buf[i] = 0;
    return func_00122248(buf);
}
