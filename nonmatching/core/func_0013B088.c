/* Not matching yet: BYTES 7/108 (tools/try_func.py func_0013B088 --diff). Not part of the build. */
extern s32 func_0012A718();
extern void func_0013AE70();
extern s32 D_00194FE0[];
extern s32 D_1AEE80[];
extern s32 D_1AEEC0[];

/* Stores arg0 in D_1AEEC0, calls func_0012A718 with it; returns D_1AEEC0[1] on success, else 0. */
s32 func_0013B088(s32 arg0) {
    D_1AEEC0[0] = arg0;
    if (func_0012A718(D_1AEE80, 2, 0, D_1AEEC0, 0x80, D_1AEEC0, 0x80, 0, 0) >= 0) {
        return D_1AEEC0[1];
    }
    func_0013AE70(D_00194FE0);
    return 0;
}
