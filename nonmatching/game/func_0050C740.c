/* Not matching yet: BYTES 1/28 (tools/try_func.py func_0050C740 --diff). Not part of the build. */
// Passes the word at offset 0x1E8 of its argument on to func_0050CAC0.
extern void func_0050CAC0(s32);
void func_0050C740(void *arg0) {
    func_0050CAC0(*(s32 *)((u8 *)arg0 + 0x1E8));
}
