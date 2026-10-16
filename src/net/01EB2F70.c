#include "common.h"

extern void func_01EA95C0(void *);

void func_01EB2F70(void *arg0) {
    s32 sp0 = (s32)arg0;
    if (arg0 != NULL) {
        if (*(s32 *)((u8 *)arg0 + 0x10) != 0) {
            func_01EA95C0((u8 *)arg0 + 0x10);
        }
        if (*(s32 *)((u8 *)arg0 + 0x1C) != 0) {
            func_01EA95C0((u8 *)arg0 + 0x1C);
        }
        if (*(s32 *)((u8 *)arg0 + 0x14) != 0) {
            func_01EA95C0((u8 *)arg0 + 0x14);
        }
        if (*(s32 *)((u8 *)arg0 + 0x18) != 0) {
            func_01EA95C0((u8 *)arg0 + 0x18);
        }
        func_01EA95C0(&sp0);
    }
}
