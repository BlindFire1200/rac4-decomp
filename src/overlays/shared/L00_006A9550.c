#include "common.h"

extern void *func_006A9160(void);
extern void func_L00_005C9DA0(void);

void func_L00_006A9550(s32 unused0, s32 value) {
    void *record = func_006A9160();
    *(u8 *)((u8 *)record + 0x2EDC) = (u8)value;
    if (value != 0) {
        func_L00_005C9DA0();
    }
}
