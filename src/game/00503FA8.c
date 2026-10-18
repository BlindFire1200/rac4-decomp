#include "common.h"
extern s32 D_003D3508[];
extern s32 D_0021DED8;
void func_004FEF80(void *, s32, void *);
void func_004FF090(void *, f32);
void *func_00507958(void *);
s32 func_0050C568(void *);
void *func_0050C570(void *, s32);
s32 func_00503FA8(s32, void *, f32);
s32 func_00503FA8(s32 arg0, void *arg1, f32 arg2) {
    s32 result = 0;
    u8 stack[0x70];
    if (arg1 != 0) {
        if (((s32 (*)(void *, s32))(*(s32 *)((u8 *)(u32)*(s32 *)((u8 *)arg1 + 8) + 0x14)))(arg1, D_0021DED8)) {
            void *selected = func_00507958(arg1);
            s32 count = func_0050C568(selected);
            s32 i;
            for (i = 0; i < count; i++) func_00503FA8(arg0, func_0050C570(selected, i), arg2);
            if (*(s32 *)((u8 *)selected + 0x38) != -1) {
                func_004FEF80(stack, arg0, selected);
                func_004FF090(stack, arg2);
                *(s32 **)(stack + 8) = D_003D3508;
            }
        } else {
            func_004FEF80(stack, arg0, arg1);
            func_004FF090(stack, arg2);
            *(s32 **)(stack + 8) = D_003D3508;
        }
        result = 1;
    }
    return result;
}
