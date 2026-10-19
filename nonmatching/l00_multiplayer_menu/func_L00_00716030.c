/* Not matching yet: BYTES 13/152 (tools/try_func.py func_L00_00716030 --diff). Not part of the build. */
s32 func_L00_0069C988(s32, f32); /* extern */
void func_L00_007162A0(void *); /* extern */
s32 func_L00_00716030(void *arg0, f32 fparg0) {
    s32 *var_s0;
    s32 temp_a0;
    s32 var_s1;
    s32 var_s3;
    var_s1 = 0;
    var_s3 = 0;
    if (*(s32 *)((u8 *)arg0 + 0x68) > 0) {
        var_s0 = (s32 *)((u8 *)arg0 + 0x6C);
        do {
            temp_a0 = *var_s0;
            var_s3 += 1;
            var_s0 += 1;
            var_s1 |= func_L00_0069C988(temp_a0, fparg0) != 0;
        } while (var_s3 < *(s32 *)((u8 *)arg0 + 0x68));
    }
    if (var_s1 == 1) func_L00_007162A0(arg0);
    return var_s1;
}
