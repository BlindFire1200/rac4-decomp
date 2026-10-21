#include "common.h"

extern s32 func_004981F8(s32, s32);
extern s32 *func_004A8C68(s32);
extern void func_004A90A0(void);
extern void func_004AF168(void);
extern s32 D_308108[];

// Process game structure with conditional logic
void func_004A7958(s32 arg0, s32 arg1) {
    void *s1;
    s32 *temp_v0;
    s32 idx;

    idx = arg0;
    s1 = (void *)((u8 *)D_308108 + (idx * 0xB8));

    if (arg1 != 0) {
        temp_v0 = func_004A8C68(arg0);
        *(s32 *)((u32)s1 + 0x24) = *temp_v0;
    } else {
        *(s32 *)((u32)s1 + 0x24) = 0;
        temp_v0 = func_004A8C68(arg0);
        func_004981F8(arg0, *temp_v0);
    }

    func_004A90A0();
    func_004AF168();
}
