#include "common.h"

extern void *func_006A9160(void);
extern void func_L00_005C9DA0(void);

// Store the byte setting; run the follow-up when it is nonzero.
void func_L00_006A9550(s32 unused0, s32 enable) {
    void *record = func_006A9160();
    *(u8 *)((u8 *)record + 0x2EDC) = (u8)enable;
    if (enable != 0) {
        func_L00_005C9DA0();
    }
}
