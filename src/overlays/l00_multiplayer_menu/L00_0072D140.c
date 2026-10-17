#include "common.h"

void func_L00_0072D140(void *arg0) {
    void *temp_a0;
    temp_a0 = *(void **)((u8 *)arg0 + 0xBC);
    if ((*(s32 (**)(void *))((u8 *)*(void **)((u8 *)temp_a0 + 0x58) + 0xA8))(temp_a0) == 3) {
        void *temp_a0_2 = *(void **)((u8 *)arg0 + 0xD0);
        if ((*(s32 (**)(void *))((u8 *)*(void **)((u8 *)temp_a0_2 + 0x58) + 0xA8))(temp_a0_2) == 0) {
            (*(void (**)(void *, s32))((u8 *)*(void **)((u8 *)*(void **)((u8 *)arg0 + 0x114) + 0x58) + 0xA4))(*(void **)((u8 *)arg0 + 0x114), 0);
            (*(void (**)(void *, s32, s32))((u8 *)*(void **)((u8 *)*(void **)((u8 *)arg0 + 0x114) + 0x58) + 0x20))(*(void **)((u8 *)arg0 + 0x114), 3, 0);
            return;
        }
        (*(void (**)(void *, s32, s32))((u8 *)*(void **)((u8 *)*(void **)((u8 *)arg0 + 0x114) + 0x58) + 0x20))(*(void **)((u8 *)arg0 + 0x114), 0, 0);
    }
}
