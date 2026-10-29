/* Not matching yet: BYTES 4/32 (tools/try_func.py func_00489458 --diff). Not part of the build. */
extern s32 D_206948;
/* Sets two halfword pairs in the block at D_206948 to -0x8000 and 0. */
void func_00489458(void) {
    u8 *p = (u8 *)&D_206948;
    *(s16 *)(p + 0x50) = -0x8000;
    *(s16 *)(p + 0x52) = 0;
    *(s16 *)(p + 0xC8) = -0x8000;
    *(s16 *)(p + 0xCA) = 0;
}
