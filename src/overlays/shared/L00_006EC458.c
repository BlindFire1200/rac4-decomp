#include "common.h"

extern s32 func_L00_005BCAE0(s32, s32, s32);
extern s32 func_L00_005A02D8(void *);
extern void *func_L00_006EBB80(void *);
extern u8 D_004B5A70[];
void func_L00_006EC458(u8 *arg0) {
    u8 *entry;
    u8 *destination;
    func_L00_005BCAE0((s32)arg0, 0, 0x3AB0);
    entry = arg0 + 0x2FE0;
    func_L00_006EBB80(arg0);
    *(void **)(arg0 + 0x14) = D_004B5A70;
    func_L00_005A02D8(entry);
    *(u8 **)(arg0 + 0x2EFC) = entry;
    destination = arg0 + 0x3450;
    *(u8 **)(arg0 + 0x2F00) = destination;
    destination[0x558] = 0xFF;
    *(s32 *)(arg0 + 0x2E58) = 0;
}
