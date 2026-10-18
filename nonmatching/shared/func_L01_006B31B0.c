/* Not matching yet: BYTES 14/188 (tools/try_func.py func_L01_006B31B0 --diff). Not part of the build. */
/* cflags: -mno-split-addresses */
typedef struct { s8 pad[0x1D0]; s32 f1D0[4]; } Type1;
extern void func_005A8628(void);
extern void func_L00_005BCAE0(void *, s32, s32);
extern Type1 *func_L00_005F2FB8(void);
extern s32 D_0021E824_[];
#define D_0021E824 (D_0021E824_[0])
extern s32 D_0021E828_[];
#define D_0021E828 (D_0021E828_[0])
extern u8 D_00223A28[4];
u8 D_00220854 = 0;

// Collect per-slot pending flags into D_00223A28 and set D_00220854.
void func_L01_006B31B0(void) {
    s32 i;
    s32 p;
    u8 *f;

    func_005A8628();
    if (D_0021E824 == 0 && D_0021E828 == 0) {
        func_L00_005BCAE0(D_00223A28, 0, 4);
        f = D_00223A28;
        i = 0;
        do {
            p = func_L00_005F2FB8()->f1D0[i];
            if (p != 0 && *(s32 *)(p + 0x98) != 0) {
                f[i] = 1;
                *(s32 *)(p + 0x98) = 0;
            }
            i++;
        } while (i < 4);
    }
    D_00220854 = 1;
}
