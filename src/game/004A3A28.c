#include "common.h"
typedef struct __attribute__((packed)) { u32 f0[4]; } Type1;
void *func_00501458(void *, void *, void *, void *, void *, void *);
void func_004A3B78(void); void func_004A4578(void); void func_004A45F8(void);
s32 D_002215FC=0, D_00221600=0, D_00221604=0, D_00221608=0;
extern u8 D_307A08[], D_307A20[], D_307A38[], D_307A50[];
extern Type1 D_0021F680;
s32 func_004A3A28(s32 arg0) {
 Type1 copy;
 if(!D_002215FC){func_00501458(D_307A08,(void*)func_004A3B78,(void*)func_004A4578,(void*)func_004A45F8,0,0);D_002215FC=1;}
 if(!D_00221600){func_00501458(D_307A20,(void*)func_004A3B78,(void*)func_004A4578,(void*)func_004A45F8,0,0);D_00221600=1;}
 if(!D_00221604){func_00501458(D_307A38,(void*)func_004A3B78,(void*)func_004A4578,(void*)func_004A45F8,0,0);D_00221604=1;}
 if(!D_00221608){func_00501458(D_307A50,(void*)func_004A3B78,(void*)func_004A4578,(void*)func_004A45F8,0,0);D_00221608=1;}
 copy=D_0021F680; return copy.f0[arg0];
}
