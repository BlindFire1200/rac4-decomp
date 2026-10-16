#include "common.h"

s32 D_002219F0 = 0;
extern void func_L01_0047B980(void *);
extern void func_L01_0047D5C8(void *);
extern void func_L01_0047C6B8(void *);
extern void func_0047D6A8(void *);
extern void func_L00_006B8FD8(s32);

void func_L01_0047D6D8(void) {
    u8 *item = (u8 *)D_002219F0;
    s32 type;
    while (item != 0) {
        type = *(u8 *)(item + 0x20);
        switch (type) {
        case 1: func_L01_0047B980(item); break;
        case 2: func_L01_0047D5C8(item); break;
        case 3: func_L00_006B8FD8((s32)item); break;
        case 4: func_0047D6A8(item); break;
        case 5: func_L01_0047C6B8(item); break;
        case 6: break;
        default: break;
        }
        item = *(u8 **)(*(u8 **)(item + 0xAC) + 0x38);
    }
}
