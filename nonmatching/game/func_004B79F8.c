/* Not matching yet: BYTES 6/108 (tools/try_func.py func_004B79F8 --diff). Not part of the build. */
/* cflags: -mno-split-addresses */
typedef struct Flags {
    char pad0[4];
    u16 f4;
} Flags;

extern Flags D_00171D38[];
extern s32 *D_0021DDA4_[];
#define D_0021DDA4 (D_0021DDA4_[0])
extern void func_004B5D68(s32 i);

/* Toggle the flag pair of D_00171D38 and call func_004B5D68 for each index below *D_0021DDA4. */
void func_004B79F8(void) {
    s32 i;
    u8 t;
    Flags *p = D_00171D38;

    t = p->f4 == 0;
    ((u8 *)p)[5] = t;
    ((u8 *)p)[4] = t;
    i = 0;
    if (*D_0021DDA4 > 0) {
        do {
            func_004B5D68(i);
            i += 1;
        } while (i < *D_0021DDA4);
    }
}
