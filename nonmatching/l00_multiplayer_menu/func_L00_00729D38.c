/* Not matching yet: BYTES 4/156 (tools/try_func.py func_L00_00729D38 --diff). Not part of the build. */
void func_L00_0071B478(void);
void func_L00_0071BB58(void *);
void func_L00_007647B0(s32);
extern s32 D_00220D14_[];
#define D_00220D14 D_00220D14_[0]
void func_L00_00729D38(void *arg0) {
    s32 temp_a0;
    func_L00_0071B478();
    func_L00_0071BB58(arg0);
    *(u8 *)((u8 *)D_00220D14 + 0x114) = 0;
    if (*(u8 *)((u8 *)arg0 + 0x269) == 0) {
        temp_a0 = *(s32 *)((u8 *)arg0 + 0x260);
        if (temp_a0 == 4 || temp_a0 == 1 || temp_a0 == 8 || temp_a0 == 0x40) {
            func_L00_007647B0(9);
        } else if (temp_a0 == 0x10 || temp_a0 == 2 || temp_a0 == 0x80) {
            func_L00_007647B0(8);
        }
    }
}
