/* Not matching yet: BYTES 2/20 (tools/try_func.py func_0049A694 --diff). Not part of the build. */
// Clear the bits of arg1 in the word at offset 4 of the record.
void func_0049A694(u8 *arg0, s32 arg1) {
    *(s32 *)(arg0 + 4) &= ~arg1;
}
