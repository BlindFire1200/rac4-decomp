/* Not matching yet: BYTES 14/112 (tools/try_func.py func_0049A1A8 --diff). Not part of the build. */
extern s32 *D_0021DDA4;
extern s32 D_0021EDD4;
extern s32 D_0021EDD8;
extern s32 D_00306D20[];

void func_0049A1A8(void) {
    s32 *var_a0;
    s32 var_a2;
    s32 var_v1;

    var_a2 = 0x133;
    if (D_0021EDD4 != 1) {
        var_a2 = 0x37;
        if (D_0021EDD4 == 0) {
            var_a2 = ((D_0021EDD8 ^ 1) == 0) ? 0x3F : 0x37;
        }
    }
    var_v1 = 0;
    if (*D_0021DDA4 > 0) {
        var_a0 = D_00306D20 + 1;
        do {
            *var_a0 = var_a2;
            var_v1 += 1;
            var_a0 += 0x10;
        } while (var_v1 < *D_0021DDA4);
    }
}
