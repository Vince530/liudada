/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2021. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

/********************************************************************************************
 *     LEGAL DISCLAIMER
 *
 *     (Header of MediaTek Software/Firmware Release or Documentation)
 *
 *     BY OPENING OR USING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 *     THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE") RECEIVED
 *     FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON AN "AS-IS" BASIS
 *     ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, EXPRESS OR IMPLIED,
 *     INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR
 *     A PARTICULAR PURPOSE OR NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY
 *     WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 *     INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK
 *     ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
 *     NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S SPECIFICATION
 *     OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
 *
 *     BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE LIABILITY WITH
 *     RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION,
 *     TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE
 *     FEES OR SERVICE CHARGE PAID BY BUYER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 *     THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE WITH THE LAWS
 *     OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF LAWS PRINCIPLES.
 ************************************************************************************************/
#include "camera_custom_nvram.h"
#include "camera_custom_isp_nvram.h"

#include "inc.h"

#define AE_BASE                                                      AE_AE_BASE

const AE_NVRAM_T AE_BASE[1] = {
    // IDX_0
    {
        {
            {
                9385001,
                6885,
                0,
                0,
                0,
                0,
            },
            //ae_nvram_hw_config_t hw;
            {
                0,
                0,
                0,
                0,
                350,         // u4FocusLength_100x
                18,         // u4LensFno, Fno = 2.0
                1024,       // u4MinGain, 1024 base =  1x
                16384,      // u4MaxGain, 16x
                100,        // u4MiniISOGain, ISOxx
                16,         // u4GainStepUnit, 1x/8
                11840,      // u4PreExpUnit
                30,         // u4PreMaxFrameRate
                160,
                12261,      // u4VideoExpUnit
                30,         // u4VideoMaxFrameRate
                160,
                9250,       // u4CapExpUnit
                30,         // u4CapMaxFrameRate
                160,
                6693,       // u4Video1ExpUnit
                120,        // u4Video1MaxFrameRate
                160,
                15047,      // u4Video2ExpUnit
                30,         // u4Video2MaxFrameRate
                160,
                19770,      // u4Custom1ExpUnit
                30,         // u4Custom1MaxFrameRate
                160,
                19770,      // u4Custom2ExpUnit
                30,         // u4Custom2MaxFrameRate
                160,
                19770,      // u4Custom3ExpUnit
                30,         // u4Custom3MaxFrameRate
                160,
                19770,      // u4Custom4ExpUnit
                30,         // u4Custom4MaxFrameRate
                160,
                19770,      // u4Custom5ExpUnit
                30,         // u4Custom5MaxFrameRate
                160,
            },
            {0}
        },
        {
            {
                9385001,
                6885,
                0,
                0,
                0,
                0,
            },
            //ae_nvram_stat_config_t stat;
            {
                {
                    4,
                    1,
                    0,                      //uint8_t aepixel_hist0StartBlockXRatio;       //Histogram 0 window config start block X ratio (0~100)
                    100,                    //uint8_t aepixel_hist0EndBlockXRatio;         //Histogram 0 window config end block X ratio (0~100)
                    0,                      //uint8_t aepixel_hist0StartBlockYRatio;       //Histogram 0 window config start block Y ratio (0~100)
                    100,                    //uint8_t aepixel_hist0EndBlockYRatio;         //Histogram 0 window config end block Y ratio (0~100)
                    3,//0 for isp6.0 RGB    //uint8_t aepixel_hist0OutputMode;               //Histogram 0 output source mode
                    0,                      //uint8_t aepixel_hist1StartBlockXRatio;       //Histogram 1 window config start block X ratio (0~100)
                    100,                    //uint8_t aepixel_hist1EndBlockXRatio;         //Histogram 1 window config end block X ratio (0~100)
                    0,                      //uint8_t aepixel_hist1StartBlockYRatio;       //Histogram 1 window config start block Y ratio (0~100)
                    100,                    //uint8_t aepixel_hist1EndBlockYRatio;         //Histogram 1 window config end block Y ratio (0~100)
                    0,//1 for isp6.0 R      //uint8_t aepixel_hist1OutputMode;               //Histogram 1 output source mode
                    0,                      //uint8_t aepixel_hist2StartBlockXRatio;       //Histogram 2 window config start block X ratio (0~100)
                    100,                    //uint8_t aepixel_hist2EndBlockXRatio;         //Histogram 2 window config end block X ratio (0~100)
                    0,                      //uint8_t aepixel_hist2StartBlockYRatio;       //Histogram 2 window config start block Y ratio (0~100)
                    100,                    //uint8_t aepixel_hist2EndBlockYRatio;         //Histogram 2 window config end block Y ratio (0~100)
                    1,//2 for isp6.0 G      //uint8_t aepixel_hist2OutputMode;               //Histogram 2 output source mode
                    0,                      //uint8_t aepixel_hist3StartBlockXRatio;       //Histogram 3 window config start block X ratio (0~100)
                    100,                    //uint8_t aepixel_hist3EndBlockXRatio;         //Histogram 3 window config end block X ratio (0~100)
                    0,                      //uint8_t aepixel_hist3StartBlockYRatio;       //Histogram 3 window config start block Y ratio (0~100)
                    100,                    //uint8_t aepixel_hist3EndBlockYRatio;         //Histogram 3 window config end block Y ratio (0~100)
                    2,//3 for isp6.0 B      //uint8_t aepixel_hist3OutputMode;               //Histogram 3 output source mode
                    0,                      //uint8_t aepixel_hist4StartBlockXRatio;       //Histogram 4 window config start block X ratio (0~100)
                    100,                    //uint8_t aepixel_hist4EndBlockXRatio;         //Histogram 4 window config end block X ratio (0~100)
                    0,                      //uint8_t aepixel_hist4StartBlockYRatio;       //Histogram 4 window config start block Y ratio (0~100)
                    100,                    //uint8_t aepixel_hist4EndBlockYRatio;         //Histogram 4 window config end block Y ratio (0~100)
                    4,//4 for isp6.0 Y      //uint8_t aepixel_hist4OutputMode;               //Histogram 4 output source mode
                    25,                     //uint8_t aepixel_hist5StartBlockXRatio;       //Histogram 5 window config start block X ratio (0~100)
                    75,                     //uint8_t aepixel_hist5EndBlockXRatio;         //Histogram 5 window config end block X ratio (0~100)
                    25,                     //uint8_t aepixel_hist5StartBlockYRatio;       //Histogram 5 window config start block Y ratio (0~100)
                    75,                     //uint8_t aepixel_hist5EndBlockYRatio;         //Histogram 5 window config end block Y ratio (0~100)
                    4,//4 for isp6.0 CY     //uint8_t aepixel_hist5OutputMode;               //Histogram 5 output source mode
                },
            },
            { 0 }
        },
        {
            {
                9385001,
                6885,
                0,
                0,
                0,
                0,
            },
            //ae_nvram_flow_ctrl_t flow;
            {
                true,            //uint32_t rot_wt_en;        // AE rotate the weighting automatically or not
                true,            //uint32_t en_fdae;                        /*bEnableFaceAE, Enable the Face AE or not*/
                true,            //uint32_t EnableMeterAE;                      // Enable the Meter AE or not
                false,           //uint32_t EnableTouchSmooth;              // enable Touch mode smooth with perframe
                true,            // pre_idx_enable
                true,            // ev0_strobe_enable
                1,               //  uint32_t min_cwr;//MinCWRecommend;           // mini target value
                7200,            //  uint32_t max_cwr;//MaxCWRecommend;          // max target value
                -50,             //int8_t min_bv;                          // mini BV value.
                -21,             // int32_t  bvoffset;                  // Calibrate BV offset
                50,              //    uint32_t init_ae_idx; // InitIndex;                 // AE initiail index
                10,               //uint32_t FinerEvIndexBase;            // 1:0.1EV 2:0.05EV 3:0.033EV  10:0.01
                ////CCU_strAEStableThd AEStableThd;
                0,          //uint32_t InStableThd;  // 0.08EV
                1,          //uint32_t OutStableThd; // 0.08EV
                true,       //uint32_t enableaemodestablethd;         // enable video ae stable threshold setting
                3,          //uint32_t VideoInStableThd;               // video mode each index 0.08EV
                12,         //uint32_t VideoOutStableThd;              // video mode each index 0.08EV
                false,                  // 1 enable the AF Pline, 0 disable the AF Pline (bypass)
                {
                    73, 30,       // {LV value, AF frame rate}
                    65, 25,
                    55, 19,
                    45, 17,
                    0, 17,
                },
                false,                  // 1 enable the AF Pline, 0 disable the AF Pline (bypass)
                {
                    73, 15,       // {LV value, AF frame rate}
                    65, 15,
                    55, 15,
                    45, 15,
                    0, 10,
                },
                true,    //long_cap_enable
                200000,  //long_cap_thd
                960,     //uint32_t cwr_lowbnd;                 /*u4CwrLowBound, metering min CWR value*/
                3920,    //uint32_t cwr_highbnd;                /*u4CwrHighBound, metering max CWR value*/
                400,     //uint32_t meterwei;              /*u4MeterWeight, metering weight betwenn CWR and MeterTarget*/
                640,     //uint32_t meter_y_lowbnd; /*uMeteringYLowBound*/
                800,     //uint32_t meter_y_highbnd; /*uMeteringYHighBound*/
                120,     //uint32_t meter_stb_max; /*u4MeteringStableMax*/
                80,      //uint32_t meter_stb_min; /*u4MeteringStableMin*/
                //
                ////CCU_strWeightTable Weighting[MAX_WEIGHT_TABLE];
                {
                    {
                        AE_WEIGHTING_CENTRALWEIGHT,
                        {
                            6, 19, 28, 19, 6,
                            19, 60, 88, 60, 19,
                            28, 88, 160, 88, 28,
                            19, 60, 88, 60, 19,
                            6, 19, 28, 19, 6,
                        },
                    },
                    {
                        AE_WEIGHTING_SPOT,
                        {
                            0, 0, 0, 0, 0,
                            0, 0, 0, 0, 0,
                            0, 0, 1, 0, 0,
                            0, 0, 0, 0, 0,
                            0, 0, 0, 0, 0,
                        },
                    },
                    {
                        AE_WEIGHTING_AVERAGE,
                        {
                            1, 1, 1, 1, 1,
                            1, 1, 1, 1, 1,
                            1, 1, 1, 1, 1,
                            1, 1, 1, 1, 1,
                            1, 1, 1, 1, 1,
                        },
                    },
                    {
                        AE_WEIGHTING_AVERAGE,
                        {
                            1, 1, 1, 1, 1,
                            1, 1, 1, 1, 1,
                            1, 1, 1, 1, 1,
                            1, 1, 1, 1, 1,
                            1, 1, 1, 1, 1,
                        },
                    },
                },
                ////CCU_strAELimiterTable strAELimiterData;
                {
                    2,             //int8_t lv1_gain;               /*iLEVEL1_GAIN;*/
                    10,            //int8_t lv2_gain;               /*iLEVEL2_GAIN;*/
                    18,            //int8_t lv3_gain;               /*iLEVEL3_GAIN;*/
                    28,            //int8_t lv4_gain;               /*iLEVEL4_GAIN;*/
                    40,            //int8_t lv5_gain;               /*iLEVEL5_GAIN;*/
                    50,            //int8_t lv6_gain;               /*iLEVEL6_GAIN;*/
                    0,             //int8_t lv1_tar_diff;               /*iLEVEL1_TARGET_DIFFERENCE;*/
                    4,             //int8_t lv2_tar_diff;               /*iLEVEL2_TARGET_DIFFERENCE;*/
                    7,             //int8_t lv3_tar_diff;               /*iLEVEL3_TARGET_DIFFERENCE;*/
                    7,             //int8_t lv4_tar_diff;               /*iLEVEL4_TARGET_DIFFERENCE;*/
                    7,             //int8_t lv5_tar_diff;               /*iLEVEL5_TARGET_DIFFERENCE;*/
                    7,             //int8_t lv6_tar_diff;               /*iLEVEL6_TARGET_DIFFERENCE;*/
                    2,             //int8_t lv1_gainh;              /*iLEVEL1_GAINH;*/
                    -2,            //int8_t lv1_gainl;              /*iLEVEL1_GAINL;*/
                    6,             //int8_t lv2_gainh;              /*iLEVEL2_GAINH;*/
                    -7,            //int8_t lv2_gainl;              /*iLEVEL2_GAINL;*/
                    8,             //int8_t lv3_gainh;              /*iLEVEL3_GAINH;*/
                    -9,            //int8_t lv3_gainl;              /*iLEVEL3_GAINL;*/
                    10,            //int8_t lv4_gainh;              /*iLEVEL4_GAINH;*/
                    -12,           //int8_t lv4_gainl;              /*iLEVEL4_GAINL;*/
                    12,            //int8_t lv5_gainh;              /*iLEVEL5_GAINH;*/
                    -16,           //int8_t lv5_gainl;              /*iLEVEL5_GAINL;*/
                    15,            //int8_t lv6_gainh;              /*iLEVEL6_GAINH;*/
                    -20,           //int8_t lv6_gainl;              /*iLEVEL6_GAINL;*/
                    1,             //int8_t gain_diff_lim;      /*iGAIN_DIFFERENCE_LIMITER;*/
                },
                //CCU_strLightSensor strLightSensor;
                {
                    0,
                    1,
                    {0, 0, 0, 0, 0, 0, 0, 0,},
                    {0, 0, 0, 0, 0, 0, 0, 0,},
                },
                //ae_ais_param ais_param;
                {
                    {
                        3
                    },
                    {
                        5,
                        true,
                        20,
                        50
                    },
                    {
                        false,
                        0,
                        40,
                        384,
                        8192,
                        5,
                        1
                    },
                    5,
                    6400
                }
            },
            { 
                0,           
                0,
                0,
                1,
                128, 400, 800, 3200, 4095, 100, 100, 100, 100, 80,
                512, 400, 800, 3200, 4095, 100, 100, 100, 100, 90,
                100,
                1,
                2,
                300,
             }
        },
        {
            {
                9432001,
                6885,
                0,
                0,
                0,
                0,
            },
            //ae_nvram_metering_para_t metering;
            {
                ////CCU_strAECWRTempSmooth  AETempSmooth;
                {
                    false,              //uint32_t   ts_hs_en;                   // enable AE HS Target temp smooth
                    false,              //uint32_t   ts_abl_en;                  // enable AE ABL Target temp smooth
                    false,              //uint32_t   ts_aoe_en;                  // enable AE AOE Target temp smooth
                    false,              //uint32_t   ts_ns_en;                   // enable AE NS Target temp smooth
                    false,              //uint32_t   ts_face_en;                 // enable AE Face Target temp smooth
                    false,              //uint32_t   ts_vdo_en;                // enable AE Video Target temp smooth
                    false,              //uint32_t   ts_mt_en;                // enable AE Main Target temp smooth
                    false,              //uint32_t   ts_hsv4p0_en;                // enable AE HSV4p0 Target temp smooth
                },
    
                752,             //    uint32_t ae_target;// AETarget;                  // central weighting target
                47,              //    uint32_t strb_ae_target;//StrobeAETarget;            // central weighting target
                4,               //    uint32_t cfg_bl_wet;//u4BackLightWeight;           // Back light weighting value
                32,              //    uint32_t cfg_hs_wet;//u4HistStretchWeight;         // Histogram weighting value
                4,               //    uint32_t cfg_aoe_wet;//u4AntiOverExpWeight;         // Anti over exposure weighting value
                //
    
                120,             // uint32_t hs_evd_bpcnt;
                120,             // uint32_t hs_evd_dpcnt;
    
    
                ////
                ////    //CCU_AE_ABL_SPEC_T       rABL_Spec;
                false,   //    uint32_t abl_en;//ABL_Spec_EnableBlackLight;           // enable back light detector
                0,   //    uint32_t abl_wet;// ABL_Spec_BackLightWeight;           // Back light weighting value
                500,    //    uint32_t abl_spc_pcnt;//ABL_Spec_Pcent;                     // 1%=10, 0~1000
                560,    //    uint32_t abl_spc_thd;//ABL_Spec_Thd;                       // 0~255
                4095,   //    uint32_t abl_spc_c_hbd;//ABL_Spec_CenterHighBnd;             // center luminance
                1824,   //    uint32_t abl_spc_tgt_str;//ABL_Spec_TargetStrength;            // final target limitation
                3000,   //    int32_t abl_fgbgev_r_x1;//ABL_Spec_FgBgEVRatio_u4X1;
                0,      //    int32_t abl_fgbgev_r_y1;//ABL_Spec_FgBgEVRatio_u4Y1;
                6200,   //    int32_t abl_fgbgev_r_x2;// ABL_Spec_FgBgEVRatio_u4X2;
                1024,    // int32_t abl_fgbgev_r_y2;//ABL_Spec_FgBgEVRatio_u4Y2;
                4000,   //    int32_t abl_bv_r_x1;//ABL_Spec_BVRatio_u4X1;
                0,      //    int32_t abl_bv_r_y1;//ABL_Spec_BVRatio_u4Y1;
                8000,   //    int32_t abl_bv_r_x2;// ABL_Spec_BVRatio_u4X2;
                1024,    //    int32_t abl_bv_r_y2;// ABL_Spec_BVRatio_u4Y2;
                true,                       //    uint32_t abl_tgt_strbybv_en;//ABL_Spec_EnableTargetStrengthByBV;         //Enable TargetStrength change along BV
                4,                          //    uint32_t abl_spc_tbll; //ABL_Spec_TblLength;                                //Max size : 8
                {1100, 2600, 4500, 6000},    //    uint32_t abl_spc_bv[AE_ABL_STRENGTH_NUM];// ABL_Spec_Bv[AE_ABL_STRENGTH_NUM];         //size must large than u4TblLength
                { 520, 1200, 1320, 1440},  //    int32_t  abl_spc_tgtbybv[AE_ABL_STRENGTH_NUM];// ABL_Spec_TargetStrengthByBV[AE_ABL_STRENGTH_NUM];     //TargetStrength TBL along BV
                //
                //  //CCU_AE_NS_SPEC_T        rNS_Spec;
                true,  //   uint32_t ns_en;       // enable night scene
                10,    //   uint32_t ns_pcnt;                 // 1=0.1%, 0~1000
                2000,  // NS Normal Threshold, 0~4095 (4096 base): ns_thd
                658,   // NS Flat Threshold: ns_flat_thd
                205,   //   uint32_t ns_bt_pcnt;       // 1=0.1%bright tone percentage
                800,   //   uint32_t ns_bt_thd;         // < 255, bright tone THD
                500,   //   uint32_t ns_lb_pcnt;           // darkest percent, 1%=10, 0~1000
                100,   // NS Drak Tone Threshold, 0~4095 (4096 base): ns_lb_thd
                150,   // NS Drak Tone Upper Bound, 0~4095 (4096 base): ns_lb_thd_limit
                50,    //   uint32_t ns_flat_bt_pcnt;       // the percentage of the brightest part used to cal flatness
                300,   //   uint32_t ns_flat_dk_pcnt;         // the percentage of the darkest part used to cal flatness
                1200,   //  int32_t ns_flat_rt_x1;
                1024,   //  int32_t ns_flat_rt_y1;
                2700,   //  int32_t ns_flat_rt_x2;
                0,       // int32_t ns_flat_rt_y2;
                -1000,  //  int32_t ns_bvrt_x1;
                1024,   //  int32_t ns_bvrt_y1;
                2500,   //  int32_t ns_bvrt_x2;
                0,       // int32_t ns_bvrt_y2;
                1,  // Enable NS Sky Supress: ns_skysup_en
                -5000, // ns_sky_bvrt_x1;
                1024,  // ns_sky_bvrt_y1;
                -2500, // ns_sky_bvrt_x2;
                0,       // int32_t ns_sky_bvrt_y2;
                //  //CCU_strAEAOEInputParm rAEAOENVRAMParam;
                2,               // AOE strength index: 0//1//2:  hdr_aoe_strth_idx;
                130,             // Compensate BV in nonlinear: hdr_aoe_bvcomp_rt;
                {28, 28, 28},   //  uint32_t   hdr_aoe_y_tgt[AE_AOE_STRENGTH_NUM];                     // for AOE target , LE target , SE target -> 47
                {25, 25, 25,},   // uint32_t   hdr_aoe_oe_pcnt[AE_AOE_STRENGTH_NUM];         // high light percentage  x / 1000 -> 1%
                {210, 210, 210,},  //   uint32_t   hdr_aoe_oe_bnd[AE_AOE_STRENGTH_NUM];             // for Over expsosure boud -> 184
                {10, 10, 10,},   // uint32_t   hdr_aoe_oe_d_bnd[AE_AOE_STRENGTH_NUM];          // for Min luminance bound -> 20
                {950, 950, 950,},  //   uint32_t   hdr_aoe_lowlit_pcnt[AE_AOE_STRENGTH_NUM];  // for Lowlight bound percentage / 1000 ,95%
                {1, 1, 1,},    //   uint32_t   hdr_aoe_lowlit_bnd[AE_AOE_STRENGTH_NUM];     // for Lowlight bound , 95% -> 10
                {145, 145, 145,},  //   uint32_t   hdr_aoe_scene_lv_l[AE_AOE_STRENGTH_NUM];             // low LV start to reduce AOE -> 100
                {180, 180, 180,},  //   uint32_t   hdr_aoe_scene_lv_h[AE_AOE_STRENGTH_NUM];             // High LV start to reduce AOE -> 150
                {40, 40, 40,},   // uint32_t   hdr_aoe_swhdr_le_bnd[AE_AOE_STRENGTH_NUM];  // LE Condition for SW HDR -> 40
                //
    
                //   //CCU_strNS_CDF       NsCdfRatio;
                true,                               //    uint32_t ns_cdf_rt_en;//NsCdfRatio_bEnable;            //enable NS CDF
                700,                                //    uint32_t ns_cdf_rt_pcnt;//NsCdfRatio_u4Pcent;            // 1=0.1%, 0~1000
                {-3500, -2000},                     //    int32_t   ns_cdf_rt_x[2]; // NsCdfRatio_i4NS_CDFRatio_X[2];
                {1024,   0},                        //  uint32_t ns_cdf_rt_y[2]; //NsCdfRatio_u4NS_CDFRatio_Y[2];
                //
                //  //CCU_strHSFlatSkyCFG     HSFlatSkyEnhance; //HS adaptive Prob Threshold by real BV
                true,                   //    uint32_t hs_sky_enhc_en;//HSFlatSkyEnhance_bEnableFlatSkyEnhance;                                // enable HS adaptive THD by realBV
                2,                      //    uint8_t  hs_sky_enhc_thdin;//HSFlatSkyEnhance_uSkyDetInThd;
                5,                      //    uint8_t  hs_sky_enhc_thdout;//HSFlatSkyEnhance_uSkyDetOutThd;
                2560,                   //    uint32_t hs_skyen_thd;//HSFlatSkyEnhance_u4FlatSkyTHD;
                1500,                   //    uint32_t hs_skyen_evd_idx;//HSFlatSkyEnhance_u4FlatSkyEVD;
                {8000,  11000},         //    int32_t  hs_skyehc_bvrt_x[2];//HSFlatSkyEnhance_u4BVRatio_X[2];
                {0, 1024},               // int32_t  hs_skyehc_bvrt_y[2];//HSFlatSkyEnhance_u4BVRatio_Y[2];
                //  //CCU_strABL_absDiff      ABLabsDiff;
                true,                        //    uint32_t abl_absdiff_en;//ABLabsDiff_bEnableABLabsDiff;                                // enable enhance ABL(absDiff)
                {2500,  5000},               //    int32_t  abl_evdiff_r_x[2];//ABLabsDiff_u4EVDiffRatio_X[2];
                {0, 1024},                   //    int32_t  abl_evdiff_r_y[2];//ABLabsDiff_u4EVDiffRatio_Y[2];
                {9000,  11000},              //    int32_t  abl_bv_r_x[2];//ABLabsDiff_u4BVRatio_X[2];
                {0, 1024},                    //    int32_t  abl_bv_r_y[2];// ABLabsDiff_u4BVRatio_Y[2];
                //v4.0 + 6s
                true,              //  uint32_t ae_v4_meter_en; //AEv4p0MeterEnable;
                //  //CCU_strMainTargetCFG MainTargetCFG;
                true,               //  uint32_t main_tgt_en;//MainTargetCFG_EnableAEMainTarget;
                true,               // EnableAEMainTarget(v6)
                1024,               //  uint32_t mt_wet;//MainTargetCFG_MainTargetWeight;     //weight 1024 base
                //  uint8_t   mt_wei_tbl[AE_V4P0_BLOCK_NO * AE_V4P0_BLOCK_NO];//MainTargetCFG_MainTargetWeightTbl[AE_V4P0_BLOCK_NO * AE_V4P0_BLOCK_NO];  //15x15 Gau weight table
                {
                    //u4MainTargetWeightTbl[15][15] : Gau weight table
                    0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                    0, 43, 50,  57,  65,  68,  71,  74,  71,  68,  65,  57, 50, 43, 0,
                    0, 50, 58,  67,  76,  79,  83,  86,  83,  79,  76,  67, 58, 50, 0,
                    0, 57, 67,  77,  87,  91,  95,  99,  95,  91,  87,  77, 67, 57, 0,
                    0, 65, 76,  87,  98, 102, 107, 116, 107, 102,  98,  87, 76, 65, 0,
                    0, 68, 79,  91, 102, 107, 116, 128, 116, 107, 102,  91, 79, 68, 0,
                    0, 71, 83,  95, 107, 116, 128, 142, 128, 116, 107,  95, 83, 71, 0,
                    0, 74, 86,  99, 116, 128, 142, 152, 142, 128, 116,  99, 86, 74, 0,
                    0, 71, 83,  95, 107, 116, 128, 142, 128, 116, 107,  95, 83, 71, 0,
                    0, 68, 79,  91, 102, 107, 116, 128, 116, 107, 102,  91, 79, 68, 0,
                    0, 65, 76,  87,  98, 102, 107, 116, 107, 102,  98,  87, 76, 65, 0,
                    0, 57, 67,  77,  87,  91,  95,  99,  95,  91,  87,  77, 67, 57, 0,
                    0, 50, 58,  67,  76,  79,  83,  86,  83,  79,  76,  67, 58, 50, 0,
                    0, 43, 50,  57,  65,  68,  71,  74,  71,  68,  65,  57, 50, 43, 0,
                    0, 0,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                },
                -1000,                   //  int32_t mt_tgt_bvrt_x1;//MainTargetCFG_TargetBVRatioTbl_u4X1;
                688,                     //  int32_t mt_tgt_bvrt_y1;// MainTargetCFG_TargetBVRatioTbl_u4Y1;
                8000,                    //  int32_t mt_tgt_bvrt_x2;//MainTargetCFG_TargetBVRatioTbl_u4X2;
                992,                      //  int32_t mt_tgt_bvrt_y2;// MainTargetCFG_TargetBVRatioTbl_u4Y2;
    
                //========== 6s ============
                // TargetMidRatio
                400,                   // TargetMidRatioTbl.i4X1 :MidRatio
                0,                       // TargetMidRatioTbl.i4Y1 :Target
                800,                    // TargetMidRatioTbl.i4X2  :MidRatio
                1024,                   // TargetMidRatioTbl.i4Y2 :Target
    
                // TargetBVRatio
                -1000,                   // TargetBVRatio.i4X1 :BV
                820,                       // TargetBVRatio.i4Y1 :Target
                10000,                    // TargetBVRatio.i4X2  :BV
                1178,                      // TargetBVRatio.i4Y2 :Target
    
                // MidRatio_Fixrt%
                550,                           // fix_midrt_value
    
                500,                          // DR: B2D x1
                1024,                       //  DR: B2D y1
                2500,                       //  Fixed Ratio x2
                0,                             //   Fixed Ratio y2
    
                { 400, 800 },            //H/L Bound
                7,
                //BV LUT
                { -1500, 0, 1000, 3000, 5000, 7000, 9000, 0 }, //max size 8: mt_thd_bv
                //base LUT
                { 520, 584 ,656, 672, 704, 704, 696, 0 },      //max size 8: mt_thd_based;
                //exp LUT
                { 525, 650 ,800, 925, 1000, 1100, 1200, 0 },   //max size 8: mt_thd_exp;
    
                true,                   //  uint32_t mt_clrrt_wet_en;//MainTargetCFG_EnableColorWTRatio;
                //  //CCU_AE_TARGET_PROB_T ColorWTRatioTbl;
                0,                          //  int32_t mt_clrrt_wet_x1;//MainTargetCFG_ColorWTRatioTbl_u4X1;
                600,                        //  int32_t mt_clrrt_wet_y1;
                100,                        //  int32_t mt_clrrt_wet_x2;
                1024,                        //  int32_t mt_clrrt_wet_y2;
                100,                           //  uint8_t mt_clrsup_rt_r;//MainTargetCFG_uColorSupRatioR;
                100,                           //  uint8_t mt_clrsup_rt_g;
                0,                             //  uint8_t mt_clrsup_rt_b;
                //  //CCU_AE_TARGET_PROB_T ColorSupBVRatioTbl;
                1000,                        //  int32_t mt_clrsup_bv_x1;//MainTargetCFG_ColorSupBVRatioTbl_u4X1;
                700,                         //  int32_t mt_clrsup_bv_y1;//MainTargetCFG_ColorSupBVRatioTbl_u4Y1;
                6000,                        //  int32_t mt_clrsup_bv_x2;// MainTargetCFG_ColorSupBVRatioTbl_u4X2;
                1024,                         //  int32_t mt_clrsup_bv_y2;//MainTargetCFG_ColorSupBVRatioTbl_u4Y2;
    
                //======================== 6s ============================
                //HSv6p0CFG
                true,                   //bEnableHSv6p0
                2048,                  //u4HSv6p0Weight
                //BT
                7,                      //u4BVSize ,max8
                7,                      //u4EVDSize ,max8
                { -1500, -500, 500, 2500, 5000, 8000, 10000 },    //i4HS_BVRatio, length = u4BVSize
                { 28, 30, 42, 50, 50, 35, 32 },    //u4HS_PcntRatio, length = u4BVSize, 80 equal 8%
                { 500, 1000, 2500, 4200, 5600, 6300, 7000 },    //u4HS_EVDRatio , length = u4EVDSize
                {
                    //BV0-THD
                    1600, 1760, 2000, 2000, 2080, 2080, 1960, 
                    //BV1-THD
                    1840,2112, 2528, 2480, 2480, 2400, 2400, 
                    //BV2-THD
                    1920, 2368,2752, 3360, 3360, 3360, 3440,
                    //BV3-THD
                    2160, 2688, 3360,3800, 3680, 3680, 3680, 
                    //BV4-THD
                    2240, 2880, 3440, 3800,3840, 3840, 3920,
                    //BV5-THD
                    2400, 3200, 3680, 3880, 3920,3840, 3680,
                    //BV6-THD
                    2560, 3200, 3680, 3920, 4000, 3840,3520, 
                },
                // PseudoY
                3,
                6,
                { -1000, 3500, 8000},
                { 10, 30, 60, 100, 160, 200 }, //ae oe
                { 4, 20, 40, 60, 80, 100 },//ltm oe
                500,//ltm_blend_rt  700=70%
                {
                    0, 256, 656, 1216, 1896,2626, //Low BV
                    0, 128, 398, 858, 1378,1988,
                    0, 288, 728, 1248, 1848,2528, //high BV
                },
    
                //MT
                7,                      //u4BVSize ,max8
                5,                      //u4EVDSize ,max8
                { -1200, 500, 2000, 4000,  6000,  8000, 10000 },
                { 200, 850 },             //u4HS_PcntRatio, (Start%,End%) 80 equal 8%
                { 500,  1000,  2000,  3000,  4500  },
                {
                    //L_BM                             H_BM  (reserved)
                    928, 872, 736, 344, 200,  //Low BV
					1184, 1136, 848,504, 232, 
					1376, 1344, 944, 648, 336,
					1408,1328, 944, 656, 368, 
					1536, 1312, 944, 624, 368,
					1632, 1376, 944, 616, 352, 
					1632, 1376,912, 616, 336,  //High BV
                },
                //DT (Resvered)
                7,                      //u4BVSize ,max8
                5,                      //u4EVDSize ,max8
                { -1000, 500, 2000, 4000,  6000,  8000, 10000},
                200,                //u4HS_PcntRatio, (Start%,End%) 80 equal 8%
                { 3000, 4000, 5000, 6000, 7000 },
                {
                    //L_BM                                  H_BM
                    512,  256,  128,  64,  32,  //Low BV
                    512,  256,  128,  64,  32,
                    512,  256,  128,  64,  32,
                    512,  256,  128,  64,  32,
                    512,  256,  128,  64,  32,
                    512,  256,  128,  64,  32,
                    512,  256,  128,  64,  32,  //High BV
                },
                3,                          //u4BVSize ,max8
                5,                          //u4EVDSize ,max8
                5,                          //u4Mid-Ratio Size ,max8
                { -1000, 3500, 8000 },     //i4MixWet_BVRatio
                { 800, 2000, 4000, 5500, 7000 },//u4MixWet_EVDB2DRatio
                { 250, 375, 500, 625, 750 },//u4MixWet_MidRatio
                {
                    //Low BV
                    //LRatio%                                                                       HRatio%
                    42,0,35,23,     42,0,30,28,     42,0,30,28,     42,0,30,28,     42,0,30,28,//Low EVD
                    40,0,35,25,     40,0,32,28,     40,0,32,28,     40,0,30,30,     37,0,30,33,
                    32,0,32,36,     34,0,29,37,     34,0,29,37,     32,0,30,38,     35,0,25,40,
                    28,0,32,40,     28,0,30,42,     28,0,25,47,     25,0,25,50,     25,0,25,50,
                    28,0,28,44,     28,0,26,46,     28,0,22,50,     25,0,20,55,     25,0,20,55,//High EVD
    
                    //Mid BV
                    //LRatio%                                                                                          HRatio%
                    38,0,38,24,     38,0,32,30,     38,0,32,30,     38,0,27,35,     38,0,25,37,//Low EVD
                    33,0,43,24,     35,0,35,30,     35,0,35,30,     35,0,30,35,     35,0,27,38,
                    30,0,44,26,     31,0,38,31,     30,0,34,36,     30,0,33,37,     30,0,30,40,
                    29,0,43,28,     31,0,37,32,     30,0,32,38,     30,0,28,42,     30,0,25,45,
                    27,0,38,35,     28,0,32,40,     30,0,25,45,     25,0,27,48,     25,0,23,52,//High EVD
    
                    //High BV
                    //LRatio%                                                                                         HRatio%
                    38,0,38,24,     38,0,32,30,     38,0,32,30,     38,0,28,34,     38,0,25,37,//Low EVD
                    34,0,42,24,     35,0,35,30,     35,0,30,35,     35,0,28,37,     35,0,23,42,
                    30,0,42,28,     31,0,37,32,     30,0,30,40,     25,0,25,50,     25,0,20,55,
                    29,0,39,32,     31,0,34,35,     30,0,29,41,     25,0,20,55,     20,0,15,65,
                    28,0,38,34,     30,0,32,38,     30,0,25,45,     25,0,20,55,     20,0,15,65,//High EVD
    
                },
                //DR
                40,
                { 200, 880 },
                200,
                { 2000, 8000 },
                { 1075,  972 },
                { 800, 4700 },
                { 1178, 1024 },
                //  //CCU_strColorSuppression ColorSup;
                true,          //  uint32_t clrsup_gs_en;//ColorSup_GreenSupEnableGreenSupress;
                105,            //  uint32_t clrsup_grn_det_gr;//ColorSup_GreenDetectGRRatio;       //  Green Detect G/R Ratio
                140,           //  uint32_t clrsup_grn_det_gb; //ColorSup_GreenDetectGBRatio;     //  Green Detect G/B Ratio
                {96, 1024},     //  uint32_t clrsup_grn_rt[2];//ColorSup_GreenRatio[2];           // Green Detect count weighting TBL X
                {0, 1024 },    //  uint32_t clrsup_grn_prob[2];//ColorSup_GreenProb[2];            // Green Detect count weighting TBL Y
                {1000, 6000},  //  int32_t   clrsup_grn_bv[2];//ColorSup_GreenBv[2];              // Green Detect BV range
                {700, 1024},   //  uint32_t clrsup_grn_bvprob[2]; //ColorSup_GreenBvProb[2];          // Green Detect BV Prob
                160,          //  uint32_t clrsup_grn_detmin;//ColorSup_GreenDetectMin;         // Min brightness of green detect
                125,           //  uint32_t clrsup_hs_sup_rt;//ColorSup_Hs4p0SupRatio;           // HS4p0 green supress stregth ratio
                140,           //  uint32_t clrsup_mt_sup_rt;//ColorSup_MainTargetSupRatio;      // MainTarget green supress stregth ratio
                {0, 0, 0, 0, 0, 0},      //  uint32_t clrsup_th[6];//ColorSup_TH[6];                  // Reserve for HWTH
                //  //CCU_strNSBVCFG NSBVCFG;
                true,                          //  uint32_t ns_bv_cfg_en;//NSBVCFG_EnableNSBVCFG;
                8,                             //  uint32_t ns_bv_cfg_tbll;//NSBVCFG_TblLength;
                { -7000, -6000, -5000, -4000, -3000, -2000, -1000 }, //  int32_t   ns_bv_cfg_bv[AE_RATIOTBL_MAXSIZE];//NSBVCFG_BV[AE_RATIOTBL_MAXSIZE];
                { 720, 735, 752, 768, 776, 800, 816, 832 }, //  uint32_t ns_bv_cfg_btthd[AE_RATIOTBL_MAXSIZE];//NSBVCFG_BTTHD[AE_RATIOTBL_MAXSIZE];
                { 1712, 1825, 1850, 2000, 2250, 2480, 2520, 2640 }, //  uint32_t ns_bv_cfg_nsthd[AE_RATIOTBL_MAXSIZE];//NSBVCFG_NSTHD[AE_RATIOTBL_MAXSIZE];
    
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,}, //  uint32_t ContrastLinkParam_ResContrastLink[40]; //Reserve for other contrast Link param
                //  //CCU_strFolivoraEffectPara FolivoraEffectPara;
                false,                        //  uint32_t en_flva;  /*FolivoraEffectPara_EnableFolivoraEffect*/
                {2500, 3000, 4000, 4500},     //  int32_t  flva_bv_tbl[AE_STABLE_BV_MAXSIZE];  /*FolivoraEffectPara_BvTable*/
                {200, 200, 200, 200},         //  int32_t  flva_bmov_th[AE_STABLE_BV_MAXSIZE];  /*FolivoraEffectPara_FolivoraBMovingTH*/
                {0, 0, 0, 0},                 //  int32_t  flva_fmov_th[AE_STABLE_BV_MAXSIZE];  /*FolivoraEffectPara_FolivoraFMovingTH*/
                {0, 0, 0, 0},                 //  int32_t  flva_fmovquan_th[AE_STABLE_BV_MAXSIZE];  /*FolivoraEffectPara_FolivoraFMovingQuantityTH*/
                {0, 0, 0, 0},                 //  int32_t  flva_drk_mtion_th[AE_STABLE_BV_MAXSIZE];  /*FolivoraEffectPara_FolivoraDarkMotionTH*/
                {0, 0, 0, 0},                 //  int32_t  flva_drk_mtion_minth[AE_STABLE_BV_MAXSIZE];  /*FolivoraEffectPara_FolivoraDarkMinMotionTH*/
                {200, 200, 200, 200},         //  int32_t  flva_trk_th[AE_STABLE_BV_MAXSIZE];  /*FolivoraEffectPara_FolivoraTrackingTH*/
                {0, 0, 0, 0},                 //  int32_t  flva_hes_th[AE_STABLE_BV_MAXSIZE];  /*FolivoraEffectPara_FolivoraHesitateTH*/
    
            },
            {
                //metering reserved
                //flicker reserved[0]
                false,
                8,
                8,
                8,
                16,
                3500, 4000, 4500, 5000, 5500, 6000, 6500, 7000, //BV
                1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, //EVD
                10, 30, 60, 100, 160, 160, 160, 160, //OE;
                1024, 1024, 768, 512, 256, 256, 256, 256 //OE;
                - 1000, -900, -800, -700, -600, -500, -400, -300, -200, -100, 0, 100, 200, 300, 400, 500, //Idx
                1024, 1024, 1024, 1024, 1024, 1097, 1176, 1260, 1260, 1260, 1176, 1097, 1024, 1024, 1024, 1024,
    
                0,     0,     0,    32,     32,     8,    0,    0,//3500
                0,     0,    32,   128,    128,    32,   16,   0,//4000
                0,     0,    64,   192,    192,    48,   24,   0,//4500
                0,     0,   128,   640,    384,    64,   32,   0,//5000
                0,     64,  512,   896,    640,   128,   32,   0,//5500
                0,     0,   128,   384,    384,    64,   32,   0,//6000
                0,     0,    32,   128,    128,    32,   16,   0,//6500
                0,     0,     0,    32,     32,     8,    0,    0,//7000
            }
        },
        {
            {
                9413001,
                6885,
                9432001,
                0,
                0,
                0,
            },
            //ae_nvram_face_para_t face;
            {
                1,                              //uint32_t fd_stb_in_th;                    /*u4FaceInStableThd, Face mode each index 0.08EV*/
                2,                             //uint32_t fd_stb_out_th;                   /*u4FaceOutStableThd, Face mode each index 0.08EV*/
                2,                             //uint32_t fd_stb_outb2t_th;                /*u4FaceOutB2TStableThd, Face mode each index 0.08EV*/
                2,                             //uint32_t fd_stb_outd2t_th;                /*u4FaceOutD2TStableThd, Face mode each index 0.08EV*/
                0,                              //uint32_t touch_stb_in_th;                 /*u4TouchInStableThd, Touch mode each index 0.08EV*/
                3,                              //uint32_t touch_stb_out_th;                /*u4TouchOutStableThd, Touch mode each index 0.08EV*/
                false,                          //uint32_t en_fdaelock;                     /*bEnableFaceAeLock, Face Ae lock option*/
                false,                          //uint32_t en_stb_zero_th;                  /*bEnableZeroStableThd, enable zero stable thd*/
                false,                          //uint32_t en_fd_stb_tol;                   /*bEnableFaceStableTolerance, enable CWV/FDY tolerance mode*/
                4,                              //uint32_t fd_stb_tolcnt;                   /*u4FaceStableTolCnt, keep converge stage for stable CWV & small FDY variation*/
                {-2000, 0, 3000, 5500},         //int32_t  fd_stb_bv_th[4];                 /*u4FaceStableBVThd, keep converge stage for stable CWV & small FDY variation*/
                {32, 32, 32, 32},               //uint32_t fd_stb_cwvdiff_th[4];(12bit)     /*u4FaceStableCWVDiffThd, keep converge stage for stable CWV & small FDY variation*/
                {96, 96, 96, 96},               //uint32_t fd_stb_fydiff_th[4];(12bit)      /*u4FaceStableFDYDiffThd, keep converge stage for stable CWV & small FDY variation*/
                99,                             //uint32_t fd_stb_tolout_th;                /*u4FaceStableOutThd, keep converge stage for stable CWV & small FDY variation*/
    
                /******************v6.0******************/
                /*CCU_strFaceLocSize FaceLocSizecheck*/
                true,                           //uint32_t en_fd_locsz_check;               /*FaceLocSizecheck_FaceLocSizeCheck*/
                { 5, 18 },                      //uint32_t fd_sz_smal2bg[2];                /*FaceLocSizecheck_SizeSmall2Big*/
                { 850, 850 },                   //uint32_t fd_pb_smal2bg[2];                /*FaceLocSizecheck_ProbSizeSmall2Big*/
                { 200, 600 },                   //uint32_t fd_loc_near2far[2];              /*FaceLocSizecheck_Loc_Near2Far*/
                { 1024, 1024 },                 //uint32_t fd_pb_near2far[2];               /*FaceLocSizecheck_ProbLocNear2Far*/
                false,                          //uint32_t fd_ldmksz;                       /*FaceLocSizecheck_LandmarkSize*/
                true,                           //uint32_t en_fd_locsz_bv;                  /*FaceLocSizecheck_FaceLocSizeByBv, Enable LocSize prob change along BV*/
                5,                              //uint32_t fd_tbl_sz;                       /*FaceLocSizecheck_TblLength, Max size 16*/
                {-1000, 2000, 4000, 6000, 8000, 8000, 8000, 8000, 8000, 8000},       //int32_t  fd_bv[AE_BVDR_MAXSIZE];              /*FaceLocSizecheck_Bv, Bv table, Bv less to More*/
                {400, 350, 300, 300, 300, 300, 300, 300, 300, 300}, //uint32_t fd_pb_smalsz[AE_BVDR_MAXSIZE]; //*FaceLocSizecheck_ProbSizeSmall, Size Prob change along BV*//
                {400, 350, 300, 300, 300, 300, 300, 300, 300, 300}, //uint32_t fd_pb_bgsz[AE_BVDR_MAXSIZE];  //*FaceLocSizecheck_ProbSizeBig*//
                {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024},        //uint32_t fd_pb_locnear[AE_BVDR_MAXSIZE];      /*FaceLocSizecheck_ProbLocNear, Loc Prob change along BV*/
                {1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024},        //uint32_t fd_pb_locfar[AE_BVDR_MAXSIZE];       /*FaceLocSizecheck_ProbLocFar*/
    
                /*Face Stable by PureCWR*/
                false,                                   //uint32_t en_fd_stb_bypurcwr;  /*FaceLocSizecheck_EnFaceStableByPureCWR, enable stable by PureCWR */
                /*Face Out stable by BV/DR*/
                true,                                   //uint32_t en_fd_stb_out_bvdr;  /*FaceLocSizecheck_EnFaceStableOutBvDr*/
                6,                                      //uint32_t fd_bvdr_bvsz, max6   /*FaceLocSizecheck_BvDr_BvSize*/
                6,                                      //uint32_t fd_bvdr_drsz, max6   /*FaceLocSizecheck_BvDr_DrSize*/
                {    0, 1000, 2000, 3000, 4000, 5000},  //int32_t  fd_bvdr_bv[6];       /*FaceLocSizecheck_BvDr_BV*/
                {-1000,    0, 3500, 4500, 4500, 4500},  //int32_t  fd_bvdr_dr[6];       /*FaceLocSizecheck_BvDr_DR*/
                //uint32_t fd_bvdr_fd_stb_out[6*6];  /*FaceLocSizecheck_BvDr_FD_OutStable*/
                {
                    2, 2, 2, 2, 2, 2, //BV0
                    2, 2, 2, 2, 2, 2, //BV1
                    2, 2, 2, 2, 2, 2, //BV2
                    2, 2, 2, 2, 2, 2, //BV3
                    2, 2, 2, 2, 2, 2, //BV4
                    2, 2, 2, 2, 2, 2, //BV5
                },
                //uint32_t fd_bvdr_fd_stb_in[6*6];  /*FaceLocSizecheck_BvDr_FD_InStable*/
                {
                    3, 3, 3, 3, 3, 3, //BV0
                    3, 3, 3, 3, 3, 3, //BV1
                    3, 3, 3, 3, 3, 3, //BV2
                    3, 3, 3, 3, 3, 3, //BV3
                    3, 3, 3, 3, 3, 3, //BV4
                    3, 3, 3, 3, 3, 3, //BV5
                },
                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //int32_t  fd_resv[12]; /*FaceLocSizecheck_Reverve ,Reserved usage*/
    
                /*CCU_strFaceTarget FdTarget*/
                80,     //uint32_t fd_cwr_lowbnd;(1024base)   /*FdTarget_FdCwrLowBound, face boundary min CWR value*/
                7168,  //uint32_t fd_cwr_higbnd;              //*FdTarget_FdCwrHighBound, face boundary max CWR value*//
                -1000,  //int32_t  fd_bv_lowbnd;               //*FdTarget_FaceBVLowBound, face boundary min BV value*//
                4000,   //int32_t  fd_bv_higbnd;              /*FdTarget_FaceBVHighBound, face boundary max BV value*/
                3,      //uint32_t fd_cen_wei;                /*FdTarget_FaceCentralWeight*/
                896,    //uint32_t fd_fy_lowbnd;  //*FdTarget_FaceYLowBound*//
                1120,    //uint32_t fd_fy_higbnd;  //*FdTarget_FaceYHighBound*//
                600,    //uint32_t fd_fy_nslowbnd;       //*FdTarget_FaceNSLowBound, NS face target Y*//
    
                /*CCU_strFaceBalancedTargetCFG FBTParam; Face balanced target parameter*/
                true,   //uint32_t en_fbt;          /*FBTParam_EnableFBT*/
                true,   //uint32_t fbt_float_dr;    /*FBTParam_FloatingPcentDR*/
                4,      //uint32_t fbt_bvsz;        /*Normal_BVSize, max size AE_RATIOTBL_MAXSIZE*/
                4,      //uint32_t fbt_drsz;        /*Normal_DRSize, max size AE_RATIOTBL_MAXSIZE*/
                { -2000, -1000, 0, 1500, 3000, 4500, 6000, 7500, 9000, 10000},  //int32_t  fbt_bv[AE_BVDR_MAXSIZE];  //*Normal_BV, Parameter index BV*//
                { 30, 20, 10, 10, 10, 10, 10, 10, 10, 10},              //uint32_t fbt_oe_skip_pct[AE_BVDR_MAXSIZE]; //*Normal_OE_SkipPcent, Tolerance for overexposure*//
                { 20, 20, 20, 20, 20, 20, 20, 20, 20, 20},              //uint32_t fbt_oe_pct[AE_BVDR_MAXSIZE]; //*Normal_OE_Pcent, OE region behind tolerance region*//
                { -1000, -500, 0, 1000, 1800, 2400, 4000, 8000, 10000, 10000}, //int32_t  fbt_dr[AE_BVDR_MAXSIZE];  //*Normal_DR, Parameter index DR*//
    
                /*uint32_t fbt_oe_th_tbl[AE_BVDR_MAXSIZE * AE_BVDR_MAXSIZE]; Normal_OE_TH_Tbl, OE brightness target*/
                {
                    // u4_OE_TH_Tbl: OE brightness target
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV0
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV1
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV2
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV3
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV4
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV5
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV6
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV7
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV8
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV9
                },
                /*uint32_t fbt_fd_th_tbl[AE_BVDR_MAXSIZE * AE_BVDR_MAXSIZE]; Normal_FD_TH_Tbl, Face background brightness target*/
                {
                    //u4_FD_TH: FD background brightness target
                     978, 1073,  955, 836, 706, 722, 722, 722, 722, 722, // BV0
                     978,  978,  875, 713, 700, 670, 713, 704, 665, 665, // BV1
                     978,  978,  892, 826, 824, 814, 665, 704, 665, 665, // BV2
                     978,  978,  975, 903, 933, 874, 917, 843, 665, 665, // BV3
                    1002, 1165, 1165, 879, 791, 912, 791, 653, 510, 510, // BV4
                    1033, 1195, 1195, 879, 791, 703, 741, 653, 510, 510, // BV5
                    1033, 1217, 1217, 879, 824, 843, 741, 481, 486, 486, // BV6
                    1139, 1217, 1217, 840, 721, 721, 562, 562, 486, 486, // BV7
                    1173, 1239, 1239, 949, 930, 911, 752, 752, 676, 676, // BV8
                    1173, 1239, 1239, 949, 930, 911, 752, 752, 676, 676, // BV9
                },
    
                /*uint32_t fbt_fd_minth_tbl[AE_BVDR_MAXSIZE * AE_BVDR_MAXSIZE]; Normal_FD_MIN_TH_Tbl, Minimum face background brightness target*/
                {
                    //u4_FD_TH: FD background brightness target
                     978, 1073,  955, 836, 706, 722, 722, 722, 722, 722, // BV0
                     978,  978,  875, 713, 700, 670, 713, 704, 665, 665, // BV1
                     978,  978,  892, 826, 824, 814, 665, 704, 665, 665, // BV2
                     978,  978,  975, 903, 933, 874, 917, 843, 665, 665, // BV3
                    1002, 1165, 1165, 879, 791, 912, 791, 653, 510, 510, // BV4
                    1033, 1195, 1195, 879, 791, 703, 741, 653, 510, 510, // BV5
                    1033, 1217, 1217, 879, 824, 843, 741, 481, 486, 486, // BV6
                    1139, 1217, 1217, 840, 721, 721, 562, 562, 486, 486, // BV7
                    1173, 1239, 1239, 949, 930, 911, 752, 752, 676, 676, // BV8
                    1173, 1239, 1239, 949, 930, 911, 752, 752, 676, 676, // BV9
                },
                4,      //uint32_t fbt_ns_bvsz;      //*Night_BVSize, max size AE_RATIOTBL_MAXSIZE*//
                4,      //uint32_t fbt_ns_drsz;      //*Night_DRSize, max size AE_RATIOTBL_MAXSIZE*//
                { -6000, -3000, 0, 1000, 2000, 2000, 2000, 2000, 2000, 2000 },   //int32_t  fbt_ns_bv[AE_BVDR_MAXSIZE];  //*Night_BV, Parameter index BV*//
                { 30, 20, 10, 10, 10, 10, 10, 10, 10, 10},              //uint32_t fbt_ns_oe_skip_pct[AE_BVDR_MAXSIZE]; //*Night_OE_SkipPcent, Tolerance for overexposure*//
                { 20, 20, 20, 20, 20, 20, 20, 20, 20, 20},              //uint32_t fbt_ns_oe_pct[AE_BVDR_MAXSIZE]; //*Night_OE_Pcent, OE region behind tolerance region*//
                { -500, 0, 3000, 4000, 4000, 4000, 4000, 4000, 4000, 4000}, //int32_t  fbt_ns_dr[AE_BVDR_MAXSIZE];  //*Night_DR, Parameter index DR*//
    
                //uint32_t fbt_ns_oe_th_tbl[AE_BVDR_MAXSIZE * AE_BVDR_MAXSIZE]; /*Night_OE_TH_Tbl, OE brightness target*/
                {
                    // u4_OE_TH_Tbl: OE brightness target
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV0
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV1
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV2
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV3
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV4
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV5
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV6
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV7
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV8
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV9
                },
                //uint32_t fbt_ns_fd_th_tbl[AE_BVDR_MAXSIZE * AE_BVDR_MAXSIZE]; /*Night_FD_TH_Tbl, Face background brightness target*/
                {
                    //u4_FD_TH: FD background brightness target
                    840, 820, 720, 720, 720, 720, 720, 720, 720, 720, // BV0
                    840, 820, 720, 720, 720, 720, 720, 720, 720, 720, // BV1
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV2
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV3
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV4
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV5
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV6
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV7
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV8
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV9
                },
                //uint32_t fbt_ns_fd_minth_tbl[AE_BVDR_MAXSIZE * AE_BVDR_MAXSIZE]; /*Night_FD_MIN_TH_Tbl, Minimum face background brightness target*/
                {
                    //u4_FD_TH: FD background brightness target
                    840, 820, 720, 720, 720, 720, 720, 720, 720, 720, // BV0
                    840, 820, 720, 720, 720, 720, 720, 720, 720, 720, // BV1
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV2
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV3
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV4
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV5
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV6
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV7
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV8
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV9
                },
    
                /**************Face Link Target**************/
                10,      //uint32_t flt_bvsz;      //*Normal_BVSize, max size AE_RATIOTBL_MAXSIZE*//
                10,      //uint32_t flt_drsz;      //*Normal_DRSize, max size AE_RATIOTBL_MAXSIZE*//
                { -2000, -1000, 0, 1500, 3000, 4500, 6000, 7500, 9000, 10000 },  //int32_t  flt_bv[AE_BVDR_MAXSIZE];  //*Normal_BV, Parameter index BV*//
                { 10, 10, 10, 10, 20, 20, 20, 10, 10, 10 },              //uint32_t flt_oe_skip_pct[AE_BVDR_MAXSIZE]; //*Normal_OE_SkipPcent, Tolerance for overexposure*//
                { 20, 20, 20, 20, 20, 20, 20, 20, 20, 20 },              //uint32_t flt_oe_pct[AE_BVDR_MAXSIZE]; //*Normal_OE_Pcent, OE region behind tolerance region*//
                { -1000, -500, 0, 1000, 1800, 2400, 4000, 8000, 10000, 10000 }, //int32_t  flt_dr[AE_BVDR_MAXSIZE];  //*Normal_DR, Parameter index DR*//
    
                /*uint32_t flt_oe_th_tbl[AE_BVDR_MAXSIZE * AE_BVDR_MAXSIZE]; Normal_OE_TH_Tbl, OE brightness target*/
                {
                    // u4_OE_TH_Tbl: OE brightness target
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV0
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV1
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV2
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV3
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV4
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV5
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV6
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV7
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV8
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV9
                },
                /*uint32_t flt_fd_th_tbl[AE_BVDR_MAXSIZE * AE_BVDR_MAXSIZE]; Normal_FD_TH_Tbl, Face brightness target*/
                {
                    //u4_FD_TH: Min FD brightness target
                     768,  768,  836, 836, 706, 722, 722, 722, 722, 722, // BV0
                     768,  775,  775, 713, 700, 670, 713, 704, 665, 665, // BV1
                     978,  978,  820, 826, 824, 814, 665, 704, 665, 665, // BV2
                     978,  978,  975, 826, 810, 780, 917, 843, 665, 665, // BV3
                    1002, 1165, 1165, 800, 711, 811, 791, 653, 510, 510, // BV4
                    1033, 1195, 1195, 800, 791, 703, 741, 653, 510, 510, // BV5
                    1033, 1117, 1017, 800, 724, 770, 741, 481, 486, 486, // BV6
                    1139, 1117, 1040, 780, 670, 670, 590, 660, 530, 486, // BV7
                    1173, 1139, 1039, 820, 770, 760, 680, 752, 676, 676, // BV8
                    1173, 1139, 1139, 949, 840, 830, 752, 752, 676, 676, // BV9
                },
    
                /*uint32_t flt_fd_minth_tbl[AE_BVDR_MAXSIZE * AE_BVDR_MAXSIZE]; Normal_FD_MIN_TH_Tbl, Minimum face brightness target*/
                {
                    //u4_FD_TH: Min FD brightness target
                     768,  768,  836, 836, 706, 722, 722, 722, 722, 722, // BV0
                     768,  775,  775, 713, 700, 670, 713, 704, 665, 665, // BV1
                     978,  978,  820, 826, 824, 814, 665, 704, 665, 665, // BV2
                     978,  978,  975, 826, 810, 780, 917, 843, 665, 665, // BV3
                    1002, 1165, 1165, 800, 711, 811, 791, 653, 510, 510, // BV4
                    1033, 1195, 1195, 800, 791, 703, 741, 653, 510, 510, // BV5
                    1033, 1117, 1017, 800, 724, 770, 741, 481, 486, 486, // BV6
                    1139, 1117, 1040, 780, 670, 670, 590, 660, 530, 486, // BV7
                    1173, 1139, 1039, 820, 770, 760, 680, 752, 676, 676, // BV8
                    1173, 1139, 1139, 949, 840, 830, 752, 752, 676, 676, // BV9
                },
                4,      //uint32_t flt_ns_bvsz;      //*Night_BVSize, max size AE_RATIOTBL_MAXSIZE*//
                4,      //uint32_t flt_ns_drsz;      //*Night_DRSize, max size AE_RATIOTBL_MAXSIZE*//
                { -6000, -3000, 0, 1000, 2000, 2000, 2000, 2000, 2000, 2000 },   //int32_t  flt_ns_bv[AE_BVDR_MAXSIZE];  //*Night_BV, Parameter index BV*//
                { 20, 10, 10, 10, 10, 10, 10, 10, 10, 10 },              //uint32_t flt_ns_oe_skip_pct[AE_BVDR_MAXSIZE]; //*Night_OE_SkipPcent, Tolerance for overexposure*//
                { 20, 20, 20, 20, 20, 20, 20, 20, 20, 20 },              //uint32_t flt_ns_oe_pct[AE_BVDR_MAXSIZE]; //*Night_OE_Pcent, OE region behind tolerance region*//
                { -500, 0, 3000, 4000, 4000, 4000, 4000, 4000, 4000, 4000 }, //int32_t  flt_ns_dr[AE_BVDR_MAXSIZE];  //*Night_DR, Parameter index DR*//
                //uint32_t flt_ns_oe_th_tbl[AE_BVDR_MAXSIZE * AE_BVDR_MAXSIZE]; //*Night_OE_TH_Tbl, OE brightness target*//
                {
                    // u4_OE_TH_Tbl: OE brightness target
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV0
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV1
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV2
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV3
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV4
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV5
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV6
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV7
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV8
                    4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, // BV9
                },
                /*uint32_t flt_ns_fd_th_tbl[AE_BVDR_MAXSIZE * AE_BVDR_MAXSIZE]; Night_FD_TH_Tbl, Face brightness target*/
                {
                    //u4_FD_TH: FD brightness target
                    840, 820, 720, 720, 720, 720, 720, 720, 720, 720, // BV0
                    840, 820, 720, 720, 720, 720, 720, 720, 720, 720, // BV1
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV2
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV3
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV4
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV5
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV6
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV7
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV8
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV9
                },
                //uint32_t flt_ns_fd_minth_tbl[AE_BVDR_MAXSIZE * AE_BVDR_MAXSIZE]; //*Night_FD_MIN_TH_Tbl, Minimum face brightness target*//
                {
                    //u4_FD_TH: FD brightness target
                    840, 820, 720, 720, 720, 720, 720, 720, 720, 720, // BV0
                    840, 820, 720, 720, 720, 720, 720, 720, 720, 720, // BV1
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV2
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV3
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV4
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV5
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV6
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV7
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV8
                    720, 720, 720, 720, 720, 720, 720, 720, 720, 720, // BV9
                },
                /*face dr control for face background target*/
                16, /*fd_dr_tbl*/
                { 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000}, /*fd_dr_ra_x, face dr*/
                { 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024,  1024,  1024,  1024,  1024,  1024,  1024,  1024}, /*fd_dr_ra_y, face background target ratio, 1024 base*/
                /*face sz control for face link target*/
                16, /*flt_fdsz_tbl*/
                {    3,    4,    5,    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,   16,   17,   18},//*face sz*//
                { 256, 512, 563, 614, 665, 716, 767, 818, 869, 920, 971, 1024, 1024, 1024, 1024, 1024}, //*face target ratio, 1024 base*//
    
                /*CCU_strFaceSorting FDSortParam;*/
                25, //uint32_t fd_sort_ra;      /*FDSortParam_FaceSortRa, FD change ration for size sorting*/
                5,  //uint32_t fd_sort_stbcnt;  /*FDSortParam_FaceSortStbCnt, FD size sorting stable counting*/
    
                /*===================rsv start=============================*/
                /*CCU_strFaceMotion  FDMotionParam;*/
                false, //uint32_t en_fd_mtion_detec;  /*FDMotionParam_EnableFaceMotionDetect, enable FD motion detection*/
                25,    //uint32_t fd_mtion_ra_fdin;   /*FDMotionParam_FaceMotionRa_FDIN, FD motion ratio for FDIN*/
                3,     //uint32_t fd_mtion_ra_fdcon;  /*FDMotionParam_FaceMotionRa_FDCONTINUE, FD motion ratio for FDCONTINUE*/
                3,     //uint32_t fd_mtion_frm_fdin;  /*FDMotionParam_FDMotionFrame_FDIN, FD motion frame number for FDIN*/
                5,     //uint32_t fd_mtion_frm_fdcon; /*FDMotionParam_FDMotionFrame_FDCONTINUE, FD motion frame number for FDCONTINUE*/
                /*CCU_strFaceSizeVar FDSizeVarParam;*/
                false, //uint32_t en_fd_szdif_detec;  /*FDSizeVarParam_EnableFaceSizeDetect, enable FD size variation detection*/
                3,     //uint32_t fd_szdif_w_fdin;    /*FDSizeVarParam_FaceSizeDiffTh_W_FDIN, Face width size diff for FDIN*/
                3,     //uint32_t fd_szdif_h_fdin;    /*FDSizeVarParam_FaceSizeDiffTh_H_FDIN, Face height size diff for FDIN*/
                3,     //uint32_t fd_szdif_w_fdcon;   /*FDSizeVarParam_FaceSizeDiffTh_W_FDCONTINUE, Face width size diff for FDCONTINUE*/
                3,     //uint32_t fd_szdif_h_fdcon;   /*FDSizeVarParam_FaceSizeDiffTh_H_FDCONTINUE, Face height size diff for FDCONTINUE*/
                3,     //uint32_t fd_szdif_frm_fdin;  /*FDSizeVarParam_FDSizeDiffFrame_FDIN, FD size record frame number for FDIN*/
                5,     //uint32_t fd_szdif_frm_fdcon; /*FDSizeVarParam_FDSizeDiffFrame_FDCONTINUE, FD size record  frame number for FDCONTINUE*/
                false, //uint32_t en_fd_boud_detec;   /*FDSizeVarParam_EnableFaceBndLock, FD ROI protection*/
                0,     //uint32_t fd_boud_thd;       /*FDSizeVarParam_EndBnkUpperBound, boundary threshold*/
                /*===================rsv end==============================*/
    
                /*CCU_strContrastLink ContrastLinkParam; For Contrast link control*/
                true,  //uint32_t en_lce_link;          /*ContrastLinkParam_EnableContrastLink*/
    
                /*CCU_strFaceLCELink FDLCELinkParam; //Face LCE link param*/
                2,     //uint32_t fd_lce_rbcnt;         /*FDLCELinkParam_FaceRbTrustCnt, Face robust trust cnt for face LCE link*/
                3,     //uint32_t fd_lce_dropsmhcnt;    /*FDLCELinkParam_FaceDropTempSmoothCnt, Face drop smooth cnt for face LCE link*/
                3,     //uint32_t fd_lce_otcnt_fdin;    /*FDLCELinkParam_OTFaceTrustCnt_FDIN, Face OT trust cnt and converge last robust face target*/
                0,     //uint32_t fd_lce_otcnt_fdcon;   /*FDLCELinkParam_OTFaceTrustCnt_FDCONTINUE, Face OT trust cnt and converge last robust face target*/
                true,  //uint32_t fd_lce_otcnt_lock;    /*FDLCELinkParam_OTFaceTimeOutLockAE, OT face time out lock ae*/
                60,    //uint32_t fd_lce_resv1;  /*FDLCELinkParam_Reserve1*/ /*histogram face roi_x cropping ratio*/
                60,    //uint32_t fd_lce_resv2;  /*FDLCELinkParam_Reserve2*/ /*histogram face roi_y cropping ratio*/
                5,     //uint32_t fd_lce_resv3;  /*FDLCELinkParam_Reserve3*/ /*x lower bound for histogram face roi cropping ratio*/
                5,     //uint32_t fd_lce_resv4;  /*FDLCELinkParam_Reserve4*/ /*y lower bound for histogram face roi cropping ratio*/
                90,    //uint32_t fd_lce_resv5;  /*FDLCELinkParam_Reserve5*/ /*side face rop thd, if rop > abs(thd) then skip cal */
                /*===================rsv start=============================*/
                1000,      //int32_t  fd_ltm_protec_pct;   /*ContrastLinkParam_LTMFaceProtectPercent, Face LTM - face protection percent (Range: 0~100)*/
                100,       //int32_t  fd_ltm_britone_pct;  /*ContrastLinkParam_LTMFaceBrightTonePercent, Face LTM - face bright tone avg percent (Range: 0~100)*/
                70,        //int32_t  fd_ltm_top_crp_ra;   /*ContrastLinkParam_LTMTopCropRatio, Face LTM - FD top crop ratio (Range: 0~100)*/
                70,        //int32_t  fd_ltm_bot_crp_ra;   /*ContrastLinkParam_LTMBottomCropRatio, Face LTM - FD bottom crop ratio (Range: 0~100)*/
                70,        //int32_t  fd_ltm_lef_crp_ra;   /*ContrastLinkParam_LTMLeftCropRatio, Face LTM - FD left crop ratio (Range: 0~100)*/
                70,        //int32_t  fd_ltm_rig_crp_ra;   /*ContrastLinkParam_LTMRightCropRatio, Face LTM - FD right crop ratio (Range: 0~100)*/
                /*===================rsv end==============================*/
                {158, 308, 308, 308, 308}, //uint32_t fd_lce_maxgain[5]; /*ContrastLinkParam_m_u4LCEMaxGain, Face LCE link maximum gain*/
    
                /*******CCU_strFaceSmooth  FaceSmooth*******/
                3760,   //235 (8bit),   //uint32_t fd_tmp_highbnd;        /*u4TmpFDY_HBound, tempFDY HighBound, no use*/
                16,     //  1 (8bit),   //uint32_t fd_tmp_lowbnd;         /*u4TmpFDY_LBound, tempFDY LowBound, no use*/
                0,                      //uint32_t fd_lostmaxcnt;         /*u4FD_Lost_MaxCnt, face lost max count, no use*/
                100,                    //uint32_t fd_scale_ra;           /*u4FD_Scale_Ratio, face window scale ratio, no use*/
                0,                      //uint32_t fd_lockmaxcnt;         /*u4FD_Lock_MaxCnt*/
                0,                      //uint32_t fd_tmp_smooth;         /*u4FD_TemporalSmooth, no use*/
                false,                  //uint32_t fd_size_ext;           /*bFD_FaceSizeExt*/
                10,                     //int32_t  fd_x_minbnd;           /*i4FD_FaceXMiniBnd*/
                10,                     //int32_t  fd_y_minbnd;           /*i4FD_FaceYMiniBnd*/
                70,                     //uint32_t fd_top_cropra;         /*u4FD_FaceTopCropRat*/
                80,                     //uint32_t fd_bot_cropra;         /*u4FD_FaceBottomCropRat*/
                90,                     //uint32_t fd_lef_cropra;         /*u4FD_FaceLeftCropRat*/
                90,                     //uint32_t fd_rig_cropra;         /*u4FD_FaceRightCropRat*/
                0,                      //uint32_t fd_in2out_maxcnt;      /*u4FD_InToOutThdMaxCnt*/
                4080,   //255 (8bit),   //uint32_t fd_otlock_upbnd;       /*u4FD_OTLockUpperBnd*/
                0,                      //uint32_t fd_otlock_lwbnd;       /*u4FD_OTLockLowerBnd*/
                0,                      //uint32_t fd_continue_trucnt;    /*u4FD_ContinueTrustCnt*/
                0,                      //uint32_t fd_perfrm_antiove_fg;  /*u4FD_PerframeAntiOverFlag, no use*/
                0,                      //uint32_t fd_sidefdlock;         /*u4FD_SideFaceLock, no use*/
                0,                      //uint32_t fd_lim_stb_lwbnd_th;   /*u4FD_LimitStableThdLowBnd*/
                0,                      //uint32_t fd_lim_stb_lwbnd_num;  /*u4FD_LimitStableThdLowBndNum*/
                0,                      //uint32_t fd_reconv_fdchg;       /*u4FD_ReConvergeWhenFaceChange, no use*/
                0,                      //uint32_t fd_mtion_lock_ra;      /*u4FD_FaceMotionLockRat, no use*/
                0,                      //uint32_t fd_imp_lockcnt;        /*u4FD_ImpulseLockCnt, no use*/
                2,                      //uint32_t fd_imp_up_th;          /*u4FD_ImpulseUpperThd, no use*/
                2,                      //uint32_t fd_imp_lw_th;          /*u4FD_ImpulseLowerThd, no use*/
                0,                      //uint32_t fd_rop_trucnt;         /*u4FD_ROPTrustCnt, no use*/
                30,                     //uint32_t fd_reconv_sizchg_ra;   /*u4FD_ReCovergeWhenSizeChangeRat, no use*/
                120,                    //uint32_t fd_reconv_poschg_dt;   /*u4FD_ReCovergeWhenPosChangeDist, no use*/
                3000,                   //uint32_t fd_reconv_bv_dif_large;/*u4FD_ReCovergeWhenRealBVx1000DiffLarge, no use*/
                1,                      //uint32_t fd_reconv_afdone;      /*u4FD_ReCovergeWhenAFDone, no use*/
                0,                      //uint32_t fd_otfdlock;           /*u4FD_OTFaceLock*/
                false,                  //uint32_t en_fdcnn;              /*bCnnFaceEnable, no use*/
                false,                  //uint32_t en_reconv_cnnback;     /*bReConvergeWhenCNNFaceBack, no use*/
                4,                      //int32_t  fd_port_tol;           /*i4PortraitTolerance, no use*/
                0,                      //int32_t  fd_cnn_lockmaxcnt;     /*i4FD_CNN_Lock_MaxCnt, no use*/
                false,                  //uint32_t en_evc_excp;           /*bEVCompExceptionEnable*/
                10000,                  //uint32_t evc_touch_stb_max;     /*u4EVCompTouchMeteringStableMax*/
                1,                      //uint32_t evc_touch_stb_min;     /*u4EVCompTouchMeteringStableMin*/
                20,                     //uint32_t evc_touch_out_th;      /*u4EVCompTouchOutStableThd*/
                15,                     //uint32_t evc_touch_in_th;       /*u4EVCompTouchInStableThd*/
                false,                  //uint32_t en_fd_acclock;         /*bFaceAccLockEnable, no use*/
                100,                    //uint32_t fd_acclock_th;         /*u4FaceAccLockThd, no use*/
                0,                      //uint32_t fd_acclock_maxcnt;     /*u4FaceAccLock_MaxCnt, no use*/
                false,                  //uint32_t en_fd_gyrlock;         /*bFaceGyroDiffLockEnable, no use*/
                100,                    //uint32_t fd_gyrlock_th;         /*u4FaceGyroDiffLockThd, no use*/
                0,                      //uint32_t fd_gyrlock_maxcnt;     /*u4FaceGyroDiffLock_MaxCnt, no use*/
                /*CCU_strFaceWeight  FaceWeight*/
                true,                   //uint32_t en_fd_multiwei;        /*bEnableMultiFaceWeight*/
                FACE_PRIOR_TIME,        //AE_FACE_PRIOR_ENUM prior;       /*Prior*/
                {1, 1, 0, 0, 0, 0, 0, 0, 0}, //uint32_t fd_fdwei[MAX_AE_METER_AREAS];  /*u4FaceWeight*/
    
                /*******Face Robust Control*******/
                false,   /*en_fd_mot_dec*/
                6,      /*fd_mot_bvsz, max 6*/
                6,      /*fd_mot_drsz, max 6*/
                { -1000, 0, 1000, 2000, 3000, 4000, },      /*fd_mot_bv*/
                { -500, 0, 1000, 2000, 3000, 4000, },       /*fd_mot_dr*/
                {
                    /*fd_mot_frm_in, max 10*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                {
                    /*fd_mot_ra_in*/
                    25, 25, 25, 25, 25, 25, // BV0
                    25, 25, 25, 25, 25, 25, // BV1
                    25, 25, 25, 25, 25, 25, // BV2
                    25, 25, 25, 25, 25, 25, // BV3
                    25, 25, 25, 25, 25, 25, // BV4
                    25, 25, 25, 25, 25, 25, // BV5
                },
                {
                    /*fd_mot_frm_cn, max 10*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                {
                    /*fd_mot_ra_cn*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                false,  /*en_fd_sz_dec*/
                6,      /*fd_sz_bvsz, max 6*/
                6,      /*fd_sz_drsz, max 6*/
                { -1000, 0, 1000, 2000, 3000, 4000, },      /*fd_sz_bv*/
                { -500, 0, 1000, 2000, 3000, 4000, },       /*fd_sz_dr*/
                {
                    /*fd_sz_frm_in, max 10*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                {
                    /*fd_sz_w_in*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                {
                    /*fd_sz_h_in*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                {
                    /*fd_sz_frm_cn, max 10*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                {
                    /*fd_sz_w_cn*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                {
                    /*fd_sz_h_cn*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                false,   /*en_fd_gyro*/
                6,      /*fd_gyro_bvsz, max 6*/
                6,      /*fd_gyro_drsz, max 6*/
                { -1000, 0, 1000, 2000, 3000, 4000, },      /*fd_gyro_bv*/
                { -500, 0, 1000, 2000, 3000, 4000, },       /*fd_gyro_dr*/
                {
                    /*fd_gyro_frm_in, max 10*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                {
                    /*fd_gyro_th_in*/
                    20, 20, 20, 20, 20, 20, // BV0
                    20, 20, 20, 20, 20, 20, // BV1
                    20, 20, 20, 20, 20, 20, // BV2
                    20, 20, 20, 20, 20, 20, // BV3
                    20, 20, 20, 20, 20, 20, // BV4
                    20, 20, 20, 20, 20, 20, // BV5
                },
                {
                    /*fd_gyro_frm_cn, max 10*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                {
                    /*fd_gyro_th_cn*/
                    20, 20, 20, 20, 20, 20, // BV0
                    20, 20, 20, 20, 20, 20, // BV1
                    20, 20, 20, 20, 20, 20, // BV2
                    20, 20, 20, 20, 20, 20, // BV3
                    20, 20, 20, 20, 20, 20, // BV4
                    20, 20, 20, 20, 20, 20, // BV5
                },
                false,   /*en_fd_acc*/
                6,      /*fd_acc_bvsz, max 6*/
                6,      /*fd_acc_drsz, max 6*/
                { -1000, 0, 1000, 2000, 3000, 4000, },      /*fd_acc_bv*/
                { -500, 0, 1000, 2000, 3000, 4000, },       /*fd_acc_dr*/
                {
                    /*fd_acc_frm_in, max 10*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                {
                    /*fd_acc_th_in*/
                    20, 20, 20, 20, 20, 20, // BV0
                    20, 20, 20, 20, 20, 20, // BV1
                    20, 20, 20, 20, 20, 20, // BV2
                    20, 20, 20, 20, 20, 20, // BV3
                    20, 20, 20, 20, 20, 20, // BV4
                    20, 20, 20, 20, 20, 20, // BV5
                },
                {
                    /*fd_acc_frm_cn, max 10*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                {
                    /*fd_acc_th_cn*/
                    20, 20, 20, 20, 20, 20, // BV0
                    20, 20, 20, 20, 20, 20, // BV1
                    20, 20, 20, 20, 20, 20, // BV2
                    20, 20, 20, 20, 20, 20, // BV3
                    20, 20, 20, 20, 20, 20, // BV4
                    20, 20, 20, 20, 20, 20, // BV5
                },
                false,   /*en_fd_scene_dec*/
                false,  /*fd_scene_cov_delta, no use*/
                6,      /*fd_scene_bvsz, max 6*/
                6,      /*fd_scene_drsz, max 6*/
                { -1000, 0, 1000, 2000, 3000, 4000, },      /*fd_scene_bv*/
                { -500, 0, 1000, 2000, 3000, 4000, },       /*fd_scene_dr*/
                {
                    /*fd_scene_frm_in, max 10*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                {
                    /*fd_scene_fdth_in, 1000 base, 10 = 10/1000 = 0.01 evdiff*/
                    50, 50, 50, 50, 50, 50, // BV0
                    50, 50, 50, 50, 50, 50, // BV1
                    50, 50, 50, 50, 50, 50, // BV2
                    50, 50, 50, 50, 50, 50, // BV3
                    50, 50, 50, 50, 50, 50, // BV4
                    50, 50, 50, 50, 50, 50, // BV5
                },
                {
                    /*fd_scene_cwvth_in, 1000 base, 10 = 10/1000 = 0.01 evdiff*/
                    50, 50, 50, 50, 50, 50, // BV0
                    50, 50, 50, 50, 50, 50, // BV1
                    50, 50, 50, 50, 50, 50, // BV2
                    50, 50, 50, 50, 50, 50, // BV3
                    50, 50, 50, 50, 50, 50, // BV4
                    50, 50, 50, 50, 50, 50, // BV5
                },
                {
                    /*fd_scene_frm_cn, max 10*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                {
                    /*fd_scene_fdth_cn, 1000 base, 10 = 10/1000 = 0.01 evdiff*/
                    50, 50, 50, 50, 50, 50, // BV0
                    50, 50, 50, 50, 50, 50, // BV1
                    50, 50, 50, 50, 50, 50, // BV2
                    50, 50, 50, 50, 50, 50, // BV3
                    50, 50, 50, 50, 50, 50, // BV4
                    50, 50, 50, 50, 50, 50, // BV5
                },
                {
                    /*fd_scene_cwvth_cn, 1000 base, 10 = 10/1000 = 0.01 evdiff*/
                    50, 50, 50, 50, 50, 50, // BV0
                    50, 50, 50, 50, 50, 50, // BV1
                    50, 50, 50, 50, 50, 50, // BV2
                    50, 50, 50, 50, 50, 50, // BV3
                    50, 50, 50, 50, 50, 50, // BV4
                    50, 50, 50, 50, 50, 50, // BV5
                },
                false,   /*en_fd_lmcv*/
                6,      /*fd_lmcv_bvsz, max 6*/
                6,      /*fd_lmcv_drsz, max 6*/
                { -1000, 0, 1000, 2000, 3000, 4000, },      /*fd_lmcv_bv*/
                { -500, 0, 1000, 2000, 3000, 4000, },       /*fd_lmcv_dr*/
                {
                    /*fd_lmcv_frm_in, max 10*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                {
                    /*fd_lmcv_cvth_in*/
                    30, 30, 30, 30, 30, 30, // BV0
                    30, 30, 30, 30, 30, 30, // BV1
                    30, 30, 30, 30, 30, 30, // BV2
                    30, 30, 30, 30, 30, 30, // BV3
                    30, 30, 30, 30, 30, 30, // BV4
                    30, 30, 30, 30, 30, 30, // BV5
                },
                {
                    /*fd_lmcv_frm_cn, max 10*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                {
                    /*fd_lmcv_cvth_cn*/
                    30, 30, 30, 30, 30, 30, // BV0
                    30, 30, 30, 30, 30, 30, // BV1
                    30, 30, 30, 30, 30, 30, // BV2
                    30, 30, 30, 30, 30, 30, // BV3
                    30, 30, 30, 30, 30, 30, // BV4
                    30, 30, 30, 30, 30, 30, // BV5
                },
                false,   /*en_fd_lmrop*/
                6,      /*fd_lmrop_bvsz, max 6*/
                6,      /*fd_lmrop_drsz, max 6*/
                { -1000, 0, 1000, 2000, 3000, 4000, },      /*fd_lmrop_bv*/
                { -500, 0, 1000, 2000, 3000, 4000, },       /*fd_lmrop_dr*/
                {
                    /*fd_lmrop_frm_in, max 10*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                {
                    /*fd_lmrop_ropth_in*/
                    30, 30, 30, 30, 30, 30, // BV0
                    30, 30, 30, 30, 30, 30, // BV1
                    30, 30, 30, 30, 30, 30, // BV2
                    30, 30, 30, 30, 30, 30, // BV3
                    30, 30, 30, 30, 30, 30, // BV4
                    30, 30, 30, 30, 30, 30, // BV5
                },
                {
                    /*fd_lmrop_frm_cn, max 10*/
                    3, 3, 3, 3, 3, 3, // BV0
                    3, 3, 3, 3, 3, 3, // BV1
                    3, 3, 3, 3, 3, 3, // BV2
                    3, 3, 3, 3, 3, 3, // BV3
                    3, 3, 3, 3, 3, 3, // BV4
                    3, 3, 3, 3, 3, 3, // BV5
                },
                {
                    /*fd_lmrop_ropth_cn*/
                    30, 30, 30, 30, 30, 30, // BV0
                    30, 30, 30, 30, 30, 30, // BV1
                    30, 30, 30, 30, 30, 30, // BV2
                    30, 30, 30, 30, 30, 30, // BV3
                    30, 30, 30, 30, 30, 30, // BV4
                    30, 30, 30, 30, 30, 30, // BV5
                },
    
                4, /*fdy_min_bvsz, max 10*/
                4, /*fdy_min_drsz, max 10*/
                { -1000, 0, 1000, 2000, 2000, 2000, 2000, 2000, 2000, 2000 },  /*int32_t  fdy_min_bv[AE_BVDR_MAXSIZE]*/
                { -500, 0, 3000, 4000, 4000, 4000, 4000, 4000, 4000, 4000 },   /*int32_t  fdy_min_dr[AE_BVDR_MAXSIZE]*/
                {
                    /*uint32_t fdy_min_th[AE_BVDR_MAXSIZE * AE_BVDR_MAXSIZE], 12 bit*/
                    256, 256, 256, 256, 256, 256, 256, 256, 256, 256, // BV0
                    256, 256, 256, 256, 256, 256, 256, 256, 256, 256, // BV1
                    256, 256, 256, 256, 256, 256, 256, 256, 256, 256, // BV2
                    256, 256, 256, 256, 256, 256, 256, 256, 256, 256, // BV3
                    256, 256, 256, 256, 256, 256, 256, 256, 256, 256, // BV4
                    256, 256, 256, 256, 256, 256, 256, 256, 256, 256, // BV5
                    256, 256, 256, 256, 256, 256, 256, 256, 256, 256, // BV6
                    256, 256, 256, 256, 256, 256, 256, 256, 256, 256, // BV7
                    256, 256, 256, 256, 256, 256, 256, 256, 256, 256, // BV8
                    256, 256, 256, 256, 256, 256, 256, 256, 256, 256, // BV9
                },
                true, /*en_gau_fdy*/
                false, /*en_fd_stblizer*/
                {40, 20, 10, 5, 1}, /*fd_gau_wei[5]*/
                {400, 800, 1200, 1600}, /*fd_gau_var[4], 12 bit*/
                {
                    false,                //uint32_t ldmk_ctrl_fg;              /*bLandmarkCtrlFlag, face landmark ctrol flag*/
                    30,                  //uint32_t ldmk_cv_th;               /*u4LandmarkCV_Thd, face landmark info cv thd*/
                    -40,                  //int32_t  ldmk_cv_bv;               /*i4LandmarkCV_BV, BV thd for face landmark cv*/
                    30,                  //uint32_t ldmk_rop_th;              /*u4LandmarkROP_Thd, face landmark info rop thd*/
                    -60,                  //int32_t  ldmk_rop_bv;               /*i4LandmarkROP_BV, BV thd for face landmark ROP*/
                    0,                   //uint32_t ldmk_wei;               /*u4LandmarkWeight, face landmark weight*/
                    100,                   //int32_t  ldmk_extra_w;  /*i4LandmarkExtRatW*/
                    100,                   //int32_t  ldmk_extra_h;  /*i4LandmarkExtRatH*/
                    90,                   //int32_t  ldmk_rop_trut_deg;  /*i4LandmarkTrustRopDegree*/
                    5,                   //int32_t  roud_xy_p;  /*i4RoundXYPercent*/
                    3,                   //int32_t  roud_sz_p;  /*i4RoundSZPercent*/
                    9,                   //int32_t  overlap_th;  /*i4THOverlap*/
                    3,                   //int32_t  en_bufl; /*i4BUFLEN, must not exceed #LANDMARK_SMOOTH_MAX_LENGTH*/
                    8,                   //int32_t  smoothlevel;  /*i4SMOOTH_LEVEL*/
                    0,                   //int32_t  momentum;  /*i4MOMENTUM*/
                    0,                   //int32_t  ldmk_wei_p;  /*u4LandmarkWeightPercent*/
                    false,                //uint32_t ldmk_bk_mode;  /*u4LandmarkBKMode*/
                    20,                  //uint32_t ldmk_bk_cv_th;  /*u4LandmarkBK_CVthd*/
                    320,//20 (8bit),     //uint32_t ldmk_bk_fy_th;  /*u4LandmarkBK_FYthd*/
                    70,                  //uint32_t ldmk_bk_wei;  /*u4LandmarkBK_Weight*/
                    0,                  //int32_t  ldmk_bk_bv;  /*i4LandmarkBK_BV*/
                },
            },
            {
                /*fd_scene_cov_delta_in, 1000 base, 10 = 10/1000 = 0.01 evdiff*/
                5000, 5000, 5000, 5000, 5000, 5000, // BV0         reserved[0]~reserved[5]
                5000, 5000, 5000, 5000, 5000, 5000, // BV1         reserved[6]~reserved[11]
                5000, 5000, 5000, 5000, 5000, 5000, // BV2         reserved[12]~reserved[17]
                5000, 5000, 5000, 5000, 5000, 5000, // BV3         reserved[18]~reserved[23]
                5000, 5000, 5000, 5000, 5000, 5000, // BV4         reserved[24]~reserved[29]
                5000, 5000, 5000, 5000, 5000, 5000, // BV5         reserved[30]~reserved[35]
                /*fd_scene_cov_delta_cn, 1000 base, 10 = 10/1000 = 0.01 evdiff*/
                5000, 5000, 5000, 5000, 5000, 5000, // BV0         reserved[36]~reserved[41]
                5000, 5000, 5000, 5000, 5000, 5000, // BV1         reserved[42]~reserved[47]
                5000, 5000, 5000, 5000, 5000, 5000, // BV2         reserved[48]~reserved[53]
                5000, 5000, 5000, 5000, 5000, 5000, // BV3         reserved[54]~reserved[59]
                5000, 5000, 5000, 5000, 5000, 5000, // BV4         reserved[60]~reserved[65]
                5000, 5000, 5000, 5000, 5000, 5000, // BV5         reserved[66]~reserved[71]
                false,        /*reserved[72], enable waiting first stable done and start to detect cwv/fdy*/
                100,          /*reserved[73], face dr cal dark area, 100 = 100/10 = 10%*/
                100,          /*reserved[74], face dr cal bright area, 100 = 100/10 = 10%*/
            }
        },
        {
            {
                9385001,
                6885,
                0,
                0,
                0,
                0,
            },
            //ae_nvram_smooth_para_t smooth;
            {
                ///*AE smooth*/
                ///*CCU_AE_SMOOTH_V6P0_CFG smooth_cfg_v6p0;*/
                2,            //int32_t cycle;                          /*smooth_cfg_v6p0_ae_cycle;*/
                -1,           //int32_t small_rg_idx;                   /*smooth_cfg_v6p0_small_range_idx;*/
                -1,           //int32_t fd_small_rg_idx;                /*smooth_cfg_v6p0_face_small_range_idx;*/
                2,            //int32_t inv_prot_ra;                    /*smooth_cfg_v6p0_inverse_protect_ratio;*/
                //
                80,           //int32_t exo_pf_ra;                              /*smooth_cfg_v6p0_extreme_over_perframe_ratio;*/
                { 100, 180 }, //int32_t exo_nli_cwv_ra_x[AE_SMOOTH_X_Y_LENGTH];             /*smooth_cfg_v6p0_extreme_over_non_linear_cwv_ratio_x[2];*/
                { 100, 180 }, //int32_t exo_nli_cwv_ra_y[AE_SMOOTH_X_Y_LENGTH];             /*smooth_cfg_v6p0_extreme_over_non_linear_cwv_ratio_y[2];*/
                50,           //int32_t exu_pf_ra;                  /*smooth_cfg_v6p0_extreme_under_perframe_ratio;*/
                { 100, 180 }, //int32_t exu_nli_cwv_ra_x[AE_SMOOTH_X_Y_LENGTH];           /*smooth_cfg_v6p0_extreme_under_non_linear_cwv_ratio_x[2];*/
                { 100, 180 }, //int32_t exu_nli_cwv_ra_y[AE_SMOOTH_X_Y_LENGTH];           /*smooth_cfg_v6p0_extreme_under_non_linear_cwv_ratio_y[2];*/
                //
                1,              //int32_t o_bv_th_en;                 /*smooth_cfg_v6p0_over_bv_th_enable;*/
                2,              //int32_t o_tbl_le;                   /*smooth_cfg_v6p0_over_tbl_length;*/
                { 8000, 9000 }, //int32_t o_bv_th[AE_SMOOTH_SEGMENT_LENGTH];                 /*smooth_cfg_v6p0_over_bv_th[8];*/
                { 90, 60 },     //int32_t o_pf_ra[AE_SMOOTH_SEGMENT_LENGTH];                 /*smooth_cfg_v6p0_over_perframe_ratio[8];*/
                90,             //int32_t o_pf_ra_def;                /*smooth_cfg_v6p0_over_perframe_ratio_default;*/
                //
                480,//int32_t o_lim_del_idx;              /*smooth_cfg_v6p0_over_limit_delta_index;*/
                { 30, 100 },//int32_t o_prb_ra_x[AE_SMOOTH_X_Y_LENGTH];              /*smooth_cfg_v6p0_over_prob_ratio_x[2];*/
                { 90, 70 },//int32_t o_prb_ra_y[AE_SMOOTH_X_Y_LENGTH];              /*smooth_cfg_v6p0_over_prob_ratio_y[2];*/
                { 105, 150 },//int32_t o_nli_cwv_ra_x[AE_SMOOTH_X_Y_LENGTH];          /*smooth_cfg_v6p0_over_non_linear_cwv_ratio_x[2];*/
                { 100, 75 },//int32_t o_nli_cwv_ra_y[AE_SMOOTH_X_Y_LENGTH];          /*smooth_cfg_v6p0_over_non_linear_cwv_ratio_y[2];*/
                { 105, 150 },//int32_t o_nli_avg_ra_x[AE_SMOOTH_X_Y_LENGTH];          /*smooth_cfg_v6p0_over_non_linear_avg_ratio_x[2];*/
                { 100, 85 },//int32_t o_nli_avg_ra_y[AE_SMOOTH_X_Y_LENGTH];          /*smooth_cfg_v6p0_over_non_linear_avg_ratio_y[2];*/
                //
                85,           //int32_t opl_pf_ra;                  /*smooth_cfg_v6p0_over_pointlight_perframe_ratio;*/
                300,          //int32_t opl_lim_del_idx;            /*smooth_cfg_v6p0_over_pointlight_limit_delta_index;*/
                { 30, 70 },//int32_t opl_prb_ra_x[AE_SMOOTH_X_Y_LENGTH];            /*smooth_cfg_v6p0_over_pointlight_prob_ratio_x[2];*/
                { 70,  50 },//int32_t opl_prb_ra_y[AE_SMOOTH_X_Y_LENGTH];            /*smooth_cfg_v6p0_over_pointlight_prob_ratio_y[2];*/
                { 105, 150 },//int32_t opl_nli_cwv_ra_x[AE_SMOOTH_X_Y_LENGTH];        /*smooth_cfg_v6p0_over_pointlight_non_linear_cwv_ratio_x[2];*/
                { 100, 60 },//int32_t opl_nli_cwv_ra_y[AE_SMOOTH_X_Y_LENGTH];        /*smooth_cfg_v6p0_over_pointlight_non_linear_cwv_ratio_y[2];*/
                { 105, 150 },//int32_t opl_nli_avg_ra_x[AE_SMOOTH_X_Y_LENGTH];        /*smooth_cfg_v6p0_over_pointlight_non_linear_avg_ratio_x[2];*/
                { 100, 60 },//int32_t opl_nli_avg_ra_y[AE_SMOOTH_X_Y_LENGTH];        /*smooth_cfg_v6p0_over_pointlight_non_linear_avg_ratio_y[2];*/
                //
                -48, //int32_t pl_en_del_idx;                           /*smooth_cfg_v6p0_pointlight_enable_delta_idx;*/
                50,  //int32_t pl_pf_ra;                                        /*smooth_cfg_v6p0_pointlight_perframe_ratio;*/
                130, //int32_t pl_lim_del_idx;                          /*smooth_cfg_v6p0_pointlight_limit_delta_index;*/
                { 20, 60 },//int32_t pl_prb_ra_x[AE_SMOOTH_X_Y_LENGTH];                         /*smooth_cfg_v6p0_pointlight_prob_ratio_x[2];*/
                { 115,  130 },//int32_t pl_prb_ra_y[AE_SMOOTH_X_Y_LENGTH];                          /*smooth_cfg_v6p0_pointlight_prob_ratio_y[2];*/
                { 120, 140 },//int32_t pl_nli_cwv_ra_x[AE_SMOOTH_X_Y_LENGTH];                   /*smooth_cfg_v6p0_pointlight_non_linear_cwv_ratio_x[2];*/
                { 100, 140 },//int32_t pl_nli_cwv_ra_y[AE_SMOOTH_X_Y_LENGTH];                   /*smooth_cfg_v6p0_pointlight_non_linear_cwv_ratio_y[2];*/
                { 100, 120 },//int32_t pl_nli_cwv_sp_ra_x[AE_SMOOTH_X_Y_LENGTH];            /*smooth_cfg_v6p0_pointlight_non_linear_cwv_stop_ratio_x[2];*/
                { 55, 100 },//int32_t pl_nli_cwv_sp_ra_y[AE_SMOOTH_X_Y_LENGTH];         /*smooth_cfg_v6p0_pointlight_non_linear_cwv_stop_ratio_y[2];*/
                //
                1,//int32_t nor_bv_th_en;                               /*smooth_cfg_v6p0_normal_bv_th_enable;*/
                2,//int32_t nor_tbl_le;                                 /*smooth_cfg_v6p0_normal_tbl_length;*/
                { 9000, 10000 },//int32_t nor_bv_th_b2t[AE_SMOOTH_SEGMENT_LENGTH];                      /*smooth_cfg_v6p0_normal_bv_th_b2t[8];*/
                { 65, 45 },     //int32_t nor_pf_ra_b2t[AE_SMOOTH_SEGMENT_LENGTH];                      /*smooth_cfg_v6p0_normal_perframe_ratio_b2t[8];*/
                { 9000, 10000 },//int32_t nor_bv_th_d2t[AE_SMOOTH_SEGMENT_LENGTH];                      /*smooth_cfg_v6p0_normal_bv_th_d2t[8];*/
                { 40, 30 },     //int32_t nor_pf_ra_d2t[AE_SMOOTH_SEGMENT_LENGTH];                      /*smooth_cfg_v6p0_normal_perframe_ratio_d2t[8];*/
                65,  //int32_t nor_pf_ra_b2t_def;                   /*smooth_cfg_v6p0_normal_perframe_ratio_b2t_default;*/
                40,  //int32_t nor_pf_ra_d2t_def;                   /*smooth_cfg_v6p0_normal_perframe_ratio_d2t_default;*/
                //
                { 105, 150 },//int32_t nor_nli_cwv_ra_x[AE_SMOOTH_X_Y_LENGTH];              /*smooth_cfg_v6p0_normal_non_linear_cwv_ratio_x[2];*/
                { 100,  60 },//int32_t nor_nli_cwv_ra_y[AE_SMOOTH_X_Y_LENGTH];              /*smooth_cfg_v6p0_normal_non_linear_cwv_ratio_y[2];*/
                { 105, 150 },//int32_t nor_nli_avg_ra_x[AE_SMOOTH_X_Y_LENGTH];              /*smooth_cfg_v6p0_normal_non_linear_avg_ratio_x[2];*/
                { 100,  60 },//int32_t nor_nli_avg_ra_y[AE_SMOOTH_X_Y_LENGTH];              /*smooth_cfg_v6p0_normal_non_linear_avg_ratio_y[2];*/
                { 50, 100 },//int32_t nor_del_idx_ra_x[AE_SMOOTH_X_Y_LENGTH];               /*smooth_cfg_v6p0_normal_delta_idx_ratio_x[2];*/
                { 100, 70 },//int32_t nor_del_idx_ra_y[AE_SMOOTH_X_Y_LENGTH];               /*smooth_cfg_v6p0_normal_delta_idx_ratio_y[2];*/
                80,//int32_t nor_en_del_idx_ra_th;              /*smooth_cfg_v6p0_normal_enable_delta_idx_ratio_thd;*/
                //
                95,   //int32_t ex_o_prc;                                   /*smooth_cfg_v6p0_extreme_overexp_perc;*/
                5,    //int32_t ex_u_prc;                                   /*smooth_cfg_v6p0_extreme_underexp_perc;*/
                //
                10,   //int32_t o_prb_hb_prc;                           /*smooth_cfg_v6p0_overexp_prob_high_bound_perc;*/
                120,  //int32_t o_prb_nli_ra_th;                    /*smooth_cfg_v6p0_overexp_prob_non_linear_ratio_th;*/
                40,   //int32_t o_prb_lp_th;                            /*smooth_cfg_v6p0_overexp_prob_light_pixel_th;*/
                190,  //int32_t o_prb_cwv_th;                           /*smooth_cfg_v6p0_overexp_prob_cwv_th;*/
                //
                10,   //int32_t opl_prb_hb_prc;                     /*smooth_cfg_v6p0_overexp_pl_prob_high_bound_perc;*/
                30,   //int32_t opl_lb_prc;                             /*smooth_cfg_v6p0_overexp_pl_prob_low_bound_perc;*/
                9000, //int32_t opl_prb_bv_th;                      /*smooth_cfg_v6p0_overexp_pl_prob_bv_th;*/
                140,  //int32_t opl_prb_nli_ra_th;              /*smooth_cfg_v6p0_overexp_pl_prob_non_linear_ratio_th;*/
                200,  //int32_t opl_prb_li_cwv_th;              /*smooth_cfg_v6p0_overexp_pl_prob_linear_cwv_th;*/
                16,   //int32_t opl_prb_o_prc;                      /*smooth_cfg_v6p0_overexp_pl_prob_over_perc;*/
                25,   //int32_t opl_prb_lp_prc;                     /*smooth_cfg_v6p0_overexp_pl_prob_light_pixel_perc;*/
                30,   //int32_t opl_prb_dp_prc;                     /*smooth_cfg_v6p0_overexp_pl_prob_dark_pixel_perc;*/
                //
                30,    //int32_t pl_prb_lb_prc;                     /*smooth_cfg_v6p0_pl_prob_low_bound_perc;*/
                7,     //int32_t pl_prb_hb_prc;                     /*smooth_cfg_v6p0_pl_prob_high_bound_perc;*/
                4,     //int32_t pl_prb_bb_prc;                     /*smooth_cfg_v6p0_pl_prob_black_bound_perc;*/
                660,   //int32_t pl_prb_evd_th;                     /*smooth_cfg_v6p0_pl_prob_EVD_th;*/
                8000,  //int32_t pl_prb_bv_th;                          /*smooth_cfg_v6p0_pl_prob_bv_th;*/
                50,    //int32_t pl_prb_mp_prc;                     /*smooth_cfg_v6p0_pl_prob_mid_pixel_perc;*/
                30,    //int32_t pl_prb_dp_prc;                     /*smooth_cfg_v6p0_pl_prob_dark_pixel_perc;*/
                10,    //int32_t pl_prb_lpdw_prc;                   /*smooth_cfg_v6p0_pl_prob_light_pixel_dw_perc;*/
                40,    //int32_t pl_prb_lpup_prc;                   /*smooth_cfg_v6p0_pl_prob_light_pixel_up_perc;*/
                30,    //int32_t pl_prb_bp_prc;                     /*smooth_cfg_v6p0_pl_prob_black_pixel_perc;*/
                //
                60,//int32_t fd_cp_ra;                                 /*smooth_cfg_v6p0_face_comp_ratio;*/
                { 120, 200 },//int32_t fd_pf_ra_b2t_x[AE_SMOOTH_X_Y_LENGTH];                /*smooth_cfg_v6p0_face_perframe_ratio_b2t_x[2];*/
                { 40, 60 },//int32_t fd_pf_ra_b2t_y[AE_SMOOTH_X_Y_LENGTH];              /*smooth_cfg_v6p0_face_perframe_ratio_b2t_y[2];*/
                { 120, 200 },//int32_t fd_pf_ra_d2t_x[AE_SMOOTH_X_Y_LENGTH];                /*smooth_cfg_v6p0_face_perframe_ratio_d2t_x[2];*/
                { 30, 50 },//int32_t fd_pf_ra_d2t_y[AE_SMOOTH_X_Y_LENGTH];              /*smooth_cfg_v6p0_face_perframe_ratio_d2t_y[2];*/
                //
                1, //int32_t gyro_en;                                   /*smooth_cfg_v6p0_smooth_gyro_enable;*/
                80,//int32_t gyro_on_th;                                /*smooth_cfg_v6p0_gyro_on_th;*/
                0,
                2,
                2,
                { 80, 220 },//int32_t gyro_x[AE_SMOOTH_X_Y_LENGTH];                             /*smooth_cfg_v6p0_gyro_x[2];*/
                { 4000, 8000 }, /*BV*/
                {
                    60, 10, 10, 10, 10, 10, 10, 10,    /*BV0*/
                    60, 10, 10, 10, 10, 10, 10, 10,    /*BV1*/
    				60, 10, 10, 10, 10, 10, 10, 10,    /*BV2*/
    				60, 10, 10, 10, 10, 10, 10, 10,    /*BV3*/
                    60, 10, 10, 10, 10, 10, 10, 10,    /*BV4*/
                    60, 10, 10, 10, 10, 10, 10, 10,    /*BV5*/
    				60, 10, 10, 10, 10, 10, 10, 10,    /*BV6*/
    				60, 10, 10, 10, 10, 10, 10, 10,    /*BV7*/
                },
                {
                    80, 80, 80, 80, 80, 80, 80, 80,   /*BV0*/
                    80, 80, 80, 80, 80, 80, 80, 80,   /*BV1*/
    				80, 80, 80, 80, 80, 80, 80, 80,   /*BV2*/
    				80, 80, 80, 80, 80, 80, 80, 80,   /*BV3*/
                    80, 80, 80, 80, 80, 80, 80, 80,   /*BV4*/
                    80, 80, 80, 80, 80, 80, 80, 80,   /*BV5*/
    				80, 80, 80, 80, 80, 80, 80, 80,   /*BV6*/
    				80, 80, 80, 80, 80, 80, 80, 80,   /*BV7*/
                },//int32_t gyro_y[AE_SMOOTH_X_Y_LENGTH];                              /*smooth_cfg_v6p0_gyro_y[2];*/
                //
                80,           //int32_t texo_pf_ra;                             /*smooth_cfg_v6p0_touch_extreme_over_perframe_ratio;*/
                { 100, 180 }, //int32_t texo_nli_cwv_ra_x[AE_SMOOTH_X_Y_LENGTH];            /*smooth_cfg_v6p0_touch_extreme_over_non_linear_cwv_ratio_x[2];*/
                { 100, 180 }, //int32_t texo_nli_cwv_ra_y[AE_SMOOTH_X_Y_LENGTH];            /*smooth_cfg_v6p0_touch_extreme_over_non_linear_cwv_ratio_y[2];*/
                50,           //int32_t texu_pf_ra;                             /*smooth_cfg_v6p0_touch_extreme_under_perframe_ratio;*/
                { 100, 180 }, //int32_t texu_nli_cwv_ra_x[AE_SMOOTH_X_Y_LENGTH];            /*smooth_cfg_v6p0_touch_extreme_under_non_linear_cwv_ratio_x[2];*/
                { 100, 180 }, //int32_t texu_nli_cwv_ra_y[AE_SMOOTH_X_Y_LENGTH];            /*smooth_cfg_v6p0_touch_extreme_under_non_linear_cwv_ratio_y[2];*/
                //
                1,//int32_t tnor_bv_th_en;                      /*smooth_cfg_v6p0_touch_normal_bv_th_enable;*/
                2,//int32_t tnor_tbl_le;                            /*smooth_cfg_v6p0_touch_normal_tbl_length;*/
                { 9000, 10000 },//int32_t tnor_bv_th_b2t[AE_SMOOTH_SEGMENT_LENGTH];             /*smooth_cfg_v6p0_touch_normal_bv_th_b2t[8];*/
                { 50, 45 },     //int32_t tnor_pf_ar_b2t[AE_SMOOTH_SEGMENT_LENGTH];             /*smooth_cfg_v6p0_touch_normal_perframe_ratio_b2t[8];*/
                { 9000, 10000 },//int32_t tnor_bv_th_d2t[AE_SMOOTH_SEGMENT_LENGTH];             /*smooth_cfg_v6p0_touch_normal_bv_th_d2t[8];*/
                { 30, 30 },     //int32_t tnor_pf_ar_d2t[AE_SMOOTH_SEGMENT_LENGTH];             /*smooth_cfg_v6p0_touch_normal_perframe_ratio_d2t[8];*/
                50,             //int32_t tnor_pf_ra_b2t_def;               /*smooth_cfg_v6p0_touch_normal_perframe_ratio_b2t_default;*/
                30,             //int32_t tnor_pf_ra_d2t_def;               /*smooth_cfg_v6p0_touch_normal_perframe_ratio_d2t_default;*/
                //
                { 105, 150 },//int32_t tnor_nli_cwv_ra_x[AE_SMOOTH_X_Y_LENGTH];         /*smooth_cfg_v6p0_touch_normal_non_linear_cwv_ratio_x[2];*/
                { 100,  60 },//int32_t tnor_nli_cwv_ra_y[AE_SMOOTH_X_Y_LENGTH];         /*smooth_cfg_v6p0_touch_normal_non_linear_cwv_ratio_y[2];*/
                { 105, 150 },//int32_t tnor_nli_avg_ra_x[AE_SMOOTH_X_Y_LENGTH];         /*smooth_cfg_v6p0_touch_normal_non_linear_avg_ratio_x[2];*/
                { 100,  60 },//int32_t tnor_nli_avg_ra_y[AE_SMOOTH_X_Y_LENGTH];         /*smooth_cfg_v6p0_touch_normal_non_linear_avg_ratio_y[2];*/
                { 50, 100 },//int32_t tnor_del_idx_ra_x[AE_SMOOTH_X_Y_LENGTH];          /*smooth_cfg_v6p0_touch_normal_delta_idx_ratio_x[2];*/
                { 100, 70 },//int32_t tnor_del_idx_ra_y[AE_SMOOTH_X_Y_LENGTH];          /*smooth_cfg_v6p0_touch_normal_delta_idx_ratio_y[2];*/
                80,//int32_t tnor_en_del_idx_ra_th;     /*smooth_cfg_v6p0_touch_normal_enable_delta_idx_ratio_thd;*/
                //
                0,//int32_t ts_small_prc;                           /*smooth_cfg_v6p0_temp_smooth_small_perc;*/
                6,//int32_t ts_fd_prc;                              /*smooth_cfg_v6p0_temp_smooth_face_perc;*/
                0,//int32_t ts_prc;                                     /*smooth_cfg_v6p0_temp_smooth_perc;*/
                //
                0,    //int32_t nor_del_idx_en;                     /*smooth_cfg_v6p0_normal_detal_idx_en;*/
                {0, 0}, //int32_t nor_del_idx_b2t_x[AE_SMOOTH_X_Y_LENGTH];            /*smooth_cfg_v6p0_normal_detal_idx_b2t_x[2];*/
                {0, 0}, //int32_t nor_del_idx_b2t_y[AE_SMOOTH_X_Y_LENGTH];            /*smooth_cfg_v6p0_normal_detal_idx_b2t_y[2];*/
                {0, 0}, //int32_t nor_del_idx_d2t_x[AE_SMOOTH_X_Y_LENGTH];            /*smooth_cfg_v6p0_normal_detal_idx_d2t_x[2];*/
                {0, 0}, //int32_t nor_del_idx_d2t_y[AE_SMOOTH_X_Y_LENGTH];            /*smooth_cfg_v6p0_normal_detal_idx_d2t_y[2];*/
                //
                0,  //int32_t fd_max_st_en;                         /*smooth_cfg_v6p0_face_max_step_enable;*/
                {4000, 8000, 0, 0, 0, 0, 0, 0}, //int32_t fd_st_bv_th[AE_SMOOTH_SEGMENT_LENGTH];                      /*smooth_cfg_v6p0_face_step_bv_th[8];*/
                {24, 40, 0, 0, 0, 0, 0, 0}, //int32_t fd_max_st[AE_SMOOTH_SEGMENT_LENGTH];                            /*smooth_cfg_v6p0_face_max_step[8];*/
                2,  //int32_t fd_tbl_le;                                /*smooth_cfg_v6p0_face_tbl_length;*/                              /*smooth_cfg_v6p0_face_tbl_length;*/
                //
                1,  //int32_t one_step_idx_enable;
                0,  //int32_t one_step_idx_bv_en;
                0,  //int32_t one_step_tbl_length;
                {0},//int32_t one_step_idx_bv[8];
                {0},//int32_t one_step_idx_in_th[8];
                {0},//int32_t one_step_idx_out_th[8];
                {0},//int32_t one_step_idx_linear_avg_th[8];
                20, //int32_t one_step_idx_in_th_def;
                30, //int32_t one_step_idx_out_th_def;
                90, //int32_t one_step_linear_avg_th_def;
                -90,//int32_t one_step_angle_th;
                //
                5,//int32_t ts_onst_prc;                            /*smooth_cfg_v6p0_temp_smooth_one_step_perc;*/
                5,//int32_t ts_cnt_prc;                             /*smooth_cfg_v6p0_temp_smooth_cnt_perc;*/
                6,//int32_t ts_cnt;                                     /*smooth_cfg_v6p0_temp_smooth_cnt;*/
                1 //int32_t af_ae_f;
            },
            { 10, 5, 10, 5, 5, 5, 10, 5}
        },
        {
            {
                9385001,
                6885,
                0,
                0,
                0,
                0,
            },
            //ae_nvram_sync_para_t sync;
            {
                0,  //int32_t  ev_offset1000;
                3000,   //int32_t max_comp_evd1000;
                {299, 587, 114},  //uint32_t rgb2y_coef[3];
                0,   //uint32_t fix_regression_evd1000;
                AESYNC_GAIN_RANGE_AS_PLINE,   //AESYNC_GAIN_RANGE gain_range_sel;
                true,   //uint32_t regresion_en;
                false,  //uint32_t fix_regression_evd_en;
                true,   //uint32_t exp_translate_en;
                false,  //uint32_t extend_exp_en;
                true,  //uint32_t shrink_exp_en;
                true,  //uint32_t exp_same_as_master_en;
                false,  //uint32_t zoom_roi_en;
                false,  //uint32_t zoom_blend_en;
                10,   //uint32_t zoom_num;
                { 0, 2000, 4000, 6000, 8000, 10000, 12000, 14000, 16000, 18000 },//int32_t zoom_steps[AESYNC_ZOOM_STEP_SIZE];
                { 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024, 1024 },   //uint32_t zoom_blend_ra[AESYNC_ZOOM_STEP_SIZE];
                { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },                      //uint32_t  roi_wide_l[AESYNC_ZOOM_STEP_SIZE];
                { 120, 120, 120, 120, 120, 120, 120, 120, 120, 120 },  //uint32_t  roi_wide_r[AESYNC_ZOOM_STEP_SIZE];
                { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },                      //uint32_t  roi_wide_u[AESYNC_ZOOM_STEP_SIZE];
                { 90, 90, 90, 90, 90, 90, 90, 90, 90, 90 },            //uint32_t  roi_wide_d[AESYNC_ZOOM_STEP_SIZE];
                { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },                      //uint32_t  roi_tele_l[AESYNC_ZOOM_STEP_SIZE];
                { 120, 120, 120, 120, 120, 120, 120, 120, 120, 120 },  //uint32_t  roi_tele_r[AESYNC_ZOOM_STEP_SIZE];
                { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },                      //uint32_t  roi_tele_u[AESYNC_ZOOM_STEP_SIZE];
                { 90, 90, 90, 90, 90, 90, 90, 90, 90, 90 },            //uint32_t  roi_tele_d[AESYNC_ZOOM_STEP_SIZE];
                0,   //int32_t focal_length100;
                //uint32_t weighting_tbl[AE_V4P0_BLOCK_NO*AE_V4P0_BLOCK_NO];
                {
                    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
                    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
                    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
                    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
                    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
                    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
                    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
                    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
                    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
                    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
                    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
                    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
                    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
                    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
                    100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100,
                },
                false,   //uint32_t ev2ratio_en;
                //uint32_t delta_ev2ratio_bmdn[AESYNC_DENOISE_MAPPING_TABLE_MAX];
                {
                    1000,  // EV   0
                    1000,   //EV    0.1
                    1000,   //EV    0.2
                    1000,   //EV    0.3
                    1000,   //EV    0.4
                    1000,   //EV    0.5
                    1000,   //EV    0.6
                    1000,   //EV    0.7
                    1000,   //EV    0.8
                    1000,   //EV    0.9
                    1000,   //EV    1
                    1000,   //EV    1.1
                    1000,   //EV    1.2
                    1000,   //EV    1.3
                    1000,   //EV    1.4
                    1000,   //EV    1.5
                    1000,   //EV    1.6
                    1000,   //EV    1.7
                    1000,   //EV    1.8
                    1000,   //EV    1.9
                    1000,   //EV    2
                    1000,   //EV    2.1
                    1000,   //EV    2.2
                    1000,   //EV    2.3
                    1000,   //EV    2.4
                    1000,   //EV    2.5
                    1000,   //EV    2.6
                    1000,   //EV    2.7
                    1000,   //EV    2.8
                    1000,   //EV    2.9
                },
                //uint32_t delta_ev2ratio_mfnr[AESYNC_DENOISE_MAPPING_TABLE_MAX];
                {
                    1000,  // EV   0
                    1000,   //EV    0.1
                    1000,   //EV    0.2
                    1000,   //EV    0.3
                    1000,   //EV    0.4
                    1000,   //EV    0.5
                    1000,   //EV    0.6
                    1000,   //EV    0.7
                    1000,   //EV    0.8
                    1000,   //EV    0.9
                    1000,   //EV    1
                    1000,   //EV    1.1
                    1000,   //EV    1.2
                    1000,   //EV    1.3
                    1000,   //EV    1.4
                    1000,   //EV    1.5
                    1000,   //EV    1.6
                    1000,   //EV    1.7
                    1000,   //EV    1.8
                    1000,   //EV    1.9
                    1000,   //EV    2
                    1000,   //EV    2.1
                    1000,   //EV    2.2
                    1000,   //EV    2.3
                    1000,   //EV    2.4
                    1000,   //EV    2.5
                    1000,   //EV    2.6
                    1000,   //EV    2.7
                    1000,   //EV    2.8
                    1000,   //EV    2.9
                },
                false, // uint32_t module_calibration_enable;
            },
            { 0 }
        },
        {
            {
                9385001,
                6885,
                0,
                0,
                0,
                0,
            },
            //ae_nvram_hdr_para_t hdr;
            {
                5,                            //uint32_t bvtgt_tbl_len;                         // max is 8
                { -1500, -500, 1000, 3500, 8000 },  //int32_t  bvtgt_bv[AE_RATIOTBL_MAXSIZE]; // | -1000 | 1000 | 3500 | 8000 |
                {    50,   58,   60,   63,   67 },//uint32_t bvtgt_tgt[AE_RATIOTBL_MAXSIZE];    // |    50 |   55 |   58 |   60 |
                //
                ////OEWV for MT
                true,      //uint32_t oewv_protect_en;
                30,     //uint32_t oewv_rt_hi_thd;
                15,     //uint32_t oewv_rt_mid_thd;
                5,      //uint32_t oewv_rt_low_thd;
                2,      //uint32_t oewv_y_max_lv;
                240,    //uint32_t oewv_thd;
                //
                ////CCU_strMvhdrFDTargetCFG HdrFDTargetInfo;
                3,      //uint32_t hdrfdtgt_tbl_len;                           // max is 8
                { -2000,    0,  4000 }, //int32_t  hdrfdtgt_bv[AE_RATIOTBL_MAXSIZE];   // | -2000 |    0 |  400 |
                {    40,   35,    30 }, //uint32_t hdrfdtgt_tgt[AE_RATIOTBL_MAXSIZE];    // |    40 |   35 |   30 |
                ////CCU_strHdrSmoothCFG HdrSmoothCFG;
                950,    //uint32_t b2d_li_thd;
                -45,    //int32_t  b2dbvacc_ext_bound;
                -22,    //int32_t  b2dbvacc_nli_bound;
                -16,    //int32_t  b2d_nli_evd_bound;
                -12,    //int32_t  b2d_li_evd_bound;
                750,    //uint32_t d2b_li_Thd;
                50,     //int32_t  d2b_nli_evd_bound;
                50,     //int32_t  d2b_li_evb_bound;
                ////CCU_str3ExpomVHdrCFG ThreeExpomVHdrCFG;
                false,   //uint32_t rt_sm_ratio_en;
                4,      //uint32_t rt_sm_ratio_tbl_len;
                { 30, 100, 400, 800 },   //uint32_t rt_sm_ratio_tbl_x[AE_RATIOTBL_MAXSIZE];
                { 512, 512, 256, 128 }, //uint32_t rt_sm_ratio_tbl_y[AE_RATIOTBL_MAXSIZE];
                true,   //uint32_t rt_sm_limit_en;
                6,      //uint32_t rt_sm_limit_tbl_len;
                {100, 200, 300, 400, 500, 2000}, //uint32_t rt_sm_limit_tbl_x[AE_RATIOTBL_MAXSIZE];
                {768, 650, 512, 350, 0, 0}, //uint32_t rt_sm_limit_tbl_y[AE_RATIOTBL_MAXSIZE];
                ////CCU_strHdrRatioCFG HdrRatioControl;
                ////Conditions for HDR Maximum Ratio Control
                200,    //uint32_t init_rt_100base; //for mgr use
                8000,   //int32_t  max_hdr_rt;        // 6400 stands for 64x [LE/SE]
                8000,   //int32_t  max_hdr_rt_face;   // 6400 stands for 64x [LE/SE]
                4,      //uint32_t max_hdr_rt_bvtbl_len;         // max is 8
                {-1000, 1000, 3500, 8000},  //int32_t  max_hdr_rt_bvtbl_bv[AE_RATIOTBL_MAXSIZE]; // | -1000 | 1000 | 3500 | 8000 |
                {8000, 8000, 8000, 8000},   //uint32_t max_hdr_rt_bvtbl_rt[AE_RATIOTBL_MAXSIZE]; // |  100x | 200x | 400x | 800x |
                2,  //uint32_t min_hdr_rt_bvtbl_len;         // max is 8
                {1000, 4000},   //int32_t  min_hdr_rt_bvtbl_bv[AE_RATIOTBL_MAXSIZE]; // | -1000 | 1000 | 3500 | 8000 |
                {2000, 2000},   //uint32_t min_hdr_rt_bvtbl_rt[AE_RATIOTBL_MAXSIZE]; // |  100x | 200x | 400x | 800x |
                //
                //// for HDR Ratio Converge
                20,     //int32_t hdr_rt_in_thd;  // 0.15*100
                30,     //int32_t hdr_rt_out_thd;  // 0.30*100
                3,      //int32_t hdr_rt_stbcnt_thd;
                //
                //// Method1 : HL Avg Control
                false,  //uint32_t hlavg_rt_ctrl_en;   // Enable HLAvg Control
                200,    //uint32_t hlavg_rt_ctrl_rt;             // 20 means 20%
                120,    //uint32_t hlavg_rt_ctrl_tgt;            // 100 for 256
                //
                //// Method2 : OE Hist Control
                ////HdrRatioControl_HdrRatioTargetInfo_EnableHistOERatioControl
                true,                           //uint32_t histoe_rt_ctrl_en;                // Enable HistOE Control
                5,                              //uint32_t histoe_rt_oe1_len;                         // max is 8
                {1,  2,    5,  85, 235},        //int32_t  histoe_rt_oe1_pcnt[AE_RATIOTBL_MAXSIZE];
                {60, 80, 100, 200, 300},        //int32_t  histoe_rt_oe1_mv[AE_RATIOTBL_MAXSIZE];
                5,                              //uint32_t histoe_rt_oe2_len;                          // max is 8
                {0, 3, 20, 30, 100},            //int32_t  histoe_rt_oe2_pcnt[AE_RATIOTBL_MAXSIZE];
                {-200, -200, -100, -60, -30},   //int32_t  histoe_rt_oe2_mv[AE_RATIOTBL_MAXSIZE];
                //
                ////ratio control V2.0
                true,   //uint32_t rt_ctrl_v2p0_en;
                512,    //uint32_t oe1_bin_start; //last bin
                1023,    //uint32_t oe1_bin_end; //last bin
                256,     //uint32_t oe2_bin_start; //2nd last bin
                511,    //uint32_t oe2_bin_end; //2nd last bin
                30,     //uint32_t oe1_tgt;
                true,   //uint32_t oe1_tgtbybv_en; //if enabled, oe1_tgt is unused
                {-500, 3000},   //int32_t oe1_tgtbybv_bv[2];
                {30, 15},       //uint32_t oe1_tgtbybv_tgt[2];
                3,                  //uint32_t oe1_diff_len;
                {2, 5, 15},         //uint32_t oe1_diff[AE_RATIOTBL_MAXSIZE];
                {256, 512, 1024},   //uint32_t oe1_diff_rt[AE_RATIOTBL_MAXSIZE];
                //
                5,  //uint32_t oe_in_stbthd_up;
                5,  //uint32_t oe_in_stbthd_dn;
                14, //uint32_t oe_out_stbthd_up;
                14, //uint32_t oe_out_stbthd_dn;
                //
                //
                //// Conditions for Ratio Decrease : BV & OE Ratio
                false,  //uint32_t rt_bvdec_en;                              // Enable BV Decrease
                4,      //uint32_t rt_bvdec_tbl_len;                                // max is 8
                { -1000, 1000, 3500, 8000 },  //int32_t  rt_bvdec_tbl_bv[AE_RATIOTBL_MAXSIZE];   // | -1000 | 1000 | 3500 | 8000 |
                { 1000, 1000, 1000, 1000 }, //uint32_t rt_bvdec_tbl_rt[AE_RATIOTBL_MAXSIZE];  // |  50%  | 80%  | 100% | 100% |
                //// Calculate (OE_10bins/ALL_256bins) Ratio
                false,  //uint32_t rt_oedec_en;                              // Enable OE Decrease
                40,      //uint32_t rt_oedec_oebinn;                                     // OE : 1023~(1023-OEBinN)
                4,      //uint32_t rt_oedec_tbl_len;                                // max is 8
                { 10, 20, 30, 40 },             //uint32_t rt_oedec_tbl_oe[AE_RATIOTBL_MAXSIZE];    // | 10% | 20% | 30% | 40% |
                { 1000, 1000, 1000, 1000 },     //uint32_t rt_oedec_tbl_rt[AE_RATIOTBL_MAXSIZE];  // | 80% | 80% | 100%| 100%|
                0,  //int32_t  hdr_rt2exp_mthd;         //0: exp first. 1: gain first
                ////CCU_strMHDRHSMultiStep HdrHsMultiStep;
                true,   //uint32_t mstp_hs_en;         //Enable HS enhance method : MultiStep HS(Conflict with ori HS)
                4,      //uint32_t mstp_hs_tbl_len;                                //Max size : 16
                { 1100, 2600, 4500, 6000 }, //uint32_t mstp_hs_evd[AE_RATIOTBL_MAXSIZE];            //size must large than u4TblLength
                { 65, 150, 165, 180 },      //uint32_t mstp_hs_odr_thd[AE_RATIOTBL_MAXSIZE];        //size must large than u4TblLength
                { 65, 150, 165, 180 },      //uint32_t mstp_hs_idr_thd[AE_RATIOTBL_MAXSIZE];         //size must large than u4TblLength
                { 4500, 8000 },             //int32_t  mstp_hs_bvrt[2];                      //MS_HS In/Out door BV threshold
                ////CCU_strHdrPre2CapComp HdrPre2CapCompCFG;
                true,   //uint32_t pre2cap_comp_en;
                0,      //uint32_t pre2cap_comp_mthd;     //0:None 1:Offset 2:FDRatio 3:Offset+FDRatio
                { 1024, 4096 }, //uint32_t pre2cap_comp_fdavgrt_x[2];
                { 1024, 1300 }, //uint32_t pre2cap_comp_fdavgrt_y[2];
                //
                ////smooth normal
                true,               //int32_t sm_b2t_max_st_en;                         /*max_step_enable;*/
                2,                  //int32_t sm_b2t_max_st_le;                             /*tbl_length;*/
                { 1000, 4000 },     //int32_t sm_b2t_max_st_bv[AE_SMOOTH_SEGMENT_LENGTH];   /*step_bv_th[8];*/
                { 80, 80 },         //int32_t sm_b2t_max_st[AE_SMOOTH_SEGMENT_LENGTH];      /*smax_step[8];*/
                true,               //int32_t sm_d2t_max_st_en;                         /*max_step_enable;*/
                2,                  //int32_t sm_d2t_max_st_le;                             /*tbl_length;*/
                { 1000, 4000 },     //int32_t sm_d2t_max_st_bv[AE_SMOOTH_SEGMENT_LENGTH];   /*step_bv_th[8];*/
                { 100000, 100000 }, //int32_t sm_d2t_max_st[AE_SMOOTH_SEGMENT_LENGTH];      /*smax_step[8];*/
                100,                //int32_t sm_cp_ra;                                 /*comp_ratio;*/
                { 120, 200 },       //int32_t sm_pf_ra_b2t_x[AE_SMOOTH_X_Y_LENGTH];             /*smooth perframe_ratio_b2t_x[2];*/
                { 45, 45 },         //int32_t sm_pf_ra_b2t_y[AE_SMOOTH_X_Y_LENGTH];             /*smooth perframe_ratio_b2t_y[2];*/
                { 120, 200 },       //int32_t sm_pf_ra_d2t_x[AE_SMOOTH_X_Y_LENGTH];             /*smooth perframe_ratio_d2t_x[2];*/
                { 55, 55 },         //int32_t sm_pf_ra_d2t_y[AE_SMOOTH_X_Y_LENGTH];             /*smooth perframe_ratio_d2t_y[2];*/
                ////smooth fd
                true,               //int32_t sm_fd_b2t_max_st_en;                          /*max_step_enable;*/
                2,                  //int32_t sm_fd_b2t_max_st_le;                              /*tbl_length;*/
                { 1000, 4000 },     //int32_t sm_fd_b2t_max_st_bv[AE_SMOOTH_SEGMENT_LENGTH];    /*step_bv_th[8];*/
                { 80, 80 },         //int32_t sm_fd_b2t_max_st[AE_SMOOTH_SEGMENT_LENGTH];       /*smax_step[8];*/
                true,               //int32_t sm_fd_d2t_max_st_en;                          /*max_step_enable;*/
                2,                  //int32_t sm_fd_d2t_max_st_le;                              /*tbl_length;*/
                { 1000, 4000 },     //int32_t sm_fd_d2t_max_st_bv[AE_SMOOTH_SEGMENT_LENGTH];    /*step_bv_th[8];*/
                { 100000, 100000 },  //int32_t sm_fd_d2t_max_st[AE_SMOOTH_SEGMENT_LENGTH];      /*smax_step[8];*/
                60,                //int32_t sm_fd_cp_ra;                                  /*comp_ratio;*/
                { 120, 200 },       //int32_t sm_fd_pf_ra_b2t_x[AE_SMOOTH_X_Y_LENGTH];              /*smooth perframe_ratio_b2t_x[2];*/
                { 30, 30 },         //int32_t sm_fd_pf_ra_b2t_y[AE_SMOOTH_X_Y_LENGTH];              /*smooth perframe_ratio_b2t_y[2];*/
                { 120, 200 },       //int32_t sm_fd_pf_ra_d2t_x[AE_SMOOTH_X_Y_LENGTH];              /*smooth perframe_ratio_d2t_x[2];*/
                { 30, 30 },         //int32_t sm_fd_pf_ra_d2t_y[AE_SMOOTH_X_Y_LENGTH];              /*smooth perframe_ratio_d2t_y[2];*/
                ////smooth touch
                true,               //int32_t sm_tch_b2t_max_st_en;                         /*max_step_enable;*/
                2,                  //int32_t sm_tch_b2t_max_st_le;                             /*tbl_length;*/
                { 1000, 4000 },     //int32_t sm_tch_b2t_max_st_bv[AE_SMOOTH_SEGMENT_LENGTH];   /*step_bv_th[8];*/
                { 80, 80 },         //int32_t sm_tch_b2t_max_st[AE_SMOOTH_SEGMENT_LENGTH];      /*smax_step[8];*/
                true,               //int32_t sm_tch_d2t_max_st_en;                         /*max_step_enable;*/
                2,                  //int32_t sm_tch_d2t_max_st_le;                             /*tbl_length;*/
                { 1000, 4000 },     //int32_t sm_tch_d2t_max_st_bv[AE_SMOOTH_SEGMENT_LENGTH];   /*step_bv_th[8];*/
                { 100000, 100000 }, //int32_t sm_tch_d2t_max_st[AE_SMOOTH_SEGMENT_LENGTH];      /*smax_step[8];*/
                100,                //int32_t sm_tch_cp_ra;                                 /*comp_ratio;*/
                { 120, 200 },       //int32_t sm_tch_pf_ra_b2t_x[AE_SMOOTH_X_Y_LENGTH];             /*smooth perframe_ratio_b2t_x[2];*/
                { 35, 35 },         //int32_t sm_tch_pf_ra_b2t_y[AE_SMOOTH_X_Y_LENGTH];             /*smooth perframe_ratio_b2t_y[2];*/
                { 120, 200 },       //int32_t sm_tch_pf_ra_d2t_x[AE_SMOOTH_X_Y_LENGTH];             /*smooth perframe_ratio_d2t_x[2];*/
                { 40, 40 },         //int32_t sm_tch_pf_ra_d2t_y[AE_SMOOTH_X_Y_LENGTH];             /*smooth perframe_ratio_d2t_y[2];*/
                //
                ////Contrast link
                true,   //uint32_t fd_lk_by_fd_prob_en;
                0,      //uint32_t se_evd_d2t_wt;   /*0: SE_EVD uses 100% D2T.  512: 50% B2T 50% D2T*/
                5,      //uint32_t se_evd_lut_bv_len;
                6,      //uint32_t se_evd_lut_b2t_y_len;
                { -5000, 0, 5000, 10000, 13000 },   //int32_t se_evd_lut_bv[AE_RATIOTBL_MAXSIZE];
                { 3680, 4160, 4800, 5600, 6400, 7680 },   //uint32_t se_evd_lut_b2t_y[AE_RATIOTBL_MAXSIZE];
                {
                    -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
                        -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
                        -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
                        -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
                        -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
                        -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
                        -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
                        -2000, -2000, -2000, -2000, -2000, -2000, -2000, -2000,
                    },  //int32_t se_evd_lut[AE_RATIOTBL_MAXSIZE * AE_RATIOTBL_MAXSIZE];
                2,                  //uint32_t se_b_pcnt_len;
                { 1000, 4000 },    //int32_t se_b_pcnt_bv[AE_RATIOTBL_MAXSIZE];
                { 120, 120 },         //uint32_t se_b_pcnt_pcnt[AE_RATIOTBL_MAXSIZE];
                8,  //uint32_t pseudo_y_len;
                { 0, 30, 70, 120, 170, 220, 260, 300 }, //uint32_t pseudo_y_oe_rt[AE_RATIOTBL_MAXSIZE];
                { 0, 480, 1120, 1920, 2720, 3520, 4160, 4800 }, //uint32_t pseudo_y_y[AE_RATIOTBL_MAXSIZE];
                4,  //uint32_t hdr_det_lut_le_len;
                4,  //uint32_t hdr_det_lut_se_len;
                {0, 1000, 2000, 3000, 3000, 3000, 3000}, //int32_t hdr_det_lut_le[AE_RATIOTBL_MAXSIZE];
                { -3000, -2000, -1000, 0, 0, 0, 0, 0 },  // int32_t hdr_det_lut_se[AE_RATIOTBL_MAXSIZE];
                {
                    0, 0, 0, 0, 0, 0, 0, 0,
                    0, 0, 0, 0, 0, 0, 0, 0,
                    0, 0, 0, 0, 0, 0, 0, 0,
                    0, 0, 0, 0, 0, 0, 0, 0,
                    0, 0, 0, 0, 0, 0, 0, 0,
                    0, 0, 0, 0, 0, 0, 0, 0,
                    0, 0, 0, 0, 0, 0, 0, 0,
                    0, 0, 0, 0, 0, 0, 0, 0,
                },  //uint32_t hdr_det_lut[AE_RATIOTBL_MAXSIZE * AE_RATIOTBL_MAXSIZE];
                50, //uint32_t le_d_min_pcnt;
                2,  //uint32_t le_d_hbnd_len;
                { 1000, 7000 }, //int32_t le_d_hbnd_bv[AE_RATIOTBL_MAXSIZE];
                { 150, 150 },   //uint32_t le_d_hbnd_thd[AE_RATIOTBL_MAXSIZE];
                2,  //uint32_t le_d_tgt_len;
                { 1000, 7000 }, //int32_t le_d_tgt_bv[AE_RATIOTBL_MAXSIZE];
                { 30, 30 },     //uint32_t le_d_tgt_thd[AE_RATIOTBL_MAXSIZE];
                10000,  //uint32_t le_min_cnt;
                200000, //uint32_t max_exp;     //us  100000
            },
            { 0 }
        },
        {
            {
                9385001,
                6885,
                0,
                0,
                0,
                0,
            },
            //ae_nvram_reserved_para_t reserved;
            { 0 },
            { 0 }
        },
    },
};
