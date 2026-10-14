#include "common.h"

typedef struct SFile {
    char pad0[0xE];
    s16 h;
    char pad10[0x44];
    s32 fd;
} SFile;

extern s32 func_0011BF88(s32 a, s32 b);
extern s32 D_004C1D30(void *);
extern void func_0011A8A0(void *r, s32 (*fn)(void *));

void func_L00_0077CBA8(void *r) {
    func_0011A8A0(r, D_004C1D30);
}
