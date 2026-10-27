/* Not matching yet: BYTES 6/144 (tools/try_func.py func_0012DD90 --diff). Not part of the build. */
/* cflags: -fno-opt-stack */
s32 func_0012D420(void);
void func_0012D470(void);
void func_0012DC10(s32);
s32 func_0012DE28(s32);
s32 func_0012E320(void);

s32 func_0012DD90(void) {
    s32 temp_s0 = func_0012D420();
    s32 temp_v0 = *(volatile s32 *)0x10001010;

    if (temp_v0 & 0x80) {
        if (temp_s0 == 0) {
            return 1;
        }
        func_0012D470();
        return 1;
    }
    func_0012DC10((temp_v0 & 0xFFFFF3FF) | 0x80);
    func_0012DE28(func_0012E320());
    if (temp_s0 != 0) {
        func_0012D470();
    }
    return 0;
}
