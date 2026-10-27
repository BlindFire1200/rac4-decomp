#include "common.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    u8 pad[0x1EC];
} Type1;

extern Type1 D_3098F0[];

/* Zeroes the word at offset 8 of record arg0 (0x1F8 bytes each). */
void func_004B6990(s32 arg0) {
    D_3098F0[arg0].f8 = 0;
}
