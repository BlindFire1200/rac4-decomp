/* Not matching yet: BYTES 13/96 (tools/try_func.py func_L00_0065B218 --diff). Not part of the build. */
extern void func_L00_005B0ED8(s32, s32, s32, s32);
extern void func_L00_006796D0(s32, s32, s32);
extern s32 D_004CAC20;
extern s32 D_0021DD34;
extern s32 D_001DFCF4;
extern s32 D_001D3F44;

void func_L00_0065B218(void) {
    if (D_004CAC20 != 0 && D_0021DD34 == 3) {
        func_L00_006796D0(D_004CAC20, D_001DFCF4, D_001D3F44 << 11);
        func_L00_005B0ED8(0, 0, 0, 0x60);
    }
}
