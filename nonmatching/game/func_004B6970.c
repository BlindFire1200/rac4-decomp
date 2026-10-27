/* Not matching yet: BYTES 1/28 (tools/try_func.py func_004B6970 --diff). Not part of the build. */
extern u8 D_3098F0[];

/* Zeroes the word at offset 4 of record arg0 (0x1F8 bytes each). */
void func_004B6970(s32 arg0) {
    s32 *p = (s32 *)D_3098F0;
    p = (s32 *)((u8 *)p + arg0 * 0x1F8);
    p[1] = 0;
}
