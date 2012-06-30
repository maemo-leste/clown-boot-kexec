/*
 * ALSA SoC OMAP ABE driver
*
 * Author:          Laurent Le Faucheur <l-le-faucheur@ti.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */
#ifndef _ABE_DM_ADDR_H_
#define _ABE_DM_ADDR_H_
#define D_atcDescriptors_ADDR                               0
#define D_atcDescriptors_ADDR_END                           511
#define D_atcDescriptors_sizeof                             512
#define stack_ADDR                                          512
#define stack_ADDR_END                                      623
#define stack_sizeof                                        112
#define D_version_ADDR                                      624
#define D_version_ADDR_END                                  627
#define D_version_sizeof                                    4
#define D_BT_DL_FIFO_ADDR                                   1024
#define D_BT_DL_FIFO_ADDR_END                               1503
#define D_BT_DL_FIFO_sizeof                                 480
#define D_BT_UL_FIFO_ADDR                                   1536
#define D_BT_UL_FIFO_ADDR_END                               2015
#define D_BT_UL_FIFO_sizeof                                 480
#define D_MM_EXT_OUT_FIFO_ADDR                              2048
#define D_MM_EXT_OUT_FIFO_ADDR_END                          2527
#define D_MM_EXT_OUT_FIFO_sizeof                            480
#define D_MM_EXT_IN_FIFO_ADDR                               2560
#define D_MM_EXT_IN_FIFO_ADDR_END                           3039
#define D_MM_EXT_IN_FIFO_sizeof                             480
#define D_MM_UL2_FIFO_ADDR                                  3072
#define D_MM_UL2_FIFO_ADDR_END                              3551
#define D_MM_UL2_FIFO_sizeof                                480
#define D_VX_UL_FIFO_ADDR                                   3584
#define D_VX_UL_FIFO_ADDR_END                               4063
#define D_VX_UL_FIFO_sizeof                                 480
#define D_VX_DL_FIFO_ADDR                                   4096
#define D_VX_DL_FIFO_ADDR_END                               4575
#define D_VX_DL_FIFO_sizeof                                 480
#define D_DMIC_UL_FIFO_ADDR                                 4608
#define D_DMIC_UL_FIFO_ADDR_END                             5087
#define D_DMIC_UL_FIFO_sizeof                               480
#define D_MM_UL_FIFO_ADDR                                   5120
#define D_MM_UL_FIFO_ADDR_END                               5599
#define D_MM_UL_FIFO_sizeof                                 480
#define D_MM_DL_FIFO_ADDR                                   5632
#define D_MM_DL_FIFO_ADDR_END                               6111
#define D_MM_DL_FIFO_sizeof                                 480
#define D_TONES_DL_FIFO_ADDR                                6144
#define D_TONES_DL_FIFO_ADDR_END                            6623
#define D_TONES_DL_FIFO_sizeof                              480
#define D_VIB_DL_FIFO_ADDR                                  6656
#define D_VIB_DL_FIFO_ADDR_END                              7135
#define D_VIB_DL_FIFO_sizeof                                480
#define D_McPDM_DL_FIFO_ADDR                                7168
#define D_McPDM_DL_FIFO_ADDR_END                            7647
#define D_McPDM_DL_FIFO_sizeof                              480
#define D_McPDM_UL_FIFO_ADDR                                7680
#define D_McPDM_UL_FIFO_ADDR_END                            8159
#define D_McPDM_UL_FIFO_sizeof                              480
#define D_DEBUG_FIFO_ADDR                                   8160
#define D_DEBUG_FIFO_ADDR_END                               8255
#define D_DEBUG_FIFO_sizeof                                 96
#define D_DEBUG_FIFO_HAL_ADDR                               8256
#define D_DEBUG_FIFO_HAL_ADDR_END                           8287
#define D_DEBUG_FIFO_HAL_sizeof                             32
#define D_IOdescr_ADDR                                      8288
#define D_IOdescr_ADDR_END                                  8927
#define D_IOdescr_sizeof                                    640
#define d_zero_ADDR                                         8928
#define d_zero_ADDR_END                                     8931
#define d_zero_sizeof                                       4
#define dbg_trace1_ADDR                                     8932
#define dbg_trace1_ADDR_END                                 8932
#define dbg_trace1_sizeof                                   1
#define dbg_trace2_ADDR                                     8933
#define dbg_trace2_ADDR_END                                 8933
#define dbg_trace2_sizeof                                   1
#define dbg_trace3_ADDR                                     8934
#define dbg_trace3_ADDR_END                                 8934
#define dbg_trace3_sizeof                                   1
#define D_multiFrame_ADDR                                   8936
#define D_multiFrame_ADDR_END                               9335
#define D_multiFrame_sizeof                                 400
#define D_tasksList_ADDR                                    9336
#define D_tasksList_ADDR_END                                11383
#define D_tasksList_sizeof                                  2048
#define D_idleTask_ADDR                                     11384
#define D_idleTask_ADDR_END                                 11385
#define D_idleTask_sizeof                                   2
#define D_typeLengthCheck_ADDR                              11386
#define D_typeLengthCheck_ADDR_END                          11387
#define D_typeLengthCheck_sizeof                            2
#define D_maxTaskBytesInSlot_ADDR                           11388
#define D_maxTaskBytesInSlot_ADDR_END                       11389
#define D_maxTaskBytesInSlot_sizeof                         2
#define D_rewindTaskBytes_ADDR                              11390
#define D_rewindTaskBytes_ADDR_END                          11391
#define D_rewindTaskBytes_sizeof                            2
#define D_pCurrentTask_ADDR                                 11392
#define D_pCurrentTask_ADDR_END                             11393
#define D_pCurrentTask_sizeof                               2
#define D_pFastLoopBack_ADDR                                11394
#define D_pFastLoopBack_ADDR_END                            11395
#define D_pFastLoopBack_sizeof                              2
#define D_pNextFastLoopBack_ADDR                            11396
#define D_pNextFastLoopBack_ADDR_END                        11399
#define D_pNextFastLoopBack_sizeof                          4
#define D_ppCurrentTask_ADDR                                11400
#define D_ppCurrentTask_ADDR_END                            11401
#define D_ppCurrentTask_sizeof                              2
#define D_slotCounter_ADDR                                  11404
#define D_slotCounter_ADDR_END                              11405
#define D_slotCounter_sizeof                                2
#define D_loopCounter_ADDR                                  11408
#define D_loopCounter_ADDR_END                              11411
#define D_loopCounter_sizeof                                4
#define D_RewindFlag_ADDR                                   11412
#define D_RewindFlag_ADDR_END                               11413
#define D_RewindFlag_sizeof                                 2
#define D_Slot23_ctrl_ADDR                                  11416
#define D_Slot23_ctrl_ADDR_END                              11419
#define D_Slot23_ctrl_sizeof                                4
#define D_McuIrqFifo_ADDR                                   11420
#define D_McuIrqFifo_ADDR_END                               11483
#define D_McuIrqFifo_sizeof                                 64
#define D_PingPongDesc_ADDR                                 11484
#define D_PingPongDesc_ADDR_END                             11507
#define D_PingPongDesc_sizeof                               24
#define D_PP_MCU_IRQ_ADDR                                   11508
#define D_PP_MCU_IRQ_ADDR_END                               11509
#define D_PP_MCU_IRQ_sizeof                                 2
#define D_ctrlPortFifo_ADDR                                 11520
#define D_ctrlPortFifo_ADDR_END                             11535
#define D_ctrlPortFifo_sizeof                               16
#define D_Idle_State_ADDR                                   11536
#define D_Idle_State_ADDR_END                               11539
#define D_Idle_State_sizeof                                 4
#define D_Stop_Request_ADDR                                 11540
#define D_Stop_Request_ADDR_END                             11543
#define D_Stop_Request_sizeof                               4
#define D_Ref0_ADDR                                         11544
#define D_Ref0_ADDR_END                                     11545
#define D_Ref0_sizeof                                       2
#define D_DebugRegister_ADDR                                11548
#define D_DebugRegister_ADDR_END                            11687
#define D_DebugRegister_sizeof                              140
#define D_Gcount_ADDR                                       11688
#define D_Gcount_ADDR_END                                   11689
#define D_Gcount_sizeof                                     2
#define D_DCcounter_ADDR                                    11692
#define D_DCcounter_ADDR_END                                11695
#define D_DCcounter_sizeof                                  4
#define D_DCsum_ADDR                                        11696
#define D_DCsum_ADDR_END                                    11703
#define D_DCsum_sizeof                                      8
#define D_fastCounter_ADDR                                  11704
#define D_fastCounter_ADDR_END                              11707
#define D_fastCounter_sizeof                                4
#define D_slowCounter_ADDR                                  11708
#define D_slowCounter_ADDR_END                              11711
#define D_slowCounter_sizeof                                4
#define D_aUplinkRouting_ADDR                               11712
#define D_aUplinkRouting_ADDR_END                           11743
#define D_aUplinkRouting_sizeof                             32
#define D_VirtAudioLoop_ADDR                                11744
#define D_VirtAudioLoop_ADDR_END                            11747
#define D_VirtAudioLoop_sizeof                              4
#define D_AsrcVars_DL_VX_ADDR                               11748
#define D_AsrcVars_DL_VX_ADDR_END                           11779
#define D_AsrcVars_DL_VX_sizeof                             32
#define D_AsrcVars_UL_VX_ADDR                               11780
#define D_AsrcVars_UL_VX_ADDR_END                           11811
#define D_AsrcVars_UL_VX_sizeof                             32
#define D_CoefAddresses_VX_ADDR                             11812
#define D_CoefAddresses_VX_ADDR_END                         11843
#define D_CoefAddresses_VX_sizeof                           32
#define D_AsrcVars_MM_EXT_IN_ADDR                           11844
#define D_AsrcVars_MM_EXT_IN_ADDR_END                       11875
#define D_AsrcVars_MM_EXT_IN_sizeof                         32
#define D_CoefAddresses_MM_ADDR                             11876
#define D_CoefAddresses_MM_ADDR_END                         11907
#define D_CoefAddresses_MM_sizeof                           32
#define D_APS_DL1_M_thresholds_ADDR                         11908
#define D_APS_DL1_M_thresholds_ADDR_END                     11915
#define D_APS_DL1_M_thresholds_sizeof                       8
#define D_APS_DL1_M_IRQ_ADDR                                11916
#define D_APS_DL1_M_IRQ_ADDR_END                            11917
#define D_APS_DL1_M_IRQ_sizeof                              2
#define D_APS_DL1_C_IRQ_ADDR                                11918
#define D_APS_DL1_C_IRQ_ADDR_END                            11919
#define D_APS_DL1_C_IRQ_sizeof                              2
#define D_TraceBufAdr_ADDR                                  11920
#define D_TraceBufAdr_ADDR_END                              11921
#define D_TraceBufAdr_sizeof                                2
#define D_TraceBufOffset_ADDR                               11922
#define D_TraceBufOffset_ADDR_END                           11923
#define D_TraceBufOffset_sizeof                             2
#define D_TraceBufLength_ADDR                               11924
#define D_TraceBufLength_ADDR_END                           11925
#define D_TraceBufLength_sizeof                             2
#define D_AsrcVars_ECHO_REF_ADDR                            11928
#define D_AsrcVars_ECHO_REF_ADDR_END                        11959
#define D_AsrcVars_ECHO_REF_sizeof                          32
#define D_Pempty_ADDR                                       11960
#define D_Pempty_ADDR_END                                   11963
#define D_Pempty_sizeof                                     4
#define D_APS_DL2_L_M_IRQ_ADDR                              11964
#define D_APS_DL2_L_M_IRQ_ADDR_END                          11965
#define D_APS_DL2_L_M_IRQ_sizeof                            2
#define D_APS_DL2_L_C_IRQ_ADDR                              11966
#define D_APS_DL2_L_C_IRQ_ADDR_END                          11967
#define D_APS_DL2_L_C_IRQ_sizeof                            2
#define D_APS_DL2_R_M_IRQ_ADDR                              11968
#define D_APS_DL2_R_M_IRQ_ADDR_END                          11969
#define D_APS_DL2_R_M_IRQ_sizeof                            2
#define D_APS_DL2_R_C_IRQ_ADDR                              11970
#define D_APS_DL2_R_C_IRQ_ADDR_END                          11971
#define D_APS_DL2_R_C_IRQ_sizeof                            2
#define D_APS_DL1_C_thresholds_ADDR                         11972
#define D_APS_DL1_C_thresholds_ADDR_END                     11979
#define D_APS_DL1_C_thresholds_sizeof                       8
#define D_APS_DL2_L_M_thresholds_ADDR                       11980
#define D_APS_DL2_L_M_thresholds_ADDR_END                   11987
#define D_APS_DL2_L_M_thresholds_sizeof                     8
#define D_APS_DL2_L_C_thresholds_ADDR                       11988
#define D_APS_DL2_L_C_thresholds_ADDR_END                   11995
#define D_APS_DL2_L_C_thresholds_sizeof                     8
#define D_APS_DL2_R_M_thresholds_ADDR                       11996
#define D_APS_DL2_R_M_thresholds_ADDR_END                   12003
#define D_APS_DL2_R_M_thresholds_sizeof                     8
#define D_APS_DL2_R_C_thresholds_ADDR                       12004
#define D_APS_DL2_R_C_thresholds_ADDR_END                   12011
#define D_APS_DL2_R_C_thresholds_sizeof                     8
#define D_ECHO_REF_48_16_WRAP_ADDR                          12012
#define D_ECHO_REF_48_16_WRAP_ADDR_END                      12019
#define D_ECHO_REF_48_16_WRAP_sizeof                        8
#define D_ECHO_REF_48_8_WRAP_ADDR                           12020
#define D_ECHO_REF_48_8_WRAP_ADDR_END                       12027
#define D_ECHO_REF_48_8_WRAP_sizeof                         8
#define D_BT_UL_16_48_WRAP_ADDR                             12028
#define D_BT_UL_16_48_WRAP_ADDR_END                         12035
#define D_BT_UL_16_48_WRAP_sizeof                           8
#define D_BT_UL_8_48_WRAP_ADDR                              12036
#define D_BT_UL_8_48_WRAP_ADDR_END                          12043
#define D_BT_UL_8_48_WRAP_sizeof                            8
#define D_BT_DL_48_16_WRAP_ADDR                             12044
#define D_BT_DL_48_16_WRAP_ADDR_END                         12051
#define D_BT_DL_48_16_WRAP_sizeof                           8
#define D_BT_DL_48_8_WRAP_ADDR                              12052
#define D_BT_DL_48_8_WRAP_ADDR_END                          12059
#define D_BT_DL_48_8_WRAP_sizeof                            8
#define D_VX_DL_16_48_WRAP_ADDR                             12060
#define D_VX_DL_16_48_WRAP_ADDR_END                         12067
#define D_VX_DL_16_48_WRAP_sizeof                           8
#define D_VX_DL_8_48_WRAP_ADDR                              12068
#define D_VX_DL_8_48_WRAP_ADDR_END                          12075
#define D_VX_DL_8_48_WRAP_sizeof                            8
#define D_VX_UL_48_16_WRAP_ADDR                             12076
#define D_VX_UL_48_16_WRAP_ADDR_END                         12083
#define D_VX_UL_48_16_WRAP_sizeof                           8
#define D_VX_UL_48_8_WRAP_ADDR                              12084
#define D_VX_UL_48_8_WRAP_ADDR_END                          12091
#define D_VX_UL_48_8_WRAP_sizeof                            8
#define D_APS_DL1_IRQs_WRAP_ADDR                            12092
#define D_APS_DL1_IRQs_WRAP_ADDR_END                        12099
#define D_APS_DL1_IRQs_WRAP_sizeof                          8
#define D_APS_DL2_L_IRQs_WRAP_ADDR                          12100
#define D_APS_DL2_L_IRQs_WRAP_ADDR_END                      12107
#define D_APS_DL2_L_IRQs_WRAP_sizeof                        8
#define D_APS_DL2_R_IRQs_WRAP_ADDR                          12108
#define D_APS_DL2_R_IRQs_WRAP_ADDR_END                      12115
#define D_APS_DL2_R_IRQs_WRAP_sizeof                        8
#define D_nextMultiFrame_ADDR                               12116
#define D_nextMultiFrame_ADDR_END                           12123
#define D_nextMultiFrame_sizeof                             8
#define D_HW_TEST_ADDR                                      12124
#define D_HW_TEST_ADDR_END                                  12131
#define D_HW_TEST_sizeof                                    8
#define D_TraceBufAdr_HAL_ADDR                              12132
#define D_TraceBufAdr_HAL_ADDR_END                          12135
#define D_TraceBufAdr_HAL_sizeof                            4
#define D_DEBUG_HAL_TASK_ADDR                               12288
#define D_DEBUG_HAL_TASK_ADDR_END                           14335
#define D_DEBUG_HAL_TASK_sizeof                             2048
#define D_DEBUG_FW_TASK_ADDR                                14336
#define D_DEBUG_FW_TASK_ADDR_END                            14591
#define D_DEBUG_FW_TASK_sizeof                              256
#define D_FwMemInit_ADDR                                    14592
#define D_FwMemInit_ADDR_END                                15551
#define D_FwMemInit_sizeof                                  960
#define D_FwMemInitDescr_ADDR                               15552
#define D_FwMemInitDescr_ADDR_END                           15567
#define D_FwMemInitDescr_sizeof                             16
#define D_AsrcVars_BT_UL_ADDR                               15568
#define D_AsrcVars_BT_UL_ADDR_END                           15599
#define D_AsrcVars_BT_UL_sizeof                             32
#define D_AsrcVars_BT_DL_ADDR                               15600
#define D_AsrcVars_BT_DL_ADDR_END                           15631
#define D_AsrcVars_BT_DL_sizeof                             32
#define D_BT_DL_48_8_OPP100_WRAP_ADDR                       15632
#define D_BT_DL_48_8_OPP100_WRAP_ADDR_END                   15639
#define D_BT_DL_48_8_OPP100_WRAP_sizeof                     8
#define D_BT_DL_48_16_OPP100_WRAP_ADDR                      15640
#define D_BT_DL_48_16_OPP100_WRAP_ADDR_END                  15647
#define D_BT_DL_48_16_OPP100_WRAP_sizeof                    8
#define D_PING_ADDR                                         16384
#define D_PING_ADDR_END                                     40959
#define D_PING_sizeof                                       24576
#define D_PONG_ADDR                                         40960
#define D_PONG_ADDR_END                                     65535
#define D_PONG_sizeof                                       24576
#endif /* _ABEDM_ADDR_H_ */
