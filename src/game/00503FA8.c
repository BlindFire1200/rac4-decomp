#include "common.h"

extern s32 D_003D3508[];
extern s32 D_00220B54;
void func_004FEF80(void *, s32, void *);
void func_004FF090(void *, f32);
void *func_00507958(void *);
s32 func_0050C568(void *);
void *func_0050C570(void *, s32);
s32 func_00503FA8(s32, void *, f32);

// Apply func_004FEF80 and func_004FF090 to an object (arg1) with the value
// arg2, recursing over the sub-objects of its func_00507958 selection when the
// object supports D_00220B54. Returns 1 when there was an object, else 0.
s32 func_00503FA8(s32 param, void *object, f32 value) {
    s32 result = 0;
    u8 stack[0x70];
    if (object != 0) {
        if (((s32 (*)(void *, s32))(*(s32 *)((u8 *)(u32)*(s32 *)((u8 *)object + 8) + 0x14)))(object, D_00220B54)) {
            void *selected = func_00507958(object);
            s32 count = func_0050C568(selected);
            s32 i;
            for (i = 0; i < count; i++) func_00503FA8(param, func_0050C570(selected, i), value);
            if (*(s32 *)((u8 *)selected + 0x38) != -1) {
                func_004FEF80(stack, param, selected);
                func_004FF090(stack, value);
                *(s32 **)(stack + 8) = D_003D3508;
            }
        } else {
            func_004FEF80(stack, param, object);
            func_004FF090(stack, value);
            *(s32 **)(stack + 8) = D_003D3508;
        }
        result = 1;
    }
    return result;
}
