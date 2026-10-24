#include "common.h"

typedef s32 (*Handler)(void *, s32, s32, s32, s32);

extern void func_00522270(void *);
extern void func_00522238(void *);
extern s32 func_004913B8(s32, s32);
extern s32 func_00490330(s32, s32, s32, s32);

// Returns 1 at once when the halfword at +0x3BA is set. Otherwise, unless the word at +0x25CC is
// 14, runs func_00522270 and func_00522238, calls func_004913B8 with 8 and, when the word at +0x370
// is at least 6 and func_00490330 accepts func_004913B8(0x40, ...), calls the handler at +0x3C of
// the table at +0x14 with (arg0, 7, 1, 0, 1) and returns 1. Returns 0 otherwise.
s32 func_00523578(u8 *arg0) {
    if (*(s16 *)(arg0 + 0x3BA) != 0) {
        return 1;
    }
    if (*(s32 *)(arg0 + 0x25CC) == 0xE) {
        return 0;
    }
    func_00522270(arg0);
    func_00522238(arg0);
    func_004913B8(8, *(s32 *)(arg0 + 0x2F10));
    if (*(s32 *)(arg0 + 0x370) < 6) {
        return 0;
    }
    if (func_00490330(func_004913B8(0x40, *(s32 *)(arg0 + 0x2F10)), 7, 0, *(s32 *)(arg0 + 0x2F00)) == 0) {
        return 0;
    }
    (*(Handler *)(*(u8 **)(arg0 + 0x14) + 0x3C))(arg0, 7, 1, 0, 1);
    return 1;
}
