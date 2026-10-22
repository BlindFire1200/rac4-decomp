/* cflags: -mno-split-addresses */
#include "common.h"

typedef struct {
    u8 pad_0000[0x26E4];
    s32 field_26E4;
} Struct_unk_26E4;

extern Struct_unk_26E4 *D_0021EDB8;
extern void *func_00510BE8(s32);
extern s32 func_0054A788(s32, s32, s32);
extern f32 func_004725D8(f32, f32);
extern void func_005481A8(s32, s32, s32);

/* Accumulates a scaled total (1.0 plus half of a returned score plus a random float) and passes the truncated value to func_005481A8. */
void func_00472940(void) {
    f32 var_f20 = 1.0f;
    Struct_unk_26E4 *temp_v0;

    temp_v0 = func_00510BE8(0);
    if (temp_v0 != NULL) {
        var_f20 = (f32)func_0054A788(temp_v0->field_26E4, 8, 6) * 0.5f + var_f20;
    }
    var_f20 = var_f20 + func_004725D8(0.0f, 1.0f);
    func_005481A8(D_0021EDB8->field_26E4, 8, (s32)var_f20);
}
