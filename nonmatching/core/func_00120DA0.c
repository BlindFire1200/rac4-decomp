/* Not matching yet: BYTES 14/96 (tools/try_func.py func_00120DA0 --diff). Not part of the build. */
void func_0011F338(s32);
s32 func_0011F398(s32);
s32 func_00125B30(s32, s32, s32);
extern s32 D_00163E74[];

/* Process data with multiple operations */
s32 func_00120DA0(s32 arg0, s32 arg1) {
    s32 temp_s1;

    func_0011F338(D_00163E74[0]);
    temp_s1 = func_00125B30(D_00163E74[0], arg0, arg1);
    func_0011F398(D_00163E74[0]);
    return temp_s1;
}
