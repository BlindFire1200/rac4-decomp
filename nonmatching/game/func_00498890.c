/* Not matching yet: BYTES 15/136 (tools/try_func.py func_00498890 --diff). Not part of the build. */
extern s32 func_004986E0(s32);
extern s32 func_00498708(s32);
extern s32 func_00498730(s32);
extern s32 D_003D8D30[];

// Initialize or process array entries
void func_00498890(void) {
    s32 *var_s0;
    s32 var_s1;

    var_s0 = &D_003D8D30[3];
    var_s1 = 0xA;
    do {
        if (var_s0[-2] == 0) {
            var_s0[-2] = func_00498730(var_s0[-3]);
        }
        if (var_s0[-1] == 0) {
            var_s0[-1] = func_00498708(var_s0[-3]);
        }
        if (var_s0[0] == 0) {
            var_s0[0] = func_004986E0(var_s0[-3]);
        }
        var_s1 -= 1;
        var_s0 += 4;
    } while (var_s1 >= 0);
}
