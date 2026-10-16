#include "common.h"

extern s32 func_L00_005BCAE0(s32, s32, s32);
extern s32 func_L00_005A02D8(void *);
extern void *func_L00_006EBB80(void *);
extern u8 D_004B5A70[];
// Initialize an object (a player, judging by its +0x2EF0-style fields): clear its 0x3AB0 bytes, run the base setup, link the
// two embedded records (+0x2FE0 and +0x3450) at +0x2EFC and +0x2F00, and mark the
// second record's +0x558 byte as unused (0xFF).
void func_L00_006EC458(u8 *player) {
    u8 *record_a;
    u8 *record_b;
    func_L00_005BCAE0((s32)player, 0, 0x3AB0);
    record_a = player + 0x2FE0;
    func_L00_006EBB80(player);
    *(void **)(player + 0x14) = D_004B5A70;
    func_L00_005A02D8(record_a);
    *(u8 **)(player + 0x2EFC) = record_a;
    record_b = player + 0x3450;
    *(u8 **)(player + 0x2F00) = record_b;
    record_b[0x558] = 0xFF;
    *(s32 *)(player + 0x2E58) = 0;
}
