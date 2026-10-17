#include "common.h"

extern void func_00453630(void *, s32);
extern void func_0046FD10(void);
extern u8 D_266B00[];
extern u8 D_266F00[];

// Release an entry of the 0x20-byte table at D_266B00: run func_0046FD10 when
// bit 2 of its +0x15 byte is set, clear its D_266F00 flag and pass the entry
// (0x20 bytes) to func_00453630.
void func_0046F068(u8 *entry) {
    if (entry[0x15] & 4) func_0046FD10();
    D_266F00[((s32)(entry - D_266B00)) >> 5] = 0;
    func_00453630(entry, 0x20);
}
