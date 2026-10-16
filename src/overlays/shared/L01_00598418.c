#include "common.h"

typedef unsigned int u128 __attribute__((mode(TI)));
struct Counts { s32 first; u8 pad04[8]; s32 count; };
extern struct Counts D_00269940;
extern int func_L00_005BD188(void *, void *, void *);
extern unsigned char D_00269960[];
s32 func_L01_00598418(u128 arg0) {
    s32 found = 0;
    s32 i = D_00269940.count - 1;
    while (i >= 0) {
        if (func_L00_005BD188(&arg0, D_00269960 + i * 0x10,
                D_00269960 + i * 0x10 + 0x20) != 0) {
            found = i + 1;
            break;
        }
        i--;
    }
    return found == D_00269940.first;
}
