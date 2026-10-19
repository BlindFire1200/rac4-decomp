/* Not matching yet: BYTES 15/200 (tools/try_func.py func_L00_006ED020 --diff). Not part of the build. */
typedef struct Type1 {
    u8 pad0[0x25CC];
    s32 f25CC;
    u8 pad25D0[0x850];
    f32 f2E20;
    u8 pad2E24[0xBC];
    s32 f2EE0;
    u8 pad2EE4[0x10];
    s32 f2EF4;
} Type1;
s32 func_L00_006F3958(void *);                      /* extern */

s32 func_L00_006ED020(Type1 *arg0) {
    s32 temp_v1;
    s32 var_s1;
    s32 var_v0;

    var_v0 = 0;
    if (arg0->f2EE0 == 0) {
        var_s1 = 0;
        if (!(arg0->f2E20 <= 0.0f) && (temp_v1 = arg0->f25CC, (temp_v1 != 0x39)) && (temp_v1 != 0x68) && (temp_v1 != 0x6A) && (temp_v1 != 0x76) && (temp_v1 != 0x7A) && (temp_v1 != 0x7B) && (temp_v1 != 0x7E) && (temp_v1 != 0x7F) && (temp_v1 != 0x94)) {
            var_v0 = 0;
            if (temp_v1 != 0x99) {
                var_v0 = 0;
                if (func_L00_006F3958(arg0) == 0) {
                    var_s1 = arg0->f2EF4 == 0;
                    goto block_14;
                }
            }
        } else {
block_14:
            var_v0 = var_s1;
        }
    }
    return var_v0;
}
