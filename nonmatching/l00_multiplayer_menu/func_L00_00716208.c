/* Not matching yet: BYTES 10/148 (tools/try_func.py func_L00_00716208 --diff). Not part of the build. */
s32 func_0069C890(s32, f32, f32); /* extern */
s32 func_L00_00716208(void *arg0, f32 fparg0, f32 fparg1) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s3;
    var_s1 = 0;
    var_s3 = 0;
    if (*(s32 *)((u8 *)arg0 + 0x68) > 0) {
        var_s0 = (s32 *)((u8 *)arg0 + 0x6C);
        do {
            var_s3 += 1;
            temp_v0 = func_0069C890(*var_s0, fparg0, fparg1);
            var_s0 += 1;
            var_s1 |= temp_v0 != 0;
        } while (var_s3 < *(s32 *)((u8 *)arg0 + 0x68));
    }
    return var_s1;
}
