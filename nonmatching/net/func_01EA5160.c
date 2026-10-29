/* Not matching yet: BYTES 4/60 (tools/try_func.py func_01EA5160 --diff). Not part of the build. */
/* Net helper: sets or clears the bits in arg0 in the word at +0x450 when the object's word at +0x468 is 2. */
void func_01EA5160(s32 arg0, s32 arg1, u8 *arg2) {
    s32 temp;

    if (arg2 != NULL && *(s32 *)(arg2 + 0x468) == 2) {
        temp = *(s32 *)(arg2 + 0x450);
        if (arg1 != 0) {
            *(s32 *)(arg2 + 0x450) = temp | arg0;
            return;
        }
        *(s32 *)(arg2 + 0x450) = temp & ~arg0;
    }
}
