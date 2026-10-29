/* Not matching yet: BYTES 6/56 (tools/try_func.py func_01EC5280 --diff). Not part of the build. */
extern s32 func_01EC5150(s32);
extern s32 func_01EC5248();

/* calls func_01EC5248, passes its result to func_01EC5150, returns the result unless func_01EC5150 returns 0 */
s32 func_01EC5280(void) {
    s32 temp_v0;

    temp_v0 = func_01EC5248();
    return (func_01EC5150(temp_v0) == 0) ? 0 : temp_v0;
}
