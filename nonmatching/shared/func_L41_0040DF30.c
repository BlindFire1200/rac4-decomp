/* Not matching yet: BYTES 14/220 (tools/try_func.py func_L41_0040DF30 --diff). Not part of the build. */
extern s32 func_00540020(s32);
extern void func_L00_0069D028(s32, s32);
extern void func_L00_0069DC48(s32);
extern s32 func_L00_0069DC90(void);
extern void func_L41_0040DC70(s32);
extern void func_L41_0040DCA0(s32, s32);
extern s32 func_L41_0040E4E8(s32, s32);
extern s32 D_00381550[];
s32 D_002212B0[4] __attribute__((section(".sdata"))) = {6, 9, 8, 7};
// Switch context to arg0, show its base entry and each of four sub-entries (hidden when func_L41_0040E4E8 is set), then restore.
void func_L41_0040DF30(s32 arg0) {
    s32 old = func_L00_0069DC90();
    s32 idx;
    s32 i;
    func_L00_0069DC48(arg0);
    idx = func_00540020(arg0);
    func_L00_0069D028(D_00381550[idx], 1);
    for (i = 0; i < 4; i++) {
        func_L00_0069D028(D_00381550[idx] + D_002212B0[i], func_L41_0040E4E8(arg0, i) == 0);
    }
    func_L41_0040DC70(arg0);
    func_L41_0040DCA0(arg0, 1);
    func_L00_0069DC48(old);
}
