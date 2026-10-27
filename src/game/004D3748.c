#include "common.h"

typedef struct Type1 {
    s32 f0;
    s32 f4;
} Type1;
typedef struct Type2 {
    s32 pad[9];
    s32 f24;
    s32 f28;
} Type2;
extern Type2 D_003D9BE0[];
extern Type1 D_31B738[];

/* Fills seven (value, flag) slots of D_31B738 from two base values in D_003D9BE0 */
void func_004D3748(s32 arg0) {
    s32 n, m1, m2;
    s32 i, end;
    s32 a, b;

    a = D_003D9BE0[0].f24;
    b = D_003D9BE0[0].f28;
    if (arg0 == 0) {
        n = 1;
        m1 = 0;
        m2 = 0;
    } else {
        n = 3;
        m1 = 2;
        m2 = 1;
    }
    i = 0;
    end = n;
    if (end > 0) {
        for (i = 0; i < end; i++) {
            D_31B738[i].f0 = a;
            D_31B738[i].f4 = 0;
            a += 0x12C00;
        }
    }
    end = end + 1;
    for (; i < end; i++) {
        D_31B738[i].f0 = b;
        D_31B738[i].f4 = 0;
        b += 0x12C00;
    }
    end += m1;
    for (; i < end; i++) {
        D_31B738[i].f0 = a;
        D_31B738[i].f4 = 1;
        a += 0x4F000;
    }
    end += m2;
    for (; i < end; i++) {
        D_31B738[i].f0 = b;
        D_31B738[i].f4 = 1;
        b += 0x4F000;
    }
    for (; i < 7; i++) {
        D_31B738[i].f4 = 0;
        D_31B738[i].f0 = 0;
    }
}
