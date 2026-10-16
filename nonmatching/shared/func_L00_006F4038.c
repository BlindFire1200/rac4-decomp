/* Not matching yet: SIZE ours 284 / retail 296 (tools/try_func.py func_L00_006F4038 --diff). Not part of the build. */
s32 func_005F4610(void *, s32, s32);
s32 func_L00_006AC888(s32, s32, s32);               /* extern */
extern s32 D_0021E6B4;
typedef struct Type2 { u8 pad0[0x34]; u16 f34; u8 pad36[0x31]; u8 f67; } Type2;
typedef struct Type3 { u8 pad0[0x3C]; s32 f3C; } Type3;
typedef struct Type4 { u8 pad0[0x32]; u8 f32; } Type4;
typedef struct Type1 {
    u8 pad0[0x2B0]; Type2 *f2B0;
    Type2 *f2B8; Type2 *f2BC;
    u8 pad2C0[0x28]; f32 f2E8;
    u8 pad2EC[0x20]; s32 f30C;
    u8 pad310[0x14]; Type3 *f324;
} Type1;
extern Type4 *D_0021DFF0;

void func_L00_006F4038(Type1 *arg0) {
    s32 temp_a1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    u8 temp_v1;
    Type2 *temp_a0;

    if (!(arg0->f2E8 <= 0.0f) && (temp_a0 = arg0->f2B0, (temp_a0 != NULL)) && (temp_v1 = temp_a0->f67, (temp_v1 != 0xA)) && (temp_v1 != 7) && (temp_v1 != 8) && !(temp_a0->f34 & 1)) {
        if (D_0021E6B4 != 1) {
            var_a2 = 2;
            if ((arg0->f2B8 == 0) && (arg0->f2BC == 0)) {
                var_a2 = 0xA;
            }
            var_a1 = arg0->f324->f3C;
            if (var_a1 == 0) {
                func_005F4610(arg0->f2B0, 8, var_a2);
            } else {
                goto block_21;
            }
        } else {
            temp_a1 = arg0->f30C;
            var_a2 = ((temp_a1 ^ 0xA) != 0) ? temp_a1 : -1;
            if ((D_0021DFF0->f32 != 0) && ((var_a0 = arg0->f2B8, (var_a0 != 0)) || (var_a0 = arg0->f2BC, var_a2 = -1, (var_a0 != 0)))) {
                var_a2 = func_L00_006AC888(var_a0, temp_a1, var_a2);
            }
            var_a1 = arg0->f324->f3C;
            if (var_a1 == 0) {
                func_005F4610(arg0->f2B0, 8, var_a2);
                return;
            }
block_21:
            func_005F4610(arg0->f2B0, var_a1, var_a2);
        }
    }
}
