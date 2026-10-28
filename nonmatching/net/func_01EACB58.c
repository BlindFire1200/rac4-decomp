/* Not matching yet: BYTES 8/60 (tools/try_func.py func_01EACB58 --diff). Not part of the build. */
/* Stores a halfword at index arg0 of the table at offset 8 and bumps the counter at offset 0, when the flag at offset 4 is set and the table is non-null. */
void func_01EACB58(s32 arg0, s32 arg1, s32 *arg2) {
    s32 count;

    if ((arg2 != NULL) && (arg2[1] != 0)) {
        if (arg2[2] != 0) {
            count = arg2[0] + 1;
            *(s16 *)((arg0 * 4) + arg2[2]) = arg1;
            arg2[0] = count;
        }
    }
}
