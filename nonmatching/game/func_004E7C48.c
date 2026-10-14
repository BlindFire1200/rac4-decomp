/* Not matching yet: BYTES 2/92 (tools/try_func.py func_004E7C48 --diff). Not part of the build. */
#include "common.h"

extern s32 D_003D9F70[];
extern volatile void *D_00221E20;

/* Initialize structure at D_00221E20 with pointers and constants */
void func_004E7C48(void) {
    *(s32 *)D_00221E20 = 0x30000003;
    *(s32 *)((u8 *)D_00221E20 + 0x4) = (s32)&D_003D9F70[0];
    *(s32 *)((u8 *)D_00221E20 + 0x8) = 0;
    *(s32 *)((u8 *)D_00221E20 + 0xC) = 0x50000003;
    D_00221E20 = (void *)((u8 *)D_00221E20 + 0x10);
}
