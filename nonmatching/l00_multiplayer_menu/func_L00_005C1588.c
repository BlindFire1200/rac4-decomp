/* Not matching yet: BYTES 15/140 (tools/try_func.py func_L00_005C1588 --diff). Not part of the build. */
extern s32 func_0011AB04(s32);
extern void func_L00_005C0EA0(void *, s32);
void func_L00_005C1588(u8 *arg0, u8 *arg1) {
    s32 var_s2 = 0;
    u8 *var_s1;
    u8 *var_s0;
    if ((arg0[0] | arg0[1]) != 0) {
        var_s1 = arg0;
        var_s0 = arg1;
        do {
            func_L00_005C0EA0(var_s1, (s32)var_s0);
            var_s2 += func_0011AB04((s32)var_s0);
            var_s1 += 2;
            var_s0 = arg1 + var_s2;
        } while ((var_s1[0] | var_s1[1]) != 0);
    }
    arg1[var_s2] = 0;
}
