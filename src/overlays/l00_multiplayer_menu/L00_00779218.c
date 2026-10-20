#include "common.h"

// Clear the bytes +0x11C..+0x121, +0x154 and +0x174..+0x176.

typedef struct Type1 {
    char _p0[0x11C];
    u8 f11C;
    u8 f11D;
    u8 f11E;
    u8 f11F;
    u8 f120;
    u8 f121;
    char _p122[0x154 - 0x122];
    u8 f154;
    char _p155[0x174 - 0x155];
    u8 f174;
    u8 f175;
    u8 f176;
} Type1;

Type1 *func_L00_00779218(Type1 *arg0) {
    arg0->f11C = 0;
    arg0->f11D = 0;
    arg0->f11E = 0;
    arg0->f11F = 0;
    arg0->f120 = 0;
    arg0->f121 = 0;
    arg0->f154 = 0;
    arg0->f174 = 0;
    arg0->f175 = 0;
    arg0->f176 = 0;
    return arg0;
}
