#include "common.h"

extern s32 func_0011A518(void *, s32, s32);

// Reset the record: clear the word at +0x24 and the six bytes at +0x28..+0x2D,
// set the first word to -1 and zero the blocks at +0x30 (0x20 bytes), +0x50
// (0xC4) and +0x114 (0x1C).
void func_L00_00765238(u8 *record) {
    *(s32 *)(record + 0x24) = 0;
    record[0x28] = 0;
    record[0x29] = 0;
    record[0x2A] = 0;
    record[0x2B] = 0;
    record[0x2C] = 0;
    record[0x2D] = 0;
    *(s32 *)record = -1;
    func_0011A518(record + 0x30, 0, 0x20);
    func_0011A518(record + 0x50, 0, 0xC4);
    func_0011A518(record + 0x114, 0, 0x1C);
}
