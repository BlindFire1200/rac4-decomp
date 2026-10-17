/* Not matching yet: BYTES 9/148 (tools/try_func.py func_L00_007313A8 --diff). Not part of the build. */
void func_00126A30(s32, s32); /* extern */
s32 func_00126A90(void); /* extern */
void func_005662C8(s32); /* extern */
s32 func_0062A4C8(s32); /* extern */
void func_0071BE80(s32); /* extern */
void func_L00_004EF918(void); /* extern */
void func_L00_005FED90(s32, s32, s32); /* extern */
void func_L00_0062A810(s32, s32, s32); /* extern */
void func_L00_0071B478(void); /* extern */
extern s32 D_002233C8[];
extern s32 D_002233CC[];
extern s32 D_0021DA49;
void func_L00_007313A8(s32 arg0) {
    s32 temp_v0;
    func_L00_0071B478();
    func_0071BE80(arg0);
    if (D_002233C8[0] > 0) func_L00_004EF918();
    temp_v0 = func_00126A90();
    func_005662C8(temp_v0);
    func_00126A30(temp_v0, D_002233CC[0]);
    D_0021DA49 = 0;
    func_L00_0062A810(func_0062A4C8(1), 0, 0);
    func_L00_005FED90(0, 0, 0x400);
}
