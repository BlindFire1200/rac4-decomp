/* Not matching yet: BYTES 15/336 (tools/try_func.py func_004D5C30 --diff). Not part of the build. */
typedef struct __attribute__((packed)) Type1 { u64 f00; u64 f08; } Type1;
s32 D_00221A04 = 0;
s32 D_00221A08 = 0;
s32 D_00221A0C = 0;
s32 D_00221A10 = 0;
void func_00501458(void *, void *, void *, void *, void *, void *);
void func_004D5E48(void);
void func_004D5F68(void);
void func_004D5FD0(void);
extern u8 D_31CD70[];
extern u8 D_31CD88[];
extern u8 D_31CDA0[];
extern u8 D_31CDB8[];
extern Type1 D_0021FBC8[];

s32 func_004D5C30(s32 arg0) {
    Type1 local;

    if (D_00221A04 == 0) {
        func_00501458(D_31CD70, func_004D5E48, func_004D5F68, func_004D5FD0, 0, 0);
        D_00221A04 = 1;
    }
    if (D_00221A08 == 0) {
        func_00501458(D_31CD88, func_004D5E48, func_004D5F68, func_004D5FD0, 0, 0);
        D_00221A08 = 1;
    }
    if (D_00221A0C == 0) {
        func_00501458(D_31CDA0, func_004D5E48, func_004D5F68, func_004D5FD0, 0, 0);
        D_00221A0C = 1;
    }
    if (D_00221A10 == 0) {
        func_00501458(D_31CDB8, func_004D5E48, func_004D5F68, func_004D5FD0, 0, 0);
        D_00221A10 = 1;
    }
    local = D_0021FBC8[0];
    return ((s32 *)&local)[arg0];
}
