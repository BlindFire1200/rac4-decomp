/* cflags: -fno-opt-stack */
#include "common.h"

#include "common.h"

extern u8 D_00191F01[];
extern s32 func_0011A180(s8);

/* maps every character of a string through the flag table, in place */
s8 *func_00122090(s8 *arg0) {
    s8 *p;
    s8 c;

    p = arg0;
    if (*p != 0) {
        do {
            c = *p;
            if (D_00191F01[c] & 1) {
                *p = func_0011A180(c);
            }
            p++;
        } while (*p != 0);
    }
    return arg0;
}
