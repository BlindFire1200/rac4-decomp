/* Not matching yet: BYTES 2/24 (tools/try_func.py func_01ED9088 --diff). Not part of the build. */
// Returns the u16 that **arg0 points to, or 0 when arg0 is NULL.
u16 func_01ED9088(u16 **arg0) {
    u16 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = **arg0;
    }
    return var_v0;
}
