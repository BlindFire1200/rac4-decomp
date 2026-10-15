#include "common.h"

extern s32 func_0050BFA8(void *, void *);

// Copy fields from source structure if call succeeds
s32 func_0050EA80(void *arg0, void *arg1) {
    s32 result;

    result = (*(s32 (**)(void *, s32))((u8 *)*(void **)((u8 *)arg1 + 0x8) + 0x14))(arg1, 1);
    if (result != 0) {
        func_0050BFA8(arg0, arg1);
        *(s32 *)((u8 *)arg0 + 0x40) = *(s32 *)((u8 *)arg1 + 0x40);
        *(u8 *)((u8 *)arg0 + 0x44) = *(u8 *)((u8 *)arg1 + 0x44);
        *(f32 *)((u8 *)arg0 + 0x48) = *(f32 *)((u8 *)arg1 + 0x48);
        *(f32 *)((u8 *)arg0 + 0x4C) = *(f32 *)((u8 *)arg1 + 0x4C);
        return 1;
    }
    return 0;
}
