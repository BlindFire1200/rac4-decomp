/* Not matching yet: BYTES 3/28 (tools/try_func.py func_004B69B0 --diff). Not part of the build. */
/* Clears the word at offset 0xC of the 0x1F8-byte record at index arg0 in D_3098F0. */
extern s32 D_3098F0[];

void func_004B69B0(s32 arg0) {
    s32 *p = (s32 *)((u32)D_3098F0 + (arg0 * 0x1F8));
    p[3] = 0;
}
