/* Not matching yet: BYTES 30/164 (tools/try_func.py func_L01_005BAEC0 --diff). Not part of the build. */
typedef int u128 __attribute__((mode(TI)));
extern void func_L00_00605A50(void *);
extern s16 func_L00_004F7240(void *);

void func_L01_005BAEC0(u8 *arg0, u128 *arg1, s32 arg2, f32 arg3, f32 arg4) {
    u8 *temp = arg0 + 0x10;
    func_L00_00605A50(temp);
    *(s32 *)(arg0 + 0x34) = arg2;
    *(f32 *)(arg0 + 0x44) = arg4;
    *(f32 *)(arg0 + 0x38) = arg3 * arg3;
    *(s32 *)(arg0 + 0x30) = 0;
    *(s16 *)(arg0 + 0x3C) = 0;
    *(u128 *)(arg0 + 0x20) = *(u128 *)(arg0 + 0x10);
    *(u128 *)arg0 = *arg1;
    *(s16 *)(arg0 + 0x3E) = func_L00_004F7240(temp);
    *(s16 *)(arg0 + 0x40) = -1;
    *(s16 *)(arg0 + 0x42) = -1;
}
