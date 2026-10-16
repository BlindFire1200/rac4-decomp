/* Not matching yet: BYTES 16/124 (tools/try_func.py func_004C3988 --diff). Not part of the build. */
s32 func_004A1A60(void *, s32);
s32 func_004C3820(s32);
void func_00505328(s32, s32);
s32 func_00505B20(void);
extern s32 D_003D2298[];
extern s32 D_221888[];
extern s32 D_30B7F8[];

void func_004C3988(void) {
    s32 *base;
    s32 idx;
    s32 val1;
    s32 val2;

    base = (s32 *)((u32)D_30B7F8 + (func_00505B20() * 0x74));
    idx = *(s32 *)((u32)base + 0x14);
    val1 = func_004A1A60(D_221888, D_003D2298[idx * 2]);
    val2 = func_004C3820(idx);
    func_00505328(val1, val2);
}
