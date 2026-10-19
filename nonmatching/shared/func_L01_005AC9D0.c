/* Not matching yet: BYTES 44/280 (tools/try_func.py func_L01_005AC9D0 --diff). Not part of the build. */
#include "common.h"
extern void *func_00595D00(void *);
extern s32 func_00595D70(void *);
extern void func_L00_005F6C28(void *, u8, s32);

s32 func_L01_005AC9D0(void *arg0, s32 arg1) {
    void *entry = func_00595D00(arg0);
    s32 flags;
    if (entry == 0 || func_00595D70(arg0) == 0) return 0;
    if ((*(u32 *)entry & 0x40) == 0) return 0;
    flags = *(u32 *)((u8 *)entry + 4);
    if ((flags & 0x80) != 0) return 0;
    if ((s32)*(u8 *)((u8 *)entry + 0x32) < arg1) {
        if (arg1 >= 5 || *(f32 *)((u8 *)entry + 0x104) > 0.0f) {
            if (arg1 != 4 || (flags & 0xE000) != 0) {
                if (arg1 != 3 || (flags & 0x6000) != 0) {
                    if (arg1 != 2 || (flags & 0x2000) != 0) {
                        if (*(u8 *)((u8 *)entry + 0x33) != 0)
                            func_L00_005F6C28(arg0, *(u8 *)((u8 *)entry + 0x33), 1);
                        *(u8 *)((u8 *)entry + 0x32) = arg1;
                        *(s32 *)((u8 *)entry + 0xC) = 1;
                        *(u8 *)((u8 *)entry + 0x35) = 0;
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
