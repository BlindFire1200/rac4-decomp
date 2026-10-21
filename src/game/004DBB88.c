#include "common.h"

extern void func_00497980(s32);
extern void func_004DCB80(void);

extern s32 D_322FC8_[];
#define D_322FC8 (D_322FC8_[0])

void func_004DBB88(s32 a0) {
    *(s32 *)((u8 *)&D_322FC8 + (a0 * 0x168)) = 1;
    func_00497980(6);
    func_004DCB80();
}
