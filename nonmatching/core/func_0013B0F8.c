/* Not matching yet: BYTES 7/108 (tools/try_func.py func_0013B0F8 --diff). Not part of the build. */
extern s32 func_0012A718();
extern void func_0013AE70();
extern s32 D_00195000[];
extern s32 D_1AEE80[];
extern s32 D_1AEEC0[];

/* Stores arg0 at D_1AEEC0, calls func_0012A718, returns the word at offset 4 on success. */
s32 func_0013B0F8(s32 arg0) {
    D_1AEEC0[0] = arg0;
    if (func_0012A718(D_1AEE80, 3, 0, D_1AEEC0, 0x80, D_1AEEC0, 0x80, 0, 0) >= 0) {
        return D_1AEEC0[1];
    }
    func_0013AE70(D_00195000);
    return 0;
}
