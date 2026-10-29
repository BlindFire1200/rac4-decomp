/* Not matching yet: BYTES 3/28 (tools/try_func.py func_00497938 --diff). Not part of the build. */
extern u8 D_2F32B8[];

// Store arg1 into the 4th word of the 0x54-byte record at index arg0.
void func_00497938(s32 arg0, s32 arg1) {
    s32 *p = (s32 *)(D_2F32B8 + arg0 * 0x54);
    p[1] = arg1;
}
