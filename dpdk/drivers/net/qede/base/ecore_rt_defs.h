/*
 * Copyright (c) 2016 QLogic Corporation.
 * All rights reserved.
 * www.qlogic.com
 *
 * See LICENSE.qede_pmd for copyright and licensing details.
 */

#ifndef __RT_DEFS_H__
#define __RT_DEFS_H__

/* Runtime array offsets */
#define DORQ_REG_PF_MAX_ICID_0_RT_OFFSET                            0
#define DORQ_REG_PF_MAX_ICID_1_RT_OFFSET                            1
#define DORQ_REG_PF_MAX_ICID_2_RT_OFFSET                            2
#define DORQ_REG_PF_MAX_ICID_3_RT_OFFSET                            3
#define DORQ_REG_PF_MAX_ICID_4_RT_OFFSET                            4
#define DORQ_REG_PF_MAX_ICID_5_RT_OFFSET                            5
#define DORQ_REG_PF_MAX_ICID_6_RT_OFFSET                            6
#define DORQ_REG_PF_MAX_ICID_7_RT_OFFSET                            7
#define DORQ_REG_VF_MAX_ICID_0_RT_OFFSET                            8
#define DORQ_REG_VF_MAX_ICID_1_RT_OFFSET                            9
#define DORQ_REG_VF_MAX_ICID_2_RT_OFFSET                            10
#define DORQ_REG_VF_MAX_ICID_3_RT_OFFSET                            11
#define DORQ_REG_VF_MAX_ICID_4_RT_OFFSET                            12
#define DORQ_REG_VF_MAX_ICID_5_RT_OFFSET                            13
#define DORQ_REG_VF_MAX_ICID_6_RT_OFFSET                            14
#define DORQ_REG_VF_MAX_ICID_7_RT_OFFSET                            15
#define DORQ_REG_PF_WAKE_ALL_RT_OFFSET                              16
#define DORQ_REG_TAG1_ETHERTYPE_RT_OFFSET                           17
#define DORQ_REG_GLB_MAX_ICID_0_RT_OFFSET                           18
#define DORQ_REG_GLB_MAX_ICID_1_RT_OFFSET                           19
#define DORQ_REG_GLB_RANGE2CONN_TYPE_0_RT_OFFSET                    20
#define DORQ_REG_GLB_RANGE2CONN_TYPE_1_RT_OFFSET                    21
#define DORQ_REG_PRV_PF_MAX_ICID_2_RT_OFFSET                        22
#define DORQ_REG_PRV_PF_MAX_ICID_3_RT_OFFSET                        23
#define DORQ_REG_PRV_PF_MAX_ICID_4_RT_OFFSET                        24
#define DORQ_REG_PRV_PF_MAX_ICID_5_RT_OFFSET                        25
#define DORQ_REG_PRV_VF_MAX_ICID_2_RT_OFFSET                        26
#define DORQ_REG_PRV_VF_MAX_ICID_3_RT_OFFSET                        27
#define DORQ_REG_PRV_VF_MAX_ICID_4_RT_OFFSET                        28
#define DORQ_REG_PRV_VF_MAX_ICID_5_RT_OFFSET                        29
#define DORQ_REG_PRV_PF_RANGE2CONN_TYPE_2_RT_OFFSET                 30
#define DORQ_REG_PRV_PF_RANGE2CONN_TYPE_3_RT_OFFSET                 31
#define DORQ_REG_PRV_PF_RANGE2CONN_TYPE_4_RT_OFFSET                 32
#define DORQ_REG_PRV_PF_RANGE2CONN_TYPE_5_RT_OFFSET                 33
#define DORQ_REG_PRV_VF_RANGE2CONN_TYPE_2_RT_OFFSET                 34
#define DORQ_REG_PRV_VF_RANGE2CONN_TYPE_3_RT_OFFSET                 35
#define DORQ_REG_PRV_VF_RANGE2CONN_TYPE_4_RT_OFFSET                 36
#define DORQ_REG_PRV_VF_RANGE2CONN_TYPE_5_RT_OFFSET                 37
#define IGU_REG_PF_CONFIGURATION_RT_OFFSET                          38
#define IGU_REG_VF_CONFIGURATION_RT_OFFSET                          39
#define IGU_REG_ATTN_MSG_ADDR_L_RT_OFFSET                           40
#define IGU_REG_ATTN_MSG_ADDR_H_RT_OFFSET                           41
#define IGU_REG_LEADING_EDGE_LATCH_RT_OFFSET                        42
#define IGU_REG_TRAILING_EDGE_LATCH_RT_OFFSET                       43
#define CAU_REG_CQE_AGG_UNIT_SIZE_RT_OFFSET                         44
#define CAU_REG_SB_VAR_MEMORY_RT_OFFSET                             45
#define CAU_REG_SB_VAR_MEMORY_RT_SIZE                               1024
#define CAU_REG_SB_ADDR_MEMORY_RT_OFFSET                            1069
#define CAU_REG_SB_ADDR_MEMORY_RT_SIZE                              1024
#define CAU_REG_PI_MEMORY_RT_OFFSET                                 2093
#define CAU_REG_PI_MEMORY_RT_SIZE                                   4416
#define PRS_REG_SEARCH_RESP_INITIATOR_TYPE_RT_OFFSET                6509
#define PRS_REG_TASK_ID_MAX_INITIATOR_PF_RT_OFFSET                  6510
#define PRS_REG_TASK_ID_MAX_INITIATOR_VF_RT_OFFSET                  6511
#define PRS_REG_TASK_ID_MAX_TARGET_PF_RT_OFFSET                     6512
#define PRS_REG_TASK_ID_MAX_TARGET_VF_RT_OFFSET                     6513
#define PRS_REG_SEARCH_TCP_RT_OFFSET                                6514
#define PRS_REG_SEARCH_FCOE_RT_OFFSET                               6515
#define PRS_REG_SEARCH_ROCE_RT_OFFSET                               6516
#define PRS_REG_ROCE_DEST_QP_MAX_VF_RT_OFFSET                       6517
#define PRS_REG_ROCE_DEST_QP_MAX_PF_RT_OFFSET                       6518
#define PRS_REG_SEARCH_OPENFLOW_RT_OFFSET                           6519
#define PRS_REG_SEARCH_NON_IP_AS_OPENFLOW_RT_OFFSET                 6520
#define PRS_REG_OPENFLOW_SUPPORT_ONLY_KNOWN_OVER_IP_RT_OFFSET       6521
#define PRS_REG_OPENFLOW_SEARCH_KEY_MASK_RT_OFFSET                  6522
#define PRS_REG_TAG_ETHERTYPE_0_RT_OFFSET                           6523
#define PRS_REG_LIGHT_L2_ETHERTYPE_EN_RT_OFFSET                     6524
#define SRC_REG_FIRSTFREE_RT_OFFSET                                 6525
#define SRC_REG_FIRSTFREE_RT_SIZE                                   2
#define SRC_REG_LASTFREE_RT_OFFSET                                  6527
#define SRC_REG_LASTFREE_RT_SIZE                                    2
#define SRC_REG_COUNTFREE_RT_OFFSET                                 6529
#define SRC_REG_NUMBER_HASH_BITS_RT_OFFSET                          6530
#define PSWRQ2_REG_CDUT_P_SIZE_RT_OFFSET                            6531
#define PSWRQ2_REG_CDUC_P_SIZE_RT_OFFSET                            6532
#define PSWRQ2_REG_TM_P_SIZE_RT_OFFSET                              6533
#define PSWRQ2_REG_QM_P_SIZE_RT_OFFSET                              6534
#define PSWRQ2_REG_SRC_P_SIZE_RT_OFFSET                             6535
#define PSWRQ2_REG_TSDM_P_SIZE_RT_OFFSET                            6536
#define PSWRQ2_REG_TM_FIRST_ILT_RT_OFFSET                           6537
#define PSWRQ2_REG_TM_LAST_ILT_RT_OFFSET                            6538
#define PSWRQ2_REG_QM_FIRST_ILT_RT_OFFSET                           6539
#define PSWRQ2_REG_QM_LAST_ILT_RT_OFFSET                            6540
#define PSWRQ2_REG_SRC_FIRST_ILT_RT_OFFSET                          6541
#define PSWRQ2_REG_SRC_LAST_ILT_RT_OFFSET                           6542
#define PSWRQ2_REG_CDUC_FIRST_ILT_RT_OFFSET                         6543
#define PSWRQ2_REG_CDUC_LAST_ILT_RT_OFFSET                          6544
#define PSWRQ2_REG_CDUT_FIRST_ILT_RT_OFFSET                         6545
#define PSWRQ2_REG_CDUT_LAST_ILT_RT_OFFSET                          6546
#define PSWRQ2_REG_TSDM_FIRST_ILT_RT_OFFSET                         6547
#define PSWRQ2_REG_TSDM_LAST_ILT_RT_OFFSET                          6548
#define PSWRQ2_REG_TM_NUMBER_OF_PF_BLOCKS_RT_OFFSET                 6549
#define PSWRQ2_REG_CDUT_NUMBER_OF_PF_BLOCKS_RT_OFFSET               6550
#define PSWRQ2_REG_CDUC_NUMBER_OF_PF_BLOCKS_RT_OFFSET               6551
#define PSWRQ2_REG_TM_VF_BLOCKS_RT_OFFSET                           6552
#define PSWRQ2_REG_CDUT_VF_BLOCKS_RT_OFFSET                         6553
#define PSWRQ2_REG_CDUC_VF_BLOCKS_RT_OFFSET                         6554
#define PSWRQ2_REG_TM_BLOCKS_FACTOR_RT_OFFSET                       6555
#define PSWRQ2_REG_CDUT_BLOCKS_FACTOR_RT_OFFSET                     6556
#define PSWRQ2_REG_CDUC_BLOCKS_FACTOR_RT_OFFSET                     6557
#define PSWRQ2_REG_VF_BASE_RT_OFFSET                                6558
#define PSWRQ2_REG_VF_LAST_ILT_RT_OFFSET                            6559
#define PSWRQ2_REG_DRAM_ALIGN_WR_RT_OFFSET                          6560
#define PSWRQ2_REG_DRAM_ALIGN_RD_RT_OFFSET                          6561
#define PSWRQ2_REG_TGSRC_FIRST_ILT_RT_OFFSET                        6562
#define PSWRQ2_REG_RGSRC_FIRST_ILT_RT_OFFSET                        6563
#define PSWRQ2_REG_TGSRC_LAST_ILT_RT_OFFSET                         6564
#define PSWRQ2_REG_RGSRC_LAST_ILT_RT_OFFSET                         6565
#define PSWRQ2_REG_ILT_MEMORY_RT_OFFSET                             6566
#define PSWRQ2_REG_ILT_MEMORY_RT_SIZE                               26414
#define PGLUE_REG_B_VF_BASE_RT_OFFSET                               32980
#define PGLUE_REG_B_MSDM_OFFSET_MASK_B_RT_OFFSET                    32981
#define PGLUE_REG_B_MSDM_VF_SHIFT_B_RT_OFFSET                       32982
#define PGLUE_REG_B_CACHE_LINE_SIZE_RT_OFFSET                       32983
#define PGLUE_REG_B_PF_BAR0_SIZE_RT_OFFSET                          32984
#define PGLUE_REG_B_PF_BAR1_SIZE_RT_OFFSET                          32985
#define PGLUE_REG_B_VF_BAR1_SIZE_RT_OFFSET                          32986
#define TM_REG_VF_ENABLE_CONN_RT_OFFSET                             32987
#define TM_REG_PF_ENABLE_CONN_RT_OFFSET                             32988
#define TM_REG_PF_ENABLE_TASK_RT_OFFSET                             32989
#define TM_REG_GROUP_SIZE_RESOLUTION_CONN_RT_OFFSET                 32990
#define TM_REG_GROUP_SIZE_RESOLUTION_TASK_RT_OFFSET                 32991
#define TM_REG_CONFIG_CONN_MEM_RT_OFFSET                            32992
#define TM_REG_CONFIG_CONN_MEM_RT_SIZE                              416
#define TM_REG_CONFIG_TASK_MEM_RT_OFFSET                            33408
#define TM_REG_CONFIG_TASK_MEM_RT_SIZE                              608
#define QM_REG_MAXPQSIZE_0_RT_OFFSET                                34016
#define QM_REG_MAXPQSIZE_1_RT_OFFSET                                34017
#define QM_REG_MAXPQSIZE_2_RT_OFFSET                                34018
#define QM_REG_MAXPQSIZETXSEL_0_RT_OFFSET                           34019
#define QM_REG_MAXPQSIZETXSEL_1_RT_OFFSET                           34020
#define QM_REG_MAXPQSIZETXSEL_2_RT_OFFSET                           34021
#define QM_REG_MAXPQSIZETXSEL_3_RT_OFFSET                           34022
#define QM_REG_MAXPQSIZETXSEL_4_RT_OFFSET                           34023
#define QM_REG_MAXPQSIZETXSEL_5_RT_OFFSET                           34024
#define QM_REG_MAXPQSIZETXSEL_6_RT_OFFSET                           34025
#define QM_REG_MAXPQSIZETXSEL_7_RT_OFFSET                           34026
#define QM_REG_MAXPQSIZETXSEL_8_RT_OFFSET                           34027
#define QM_REG_MAXPQSIZETXSEL_9_RT_OFFSET                           34028
#define QM_REG_MAXPQSIZETXSEL_10_RT_OFFSET                          34029
#define QM_REG_MAXPQSIZETXSEL_11_RT_OFFSET                          34030
#define QM_REG_MAXPQSIZETXSEL_12_RT_OFFSET                          34031
#define QM_REG_MAXPQSIZETXSEL_13_RT_OFFSET                          34032
#define QM_REG_MAXPQSIZETXSEL_14_RT_OFFSET                          34033
#define QM_REG_MAXPQSIZETXSEL_15_RT_OFFSET                          34034
#define QM_REG_MAXPQSIZETXSEL_16_RT_OFFSET                          34035
#define QM_REG_MAXPQSIZETXSEL_17_RT_OFFSET                          34036
#define QM_REG_MAXPQSIZETXSEL_18_RT_OFFSET                          34037
#define QM_REG_MAXPQSIZETXSEL_19_RT_OFFSET                          34038
#define QM_REG_MAXPQSIZETXSEL_20_RT_OFFSET                          34039
#define QM_REG_MAXPQSIZETXSEL_21_RT_OFFSET                          34040
#define QM_REG_MAXPQSIZETXSEL_22_RT_OFFSET                          34041
#define QM_REG_MAXPQSIZETXSEL_23_RT_OFFSET                          34042
#define QM_REG_MAXPQSIZETXSEL_24_RT_OFFSET                          34043
#define QM_REG_MAXPQSIZETXSEL_25_RT_OFFSET                          34044
#define QM_REG_MAXPQSIZETXSEL_26_RT_OFFSET                          34045
#define QM_REG_MAXPQSIZETXSEL_27_RT_OFFSET                          34046
#define QM_REG_MAXPQSIZETXSEL_28_RT_OFFSET                          34047
#define QM_REG_MAXPQSIZETXSEL_29_RT_OFFSET                          34048
#define QM_REG_MAXPQSIZETXSEL_30_RT_OFFSET                          34049
#define QM_REG_MAXPQSIZETXSEL_31_RT_OFFSET                          34050
#define QM_REG_MAXPQSIZETXSEL_32_RT_OFFSET                          34051
#define QM_REG_MAXPQSIZETXSEL_33_RT_OFFSET                          34052
#define QM_REG_MAXPQSIZETXSEL_34_RT_OFFSET                          34053
#define QM_REG_MAXPQSIZETXSEL_35_RT_OFFSET                          34054
#define QM_REG_MAXPQSIZETXSEL_36_RT_OFFSET                          34055
#define QM_REG_MAXPQSIZETXSEL_37_RT_OFFSET                          34056
#define QM_REG_MAXPQSIZETXSEL_38_RT_OFFSET                          34057
#define QM_REG_MAXPQSIZETXSEL_39_RT_OFFSET                          34058
#define QM_REG_MAXPQSIZETXSEL_40_RT_OFFSET                          34059
#define QM_REG_MAXPQSIZETXSEL_41_RT_OFFSET                          34060
#define QM_REG_MAXPQSIZETXSEL_42_RT_OFFSET                          34061
#define QM_REG_MAXPQSIZETXSEL_43_RT_OFFSET                          34062
#define QM_REG_MAXPQSIZETXSEL_44_RT_OFFSET                          34063
#define QM_REG_MAXPQSIZETXSEL_45_RT_OFFSET                          34064
#define QM_REG_MAXPQSIZETXSEL_46_RT_OFFSET                          34065
#define QM_REG_MAXPQSIZETXSEL_47_RT_OFFSET                          34066
#define QM_REG_MAXPQSIZETXSEL_48_RT_OFFSET                          34067
#define QM_REG_MAXPQSIZETXSEL_49_RT_OFFSET                          34068
#define QM_REG_MAXPQSIZETXSEL_50_RT_OFFSET                          34069
#define QM_REG_MAXPQSIZETXSEL_51_RT_OFFSET                          34070
#define QM_REG_MAXPQSIZETXSEL_52_RT_OFFSET                          34071
#define QM_REG_MAXPQSIZETXSEL_53_RT_OFFSET                          34072
#define QM_REG_MAXPQSIZETXSEL_54_RT_OFFSET                          34073
#define QM_REG_MAXPQSIZETXSEL_55_RT_OFFSET                          34074
#define QM_REG_MAXPQSIZETXSEL_56_RT_OFFSET                          34075
#define QM_REG_MAXPQSIZETXSEL_57_RT_OFFSET                          34076
#define QM_REG_MAXPQSIZETXSEL_58_RT_OFFSET                          34077
#define QM_REG_MAXPQSIZETXSEL_59_RT_OFFSET                          34078
#define QM_REG_MAXPQSIZETXSEL_60_RT_OFFSET                          34079
#define QM_REG_MAXPQSIZETXSEL_61_RT_OFFSET                          34080
#define QM_REG_MAXPQSIZETXSEL_62_RT_OFFSET                          34081
#define QM_REG_MAXPQSIZETXSEL_63_RT_OFFSET                          34082
#define QM_REG_BASEADDROTHERPQ_RT_OFFSET                            34083
#define QM_REG_BASEADDROTHERPQ_RT_SIZE                              128
#define QM_REG_AFULLQMBYPTHRPFWFQ_RT_OFFSET                         34211
#define QM_REG_AFULLQMBYPTHRVPWFQ_RT_OFFSET                         34212
#define QM_REG_AFULLQMBYPTHRPFRL_RT_OFFSET                          34213
#define QM_REG_AFULLQMBYPTHRGLBLRL_RT_OFFSET                        34214
#define QM_REG_AFULLOPRTNSTCCRDMASK_RT_OFFSET                       34215
#define QM_REG_WRROTHERPQGRP_0_RT_OFFSET                            34216
#define QM_REG_WRROTHERPQGRP_1_RT_OFFSET                            34217
#define QM_REG_WRROTHERPQGRP_2_RT_OFFSET                            34218
#define QM_REG_WRROTHERPQGRP_3_RT_OFFSET                            34219
#define QM_REG_WRROTHERPQGRP_4_RT_OFFSET                            34220
#define QM_REG_WRROTHERPQGRP_5_RT_OFFSET                            34221
#define QM_REG_WRROTHERPQGRP_6_RT_OFFSET                            34222
#define QM_REG_WRROTHERPQGRP_7_RT_OFFSET                            34223
#define QM_REG_WRROTHERPQGRP_8_RT_OFFSET                            34224
#define QM_REG_WRROTHERPQGRP_9_RT_OFFSET                            34225
#define QM_REG_WRROTHERPQGRP_10_RT_OFFSET                           34226
#define QM_REG_WRROTHERPQGRP_11_RT_OFFSET                           34227
#define QM_REG_WRROTHERPQGRP_12_RT_OFFSET                           34228
#define QM_REG_WRROTHERPQGRP_13_RT_OFFSET                           34229
#define QM_REG_WRROTHERPQGRP_14_RT_OFFSET                           34230
#define QM_REG_WRROTHERPQGRP_15_RT_OFFSET                           34231
#define QM_REG_WRROTHERGRPWEIGHT_0_RT_OFFSET                        34232
#define QM_REG_WRROTHERGRPWEIGHT_1_RT_OFFSET                        34233
#define QM_REG_WRROTHERGRPWEIGHT_2_RT_OFFSET                        34234
#define QM_REG_WRROTHERGRPWEIGHT_3_RT_OFFSET                        34235
#define QM_REG_WRRTXGRPWEIGHT_0_RT_OFFSET                           34236
#define QM_REG_WRRTXGRPWEIGHT_1_RT_OFFSET                           34237
#define QM_REG_PQTX2PF_0_RT_OFFSET                                  34238
#define QM_REG_PQTX2PF_1_RT_OFFSET                                  34239
#define QM_REG_PQTX2PF_2_RT_OFFSET                                  34240
#define QM_REG_PQTX2PF_3_RT_OFFSET                                  34241
#define QM_REG_PQTX2PF_4_RT_OFFSET                                  34242
#define QM_REG_PQTX2PF_5_RT_OFFSET                                  34243
#define QM_REG_PQTX2PF_6_RT_OFFSET                                  34244
#define QM_REG_PQTX2PF_7_RT_OFFSET                                  34245
#define QM_REG_PQTX2PF_8_RT_OFFSET                                  34246
#define QM_REG_PQTX2PF_9_RT_OFFSET                                  34247
#define QM_REG_PQTX2PF_10_RT_OFFSET                                 34248
#define QM_REG_PQTX2PF_11_RT_OFFSET                                 34249
#define QM_REG_PQTX2PF_12_RT_OFFSET                                 34250
#define QM_REG_PQTX2PF_13_RT_OFFSET                                 34251
#define QM_REG_PQTX2PF_14_RT_OFFSET                                 34252
#define QM_REG_PQTX2PF_15_RT_OFFSET                                 34253
#define QM_REG_PQTX2PF_16_RT_OFFSET                                 34254
#define QM_REG_PQTX2PF_17_RT_OFFSET                                 34255
#define QM_REG_PQTX2PF_18_RT_OFFSET                                 34256
#define QM_REG_PQTX2PF_19_RT_OFFSET                                 34257
#define QM_REG_PQTX2PF_20_RT_OFFSET                                 34258
#define QM_REG_PQTX2PF_21_RT_OFFSET                                 34259
#define QM_REG_PQTX2PF_22_RT_OFFSET                                 34260
#define QM_REG_PQTX2PF_23_RT_OFFSET                                 34261
#define QM_REG_PQTX2PF_24_RT_OFFSET                                 34262
#define QM_REG_PQTX2PF_25_RT_OFFSET                                 34263
#define QM_REG_PQTX2PF_26_RT_OFFSET                                 34264
#define QM_REG_PQTX2PF_27_RT_OFFSET                                 34265
#define QM_REG_PQTX2PF_28_RT_OFFSET                                 34266
#define QM_REG_PQTX2PF_29_RT_OFFSET                                 34267
#define QM_REG_PQTX2PF_30_RT_OFFSET                                 34268
#define QM_REG_PQTX2PF_31_RT_OFFSET                                 34269
#define QM_REG_PQTX2PF_32_RT_OFFSET                                 34270
#define QM_REG_PQTX2PF_33_RT_OFFSET                                 34271
#define QM_REG_PQTX2PF_34_RT_OFFSET                                 34272
#define QM_REG_PQTX2PF_35_RT_OFFSET                                 34273
#define QM_REG_PQTX2PF_36_RT_OFFSET                                 34274
#define QM_REG_PQTX2PF_37_RT_OFFSET                                 34275
#define QM_REG_PQTX2PF_38_RT_OFFSET                                 34276
#define QM_REG_PQTX2PF_39_RT_OFFSET                                 34277
#define QM_REG_PQTX2PF_40_RT_OFFSET                                 34278
#define QM_REG_PQTX2PF_41_RT_OFFSET                                 34279
#define QM_REG_PQTX2PF_42_RT_OFFSET                                 34280
#define QM_REG_PQTX2PF_43_RT_OFFSET                                 34281
#define QM_REG_PQTX2PF_44_RT_OFFSET                                 34282
#define QM_REG_PQTX2PF_45_RT_OFFSET                                 34283
#define QM_REG_PQTX2PF_46_RT_OFFSET                                 34284
#define QM_REG_PQTX2PF_47_RT_OFFSET                                 34285
#define QM_REG_PQTX2PF_48_RT_OFFSET                                 34286
#define QM_REG_PQTX2PF_49_RT_OFFSET                                 34287
#define QM_REG_PQTX2PF_50_RT_OFFSET                                 34288
#define QM_REG_PQTX2PF_51_RT_OFFSET                                 34289
#define QM_REG_PQTX2PF_52_RT_OFFSET                                 34290
#define QM_REG_PQTX2PF_53_RT_OFFSET                                 34291
#define QM_REG_PQTX2PF_54_RT_OFFSET                                 34292
#define QM_REG_PQTX2PF_55_RT_OFFSET                                 34293
#define QM_REG_PQTX2PF_56_RT_OFFSET                                 34294
#define QM_REG_PQTX2PF_57_RT_OFFSET                                 34295
#define QM_REG_PQTX2PF_58_RT_OFFSET                                 34296
#define QM_REG_PQTX2PF_59_RT_OFFSET                                 34297
#define QM_REG_PQTX2PF_60_RT_OFFSET                                 34298
#define QM_REG_PQTX2PF_61_RT_OFFSET                                 34299
#define QM_REG_PQTX2PF_62_RT_OFFSET                                 34300
#define QM_REG_PQTX2PF_63_RT_OFFSET                                 34301
#define QM_REG_PQOTHER2PF_0_RT_OFFSET                               34302
#define QM_REG_PQOTHER2PF_1_RT_OFFSET                               34303
#define QM_REG_PQOTHER2PF_2_RT_OFFSET                               34304
#define QM_REG_PQOTHER2PF_3_RT_OFFSET                               34305
#define QM_REG_PQOTHER2PF_4_RT_OFFSET                               34306
#define QM_REG_PQOTHER2PF_5_RT_OFFSET                               34307
#define QM_REG_PQOTHER2PF_6_RT_OFFSET                               34308
#define QM_REG_PQOTHER2PF_7_RT_OFFSET                               34309
#define QM_REG_PQOTHER2PF_8_RT_OFFSET                               34310
#define QM_REG_PQOTHER2PF_9_RT_OFFSET                               34311
#define QM_REG_PQOTHER2PF_10_RT_OFFSET                              34312
#define QM_REG_PQOTHER2PF_11_RT_OFFSET                              34313
#define QM_REG_PQOTHER2PF_12_RT_OFFSET                              34314
#define QM_REG_PQOTHER2PF_13_RT_OFFSET                              34315
#define QM_REG_PQOTHER2PF_14_RT_OFFSET                              34316
#define QM_REG_PQOTHER2PF_15_RT_OFFSET                              34317
#define QM_REG_RLGLBLPERIOD_0_RT_OFFSET                             34318
#define QM_REG_RLGLBLPERIOD_1_RT_OFFSET                             34319
#define QM_REG_RLGLBLPERIODTIMER_0_RT_OFFSET                        34320
#define QM_REG_RLGLBLPERIODTIMER_1_RT_OFFSET                        34321
#define QM_REG_RLGLBLPERIODSEL_0_RT_OFFSET                          34322
#define QM_REG_RLGLBLPERIODSEL_1_RT_OFFSET                          34323
#define QM_REG_RLGLBLPERIODSEL_2_RT_OFFSET                          34324
#define QM_REG_RLGLBLPERIODSEL_3_RT_OFFSET                          34325
#define QM_REG_RLGLBLPERIODSEL_4_RT_OFFSET                          34326
#define QM_REG_RLGLBLPERIODSEL_5_RT_OFFSET                          34327
#define QM_REG_RLGLBLPERIODSEL_6_RT_OFFSET                          34328
#define QM_REG_RLGLBLPERIODSEL_7_RT_OFFSET                          34329
#define QM_REG_RLGLBLINCVAL_RT_OFFSET                               34330
#define QM_REG_RLGLBLINCVAL_RT_SIZE                                 256
#define QM_REG_RLGLBLUPPERBOUND_RT_OFFSET                           34586
#define QM_REG_RLGLBLUPPERBOUND_RT_SIZE                             256
#define QM_REG_RLGLBLCRD_RT_OFFSET                                  34842
#define QM_REG_RLGLBLCRD_RT_SIZE                                    256
#define QM_REG_RLGLBLENABLE_RT_OFFSET                               35098
#define QM_REG_RLPFPERIOD_RT_OFFSET                                 35099
#define QM_REG_RLPFPERIODTIMER_RT_OFFSET                            35100
#define QM_REG_RLPFINCVAL_RT_OFFSET                                 35101
#define QM_REG_RLPFINCVAL_RT_SIZE                                   16
#define QM_REG_RLPFUPPERBOUND_RT_OFFSET                             35117
#define QM_REG_RLPFUPPERBOUND_RT_SIZE                               16
#define QM_REG_RLPFCRD_RT_OFFSET                                    35133
#define QM_REG_RLPFCRD_RT_SIZE                                      16
#define QM_REG_RLPFENABLE_RT_OFFSET                                 35149
#define QM_REG_RLPFVOQENABLE_RT_OFFSET                              35150
#define QM_REG_WFQPFWEIGHT_RT_OFFSET                                35151
#define QM_REG_WFQPFWEIGHT_RT_SIZE                                  16
#define QM_REG_WFQPFUPPERBOUND_RT_OFFSET                            35167
#define QM_REG_WFQPFUPPERBOUND_RT_SIZE                              16
#define QM_REG_WFQPFCRD_RT_OFFSET                                   35183
#define QM_REG_WFQPFCRD_RT_SIZE                                     256
#define QM_REG_WFQPFENABLE_RT_OFFSET                                35439
#define QM_REG_WFQVPENABLE_RT_OFFSET                                35440
#define QM_REG_BASEADDRTXPQ_RT_OFFSET                               35441
#define QM_REG_BASEADDRTXPQ_RT_SIZE                                 512
#define QM_REG_TXPQMAP_RT_OFFSET                                    35953
#define QM_REG_TXPQMAP_RT_SIZE                                      512
#define QM_REG_WFQVPWEIGHT_RT_OFFSET                                36465
#define QM_REG_WFQVPWEIGHT_RT_SIZE                                  512
#define QM_REG_WFQVPCRD_RT_OFFSET                                   36977
#define QM_REG_WFQVPCRD_RT_SIZE                                     512
#define QM_REG_WFQVPMAP_RT_OFFSET                                   37489
#define QM_REG_WFQVPMAP_RT_SIZE                                     512
#define QM_REG_WFQPFCRD_MSB_RT_OFFSET                               38001
#define QM_REG_WFQPFCRD_MSB_RT_SIZE                                 320
#define QM_REG_VOQCRDLINE_RT_OFFSET                                 38321
#define QM_REG_VOQCRDLINE_RT_SIZE                                   36
#define QM_REG_VOQINITCRDLINE_RT_OFFSET                             38357
#define QM_REG_VOQINITCRDLINE_RT_SIZE                               36
#define QM_REG_RLPFVOQENABLE_MSB_RT_OFFSET                          38393
#define NIG_REG_TAG_ETHERTYPE_0_RT_OFFSET                           38394
#define NIG_REG_BRB_GATE_DNTFWD_PORT_RT_OFFSET                      38395
#define NIG_REG_OUTER_TAG_VALUE_LIST0_RT_OFFSET                     38396
#define NIG_REG_OUTER_TAG_VALUE_LIST1_RT_OFFSET                     38397
#define NIG_REG_OUTER_TAG_VALUE_LIST2_RT_OFFSET                     38398
#define NIG_REG_OUTER_TAG_VALUE_LIST3_RT_OFFSET                     38399
#define NIG_REG_LLH_FUNC_TAGMAC_CLS_TYPE_RT_OFFSET                  38400
#define NIG_REG_LLH_FUNC_TAG_EN_RT_OFFSET                           38401
#define NIG_REG_LLH_FUNC_TAG_EN_RT_SIZE                             4
#define NIG_REG_LLH_FUNC_TAG_VALUE_RT_OFFSET                        38405
#define NIG_REG_LLH_FUNC_TAG_VALUE_RT_SIZE                          4
#define NIG_REG_LLH_FUNC_FILTER_VALUE_RT_OFFSET                     38409
#define NIG_REG_LLH_FUNC_FILTER_VALUE_RT_SIZE                       32
#define NIG_REG_LLH_FUNC_FILTER_EN_RT_OFFSET                        38441
#define NIG_REG_LLH_FUNC_FILTER_EN_RT_SIZE                          16
#define NIG_REG_LLH_FUNC_FILTER_MODE_RT_OFFSET                      38457
#define NIG_REG_LLH_FUNC_FILTER_MODE_RT_SIZE                        16
#define NIG_REG_LLH_FUNC_FILTER_PROTOCOL_TYPE_RT_OFFSET             38473
#define NIG_REG_LLH_FUNC_FILTER_PROTOCOL_TYPE_RT_SIZE               16
#define NIG_REG_LLH_FUNC_FILTER_HDR_SEL_RT_OFFSET                   38489
#define NIG_REG_LLH_FUNC_FILTER_HDR_SEL_RT_SIZE                     16
#define NIG_REG_TX_EDPM_CTRL_RT_OFFSET                              38505
#define NIG_REG_ROCE_DUPLICATE_TO_HOST_RT_OFFSET                    38506
#define NIG_REG_PPF_TO_ENGINE_SEL_RT_OFFSET                         38507
#define NIG_REG_PPF_TO_ENGINE_SEL_RT_SIZE                           8
#define NIG_REG_LLH_PF_CLS_FUNC_FILTER_VALUE_RT_OFFSET              38515
#define NIG_REG_LLH_PF_CLS_FUNC_FILTER_VALUE_RT_SIZE                1024
#define NIG_REG_LLH_PF_CLS_FUNC_FILTER_EN_RT_OFFSET                 39539
#define NIG_REG_LLH_PF_CLS_FUNC_FILTER_EN_RT_SIZE                   512
#define NIG_REG_LLH_PF_CLS_FUNC_FILTER_MODE_RT_OFFSET               40051
#define NIG_REG_LLH_PF_CLS_FUNC_FILTER_MODE_RT_SIZE                 512
#define NIG_REG_LLH_PF_CLS_FUNC_FILTER_PROTOCOL_TYPE_RT_OFFSET      40563
#define NIG_REG_LLH_PF_CLS_FUNC_FILTER_PROTOCOL_TYPE_RT_SIZE        512
#define NIG_REG_LLH_PF_CLS_FUNC_FILTER_HDR_SEL_RT_OFFSET            41075
#define NIG_REG_LLH_PF_CLS_FUNC_FILTER_HDR_SEL_RT_SIZE              512
#define NIG_REG_LLH_PF_CLS_FILTERS_MAP_RT_OFFSET                    41587
#define NIG_REG_LLH_PF_CLS_FILTERS_MAP_RT_SIZE                      32
#define CDU_REG_CID_ADDR_PARAMS_RT_OFFSET                           41619
#define CDU_REG_SEGMENT0_PARAMS_RT_OFFSET                           41620
#define CDU_REG_SEGMENT1_PARAMS_RT_OFFSET                           41621
#define CDU_REG_PF_SEG0_TYPE_OFFSET_RT_OFFSET                       41622
#define CDU_REG_PF_SEG1_TYPE_OFFSET_RT_OFFSET                       41623
#define CDU_REG_PF_SEG2_TYPE_OFFSET_RT_OFFSET                       41624
#define CDU_REG_PF_SEG3_TYPE_OFFSET_RT_OFFSET                       41625
#define CDU_REG_PF_FL_SEG0_TYPE_OFFSET_RT_OFFSET                    41626
#define CDU_REG_PF_FL_SEG1_TYPE_OFFSET_RT_OFFSET                    41627
#define CDU_REG_PF_FL_SEG2_TYPE_OFFSET_RT_OFFSET                    41628
#define CDU_REG_PF_FL_SEG3_TYPE_OFFSET_RT_OFFSET                    41629
#define CDU_REG_VF_SEG_TYPE_OFFSET_RT_OFFSET                        41630
#define CDU_REG_VF_FL_SEG_TYPE_OFFSET_RT_OFFSET                     41631
#define PBF_REG_TAG_ETHERTYPE_0_RT_OFFSET                           41632
#define PBF_REG_BTB_SHARED_AREA_SIZE_RT_OFFSET                      41633
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ0_RT_OFFSET                    41634
#define PBF_REG_BTB_GUARANTEED_VOQ0_RT_OFFSET                       41635
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ0_RT_OFFSET                41636
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ1_RT_OFFSET                    41637
#define PBF_REG_BTB_GUARANTEED_VOQ1_RT_OFFSET                       41638
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ1_RT_OFFSET                41639
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ2_RT_OFFSET                    41640
#define PBF_REG_BTB_GUARANTEED_VOQ2_RT_OFFSET                       41641
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ2_RT_OFFSET                41642
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ3_RT_OFFSET                    41643
#define PBF_REG_BTB_GUARANTEED_VOQ3_RT_OFFSET                       41644
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ3_RT_OFFSET                41645
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ4_RT_OFFSET                    41646
#define PBF_REG_BTB_GUARANTEED_VOQ4_RT_OFFSET                       41647
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ4_RT_OFFSET                41648
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ5_RT_OFFSET                    41649
#define PBF_REG_BTB_GUARANTEED_VOQ5_RT_OFFSET                       41650
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ5_RT_OFFSET                41651
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ6_RT_OFFSET                    41652
#define PBF_REG_BTB_GUARANTEED_VOQ6_RT_OFFSET                       41653
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ6_RT_OFFSET                41654
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ7_RT_OFFSET                    41655
#define PBF_REG_BTB_GUARANTEED_VOQ7_RT_OFFSET                       41656
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ7_RT_OFFSET                41657
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ8_RT_OFFSET                    41658
#define PBF_REG_BTB_GUARANTEED_VOQ8_RT_OFFSET                       41659
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ8_RT_OFFSET                41660
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ9_RT_OFFSET                    41661
#define PBF_REG_BTB_GUARANTEED_VOQ9_RT_OFFSET                       41662
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ9_RT_OFFSET                41663
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ10_RT_OFFSET                   41664
#define PBF_REG_BTB_GUARANTEED_VOQ10_RT_OFFSET                      41665
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ10_RT_OFFSET               41666
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ11_RT_OFFSET                   41667
#define PBF_REG_BTB_GUARANTEED_VOQ11_RT_OFFSET                      41668
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ11_RT_OFFSET               41669
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ12_RT_OFFSET                   41670
#define PBF_REG_BTB_GUARANTEED_VOQ12_RT_OFFSET                      41671
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ12_RT_OFFSET               41672
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ13_RT_OFFSET                   41673
#define PBF_REG_BTB_GUARANTEED_VOQ13_RT_OFFSET                      41674
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ13_RT_OFFSET               41675
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ14_RT_OFFSET                   41676
#define PBF_REG_BTB_GUARANTEED_VOQ14_RT_OFFSET                      41677
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ14_RT_OFFSET               41678
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ15_RT_OFFSET                   41679
#define PBF_REG_BTB_GUARANTEED_VOQ15_RT_OFFSET                      41680
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ15_RT_OFFSET               41681
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ16_RT_OFFSET                   41682
#define PBF_REG_BTB_GUARANTEED_VOQ16_RT_OFFSET                      41683
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ16_RT_OFFSET               41684
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ17_RT_OFFSET                   41685
#define PBF_REG_BTB_GUARANTEED_VOQ17_RT_OFFSET                      41686
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ17_RT_OFFSET               41687
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ18_RT_OFFSET                   41688
#define PBF_REG_BTB_GUARANTEED_VOQ18_RT_OFFSET                      41689
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ18_RT_OFFSET               41690
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ19_RT_OFFSET                   41691
#define PBF_REG_BTB_GUARANTEED_VOQ19_RT_OFFSET                      41692
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ19_RT_OFFSET               41693
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ20_RT_OFFSET                   41694
#define PBF_REG_BTB_GUARANTEED_VOQ20_RT_OFFSET                      41695
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ20_RT_OFFSET               41696
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ21_RT_OFFSET                   41697
#define PBF_REG_BTB_GUARANTEED_VOQ21_RT_OFFSET                      41698
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ21_RT_OFFSET               41699
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ22_RT_OFFSET                   41700
#define PBF_REG_BTB_GUARANTEED_VOQ22_RT_OFFSET                      41701
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ22_RT_OFFSET               41702
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ23_RT_OFFSET                   41703
#define PBF_REG_BTB_GUARANTEED_VOQ23_RT_OFFSET                      41704
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ23_RT_OFFSET               41705
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ24_RT_OFFSET                   41706
#define PBF_REG_BTB_GUARANTEED_VOQ24_RT_OFFSET                      41707
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ24_RT_OFFSET               41708
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ25_RT_OFFSET                   41709
#define PBF_REG_BTB_GUARANTEED_VOQ25_RT_OFFSET                      41710
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ25_RT_OFFSET               41711
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ26_RT_OFFSET                   41712
#define PBF_REG_BTB_GUARANTEED_VOQ26_RT_OFFSET                      41713
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ26_RT_OFFSET               41714
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ27_RT_OFFSET                   41715
#define PBF_REG_BTB_GUARANTEED_VOQ27_RT_OFFSET                      41716
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ27_RT_OFFSET               41717
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ28_RT_OFFSET                   41718
#define PBF_REG_BTB_GUARANTEED_VOQ28_RT_OFFSET                      41719
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ28_RT_OFFSET               41720
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ29_RT_OFFSET                   41721
#define PBF_REG_BTB_GUARANTEED_VOQ29_RT_OFFSET                      41722
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ29_RT_OFFSET               41723
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ30_RT_OFFSET                   41724
#define PBF_REG_BTB_GUARANTEED_VOQ30_RT_OFFSET                      41725
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ30_RT_OFFSET               41726
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ31_RT_OFFSET                   41727
#define PBF_REG_BTB_GUARANTEED_VOQ31_RT_OFFSET                      41728
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ31_RT_OFFSET               41729
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ32_RT_OFFSET                   41730
#define PBF_REG_BTB_GUARANTEED_VOQ32_RT_OFFSET                      41731
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ32_RT_OFFSET               41732
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ33_RT_OFFSET                   41733
#define PBF_REG_BTB_GUARANTEED_VOQ33_RT_OFFSET                      41734
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ33_RT_OFFSET               41735
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ34_RT_OFFSET                   41736
#define PBF_REG_BTB_GUARANTEED_VOQ34_RT_OFFSET                      41737
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ34_RT_OFFSET               41738
#define PBF_REG_YCMD_QS_NUM_LINES_VOQ35_RT_OFFSET                   41739
#define PBF_REG_BTB_GUARANTEED_VOQ35_RT_OFFSET                      41740
#define PBF_REG_BTB_SHARED_AREA_SETUP_VOQ35_RT_OFFSET               41741
#define XCM_REG_CON_PHY_Q3_RT_OFFSET                                41742

#define RUNTIME_ARRAY_SIZE 41743

#endif /* __RT_DEFS_H__ */
