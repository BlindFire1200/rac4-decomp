/* Not matching yet: BYTES 1/28 (tools/try_func.py func_004F6498 --diff). Not part of the build. */
/* Rounds *arg0 up to a 0x2000 boundary (adding 0x1FFF then masking), then adds arg1 and stores it back. */
void func_004F6498(s32 *arg0, s32 arg1) {
    arg1 += (*arg0 + 0x1FFF) & ~0x1FFF;
    *arg0 = arg1;
}
