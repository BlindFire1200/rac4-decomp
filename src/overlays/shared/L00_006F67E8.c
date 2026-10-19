#include "common.h"

extern void *func_L00_006AA100(s32);
extern void *func_L00_005FE7C0(s32);

// Look up the handler for the record's id and run its callback, or clear the fields.
void func_L00_006F67E8(u8 *entry) {
    u8 *record = func_L00_006AA100(*(s32 *)entry);
    void *handler;
    s32 callback;
    *(s32 *)(entry + 0x10) = *(s32 *)(record + 0x18);
    handler = func_L00_005FE7C0(*(s32 *)(entry + 0x10));
    if (handler != 0) {
        callback = *(s32 *)((u8 *)handler + 0xC);
        *(s32 *)(entry + 0x14) = callback;
        ((void (*)(s32, s32))callback)(*(s32 *)(entry + 0x10), 1);
        *(s32 *)(entry + 0x18) = 0;
    } else {
        *(s32 *)(entry + 0x18) = 0;
        *(s32 *)(entry + 0x14) = 0;
    }
}
