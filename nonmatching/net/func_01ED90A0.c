/* Not matching yet: BYTES 2/24 (tools/try_func.py func_01ED90A0 --diff). Not part of the build. */
// Returns the word at offset 4 of *arg0, or 0 when arg0 is NULL.
s32 func_01ED90A0(void **arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = ((s32 *)*arg0)[1];
    }
    return var_v0;
}
