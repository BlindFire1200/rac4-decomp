/* Not matching yet: BYTES 8/120 (tools/try_func.py func_00502848 --diff). Not part of the build. */
extern s32 func_00502440(s32 *arg0);
extern s32 func_00502448(s32 *arg0);
extern s32 func_005027E0();

// Looks up a pointer through func_005027E0; if arg1 is in range of the count word there, returns arg0 plus the arg1-th word after it, else 0.
s32 func_00502848(s32 arg0, s32 arg1) {
    s32 var_s0;
    s32 count;

    var_s0 = func_005027E0();
    if (var_s0 != 0) {
        count = func_00502440((s32 *)var_s0);
        var_s0 += 4;
        if (arg1 < count && arg1 >= 0) {
            var_s0 = func_00502448((s32 *)(var_s0 + (arg1 << 2))) + arg0;
        } else {
            var_s0 = 0;
        }
    }
    return var_s0;
}
