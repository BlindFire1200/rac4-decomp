#include "common.h"

// For a live moby, clear every node of the list at pvar+0x264 and empty the list.

typedef struct Type3 {
    s32 f0;
    char _p4[0x8 - 0x4];
    struct Type3 *f8;
} Type3;

typedef struct Type2 {
    char _p0[0x264];
    Type3 *f264;
} Type2;

typedef struct Type1 {
    char _p0[0x20];
    u8 f20;
    char _p21[0xAC - 0x21];
    Type2 *fAC;
} Type1;

void func_L05_00491D18(Type1 *arg0) {
    Type2 *p;
    Type3 *node;
    Type3 *next;

    if (arg0 == 0 || arg0->f20 == 0xFE || arg0->f20 == 0xFD) {
        return;
    }
    p = arg0->fAC;
    if (p == 0) {
        return;
    }
    node = p->f264;
    while (node != 0) {
        next = node->f8;
        node->f0 = 0;
        node = next;
    }
    p->f264 = 0;
}
