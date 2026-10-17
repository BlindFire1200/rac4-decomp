/* Not matching yet: BYTES 20/144 (tools/try_func.py func_L00_00541F08 --diff). Not part of the build. */
extern s32 func_00520F68(s32);
extern s32 func_00520FC0(s32, s32);
extern void func_00521010(s32, s32, s32, s32);
extern void func_L00_00520A68(s32);
extern s32 func_L00_00520F08(void);
s32 func_L00_00541F08(s32 *arg0) {
    s32 temp_s2 = func_L00_00520F08();
    s32 temp_s1 = func_L00_00520F08();
    s32 temp_s0;
    func_L00_00520A68(temp_s2);
    if (arg0[1] == 0x17) func_00521010(arg0[2], arg0[0], 1, temp_s1);
    temp_s0 = func_00520FC0(temp_s1, temp_s2);
    func_00520F68(temp_s1);
    func_00520F68(temp_s2);
    return temp_s0;
}
