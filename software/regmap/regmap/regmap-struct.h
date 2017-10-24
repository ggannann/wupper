/* *************************************************************************** */
/* *************************************************************************** */
/* *************************************************************************** */
/* *************************************************************************** */
/* *************************************************************************** */
/* DO NOT EDIT THIS FILE */
/*  */
/* This file was generated from template '../software/regmap/src/regmap-struct.h.template' */
/* and register map registers-1.0.yaml, version 1.0 */
/* by the script 'wuppercodegen', version: 0.8.0, */
/* using the following commandline: */
/*  */
/* ../software/wuppercodegen/wuppercodegen/cli.py registers-1.0.yaml ../software/regmap/src/regmap-struct.h.template ../software/regmap/regmap/regmap-struct.h */
/*  */
/* Please do NOT edit this file, but edit the source file at '../software/regmap/src/regmap-struct.h.template' */
/*  */
/* *************************************************************************** */
/* *************************************************************************** */
/* *************************************************************************** */
/* *************************************************************************** */
/* *************************************************************************** */


#ifndef REGMAP_STRUCT_H
#define REGMAP_STRUCT_H

#include <sys/types.h>

#include "regmap/regmap-common.h"

#ifdef __cplusplus
extern "C" {
#endif

#pragma GCC diagnostic ignored "-Wpedantic"

/**************************************/
/* Bitfields                          */
/**************************************/

typedef struct
{
  volatile u_long DESCRIPTORS              :  8;  /* bits   7: 0 */
  volatile u_long INTERRUPTS               :  8;  /* bits  15: 8 */
} flxcard_generic_constants_t;

typedef struct
{
  volatile u_long READ_NOT_WRITE           :  1;  /* bits   0: 0 */
  volatile u_long SLAVE_ADDRESS            :  7;  /* bits   7: 1 */
  volatile u_long DATA_BYTE1               :  8;  /* bits  15: 8 */
  volatile u_long DATA_BYTE2               :  8;  /* bits  23:16 */
  volatile u_long WRITE_2BYTES             :  1;  /* bits  24:24 */
  volatile u_long I2C_FULL                 :  1;  /* bits  25:25 */
} flxcard_i2c_wr_t;

typedef struct
{
  volatile u_long I2C_DOUT                 :  8;  /* bits   7: 0 */
  volatile u_long I2C_EMPTY                :  1;  /* bits   8: 8 */
} flxcard_i2c_rd_t;



/**************************************/
/* Structs for arrays                 */
/**************************************/




/**************************************/
/* Main struct                        */
/**************************************/

typedef struct
{
/* Bar2 */
/* GenericBoardInformation */
  volatile u_long                REG_MAP_VERSION;               /* 0x0000 - 0x0007 (8) */
  u_char                         unused0[8];                    /* 0x0008 - 0x000F (8) */

  volatile u_long                BOARD_ID_TIMESTAMP;            /* 0x0010 - 0x0017 (8) */
  u_char                         unused1[8];                    /* 0x0018 - 0x001F (8) */

  volatile u_long                BOARD_ID_SVN;                  /* 0x0020 - 0x0027 (8) */
  u_char                         unused2[8];                    /* 0x0028 - 0x002F (8) */

  volatile u_long                STATUS_LEDS;                   /* 0x0030 - 0x0037 (8) */
  u_char                         unused3[8];                    /* 0x0038 - 0x003F (8) */

  flxcard_generic_constants_t    GENERIC_CONSTANTS;             /* 0x0040 - 0x0047 (8) */
  u_char                         unused4[8];                    /* 0x0048 - 0x004F (8) */

  volatile u_long                CARD_TYPE;                     /* 0x0050 - 0x0057 (8) */
  u_char                         unused5[8];                    /* 0x0058 - 0x005F (8) */

  u_char                         unused6[0x0FA0];               /* 0x0060 - 0x0FFF (4000) */

/* ApplicationSpecific */
  volatile u_long                LFSR_SEED_0;                   /* 0x1000 - 0x1007 (8) */
  u_char                         unused7[8];                    /* 0x1008 - 0x100F (8) */

  volatile u_long                LFSR_SEED_1;                   /* 0x1010 - 0x1017 (8) */
  u_char                         unused8[8];                    /* 0x1018 - 0x101F (8) */

  volatile u_long                LFSR_SEED_2;                   /* 0x1020 - 0x1027 (8) */
  u_char                         unused9[8];                    /* 0x1028 - 0x102F (8) */

  volatile u_long                LFSR_SEED_3;                   /* 0x1030 - 0x1037 (8) */
  u_char                         unused10[8];                   /* 0x1038 - 0x103F (8) */

  volatile u_long                APP_MUX;                       /* 0x1040 - 0x1047 (8) */
  u_char                         unused11[8];                   /* 0x1048 - 0x104F (8) */

  volatile u_long                LFSR_LOAD_SEED;                /* 0x1050 - 0x1057 (8) */
  u_char                         unused12[8];                   /* 0x1058 - 0x105F (8) */

  volatile u_long                APP_ENABLE;                    /* 0x1060 - 0x1067 (8) */
  u_char                         unused13[8];                   /* 0x1068 - 0x106F (8) */

  u_char                         unused14[0x0F90];              /* 0x1070 - 0x1FFF (3984) */

/* HouseKeepingControlsAndMonitors */
  u_char                         unused15[0x0300];              /* 0x2000 - 0x22FF (768) */

  volatile u_long                MMCM_MAIN_PLL_LOCK;            /* 0x2300 - 0x2307 (8) */
  u_char                         unused16[8];                   /* 0x2308 - 0x230F (8) */

  flxcard_i2c_wr_t               I2C_WR;                        /* 0x2310 - 0x2317 (8) */
  u_char                         unused17[8];                   /* 0x2318 - 0x231F (8) */

  flxcard_i2c_rd_t               I2C_RD;                        /* 0x2320 - 0x2327 (8) */
  u_char                         unused18[8];                   /* 0x2328 - 0x232F (8) */

  volatile u_long                FPGA_CORE_TEMP;                /* 0x2330 - 0x2337 (8) */
  u_char                         unused19[8];                   /* 0x2338 - 0x233F (8) */

  volatile u_long                FPGA_CORE_VCCINT;              /* 0x2340 - 0x2347 (8) */
  u_char                         unused20[8];                   /* 0x2348 - 0x234F (8) */

  volatile u_long                FPGA_CORE_VCCAUX;              /* 0x2350 - 0x2357 (8) */
  u_char                         unused21[8];                   /* 0x2358 - 0x235F (8) */

  volatile u_long                FPGA_CORE_VCCBRAM;             /* 0x2360 - 0x2367 (8) */
  u_char                         unused22[8];                   /* 0x2368 - 0x236F (8) */

  volatile u_long                FPGA_DNA;                      /* 0x2370 - 0x2377 (8) */
  u_char                         unused23[8];                   /* 0x2378 - 0x237F (8) */

  u_char                         unused24[0x0480];              /* 0x2380 - 0x27FF (1152) */

  volatile u_long                INT_TEST_4;                    /* 0x2800 - 0x2807 (8) */
  u_char                         unused25[8];                   /* 0x2808 - 0x280F (8) */

  volatile u_long                INT_TEST_5;                    /* 0x2810 - 0x2817 (8) */
  u_char                         unused26[8];                   /* 0x2818 - 0x281F (8) */

} flxcard_bar2_regs_t;


#pragma GCC diagnostic pop

#ifdef __cplusplus
}
#endif

#endif /* REGMAP_STRUCT_H */