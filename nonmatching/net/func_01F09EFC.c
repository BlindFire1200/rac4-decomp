/* Not matching yet: BYTES 2/16 (tools/try_func.py func_01F09EFC --diff). Not part of the build. */
// Returns 1 when the byte that the pointer at offset 4 points to is zero.
s32 func_01F09EFC(s32 *a0) {
    return *(s8 *)a0[1] == 0;
}
