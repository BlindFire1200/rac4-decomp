/* Not matching yet: BYTES 37/664 (tools/try_func.py func_L00_0068A9B8 --diff). Not part of the build. */
extern s32 D_1DFCF0[];

/* Writes a fixed GIF A+D packet (texflush, scissor, frame/zbuf setup) at *arg0 and advances it */
void func_L00_0068A9B8(u64 **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {


    *(*arg0)++ = 0x1000000000000002LL;
    *(*arg0)++ = 0xE;
    *(*arg0)++ = 0;
    *(*arg0)++ = 0x3F;
    *(*arg0)++ = (s64)((D_1DFCF0[2] >> 13) | 0x31000000);
    *(*arg0)++ = 0x4F;
    *(*arg0)++ = 0x1000000000000004LL;
    *(*arg0)++ = 0xE;
    *(*arg0)++ = 0;
    *(*arg0)++ = 0x19;
    *(*arg0)++ = ((s64)(arg1 - 1) << 16) | ((s64)(arg2 - 1) << 48);
    *(*arg0)++ = 0x41;
    *(*arg0)++ = ((s64)D_1DFCF0[1] >> 13) | ((s64)arg3 << 16) | 0x00FFFFFF00000000LL;
    *(*arg0)++ = 0x4D;
    *(*arg0)++ = 0x70802;
    *(*arg0)++ = 0x48;
    *(*arg0)++ = 0x4400000000000001LL;
    *(*arg0)++ = 0x5510;
    *(*arg0)++ = 0x306;
    *(*arg0)++ = 0xFFFFFF;
    *(*arg0)++ = arg4 | ((s64)arg5 << 16) | ((s64)arg8 << 32);
    *(*arg0)++ = arg6 | ((s64)arg7 << 16) | ((s64)arg8 << 32);
    *(*arg0)++ = 0x1000000000008001LL;
    *(*arg0)++ = 0xE;
    *(*arg0)++ = 0;
    *(*arg0)++ = 0x3F;
    *(*arg0)++ = 0x1000000000008001LL;
    *(*arg0)++ = 0xE;
    *(*arg0)++ = 0;
    *(*arg0)++ = 0x3F;
}
