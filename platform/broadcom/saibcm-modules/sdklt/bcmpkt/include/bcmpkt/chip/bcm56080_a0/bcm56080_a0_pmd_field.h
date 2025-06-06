/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated from the registers file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: INTERNAL/regs/xgs/generate-pmd.pl
 *
 * Copyright 2018-2024 Broadcom. All rights reserved.
 * The term 'Broadcom' refers to Broadcom Inc. and/or its subsidiaries.
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License 
 * version 2 as published by the Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * A copy of the GNU General Public License version 2 (GPLv2) can
 * be found in the LICENSES folder.
 *
 * This file provides PMD field defines for BCM56080_A0.
 *
 ******************************************************************************/

#ifndef BCM56080_A0_PMD_FIELD_H
#define BCM56080_A0_PMD_FIELD_H

/* RXPMD defines */
#define BCM56080_A0_RXPMD_ING_L3_INTF                                0
#define BCM56080_A0_RXPMD_I2E_CLASSID                                1
#define BCM56080_A0_RXPMD_RX_BFD_SESSION_INDEX                       2
#define BCM56080_A0_RXPMD_I2E_CLASSID_TYPE                           3
#define BCM56080_A0_RXPMD_RX_BFD_START_OFFSET_TYPE                   4
#define BCM56080_A0_RXPMD_RX_BFD_START_OFFSET                        5
#define BCM56080_A0_RXPMD_ING_L3_INTF_VALID                          6
#define BCM56080_A0_RXPMD_CPU_COS                                    7
#define BCM56080_A0_RXPMD_QUEUE_NUM                                  8
#define BCM56080_A0_RXPMD_BPDU                                       9
#define BCM56080_A0_RXPMD_CHANGE_DSCP                                10
#define BCM56080_A0_RXPMD_CHANGE_ECN                                 11
#define BCM56080_A0_RXPMD_DO_NOT_CHANGE_TTL                          12
#define BCM56080_A0_RXPMD_REASON                                     13
#define BCM56080_A0_RXPMD_REASON_TYPE                                14
#define BCM56080_A0_RXPMD_DSCP                                       15
#define BCM56080_A0_RXPMD_SPECIAL_PACKET_TYPE                        16
#define BCM56080_A0_RXPMD_ECN                                        17
#define BCM56080_A0_RXPMD_INCOMING_TAG_STATUS                        18
#define BCM56080_A0_RXPMD_O_NHI                                      19
#define BCM56080_A0_RXPMD_ING_OTAG_ACTION                            20
#define BCM56080_A0_RXPMD_IEU                                        21
#define BCM56080_A0_RXPMD_IEU_VALID                                  22
#define BCM56080_A0_RXPMD_L3ONLY                                     23
#define BCM56080_A0_RXPMD_REGEN_CRC                                  24
#define BCM56080_A0_RXPMD_MATCHED_RULE                               25
#define BCM56080_A0_RXPMD_MTP_INDEX                                  26
#define BCM56080_A0_RXPMD_OUTER_CFI                                  27
#define BCM56080_A0_RXPMD_OUTER_PRI                                  28
#define BCM56080_A0_RXPMD_OUTER_VID                                  29
#define BCM56080_A0_RXPMD_INCOMING_INT_HDR_TYPE                      30
#define BCM56080_A0_RXPMD_IP_ROUTED                                  31
#define BCM56080_A0_RXPMD_SPECIAL_PACKET_INDICATOR                   32
#define BCM56080_A0_RXPMD_SWITCH                                     33
#define BCM56080_A0_RXPMD_PKT_LENGTH                                 34
#define BCM56080_A0_RXPMD_REPLICATION_OR_NHOP_INDEX                  35
#define BCM56080_A0_RXPMD_TUNNEL_DECAP_TYPE                          36
#define BCM56080_A0_RXPMD_UC_SW_COPY_DROPPED                         37
#define BCM56080_A0_RXPMD_ENTROPY_LABEL                              38
#define BCM56080_A0_RXPMD_SRC_PORT_NUM                               39
#define BCM56080_A0_RXPMD_UNICAST_QUEUE                              40
#define BCM56080_A0_RXPMD_TIMESTAMP_TYPE                             41
#define BCM56080_A0_RXPMD_TIMESTAMP                                  42
#define BCM56080_A0_RXPMD_TIMESTAMP_HI                               43
#define BCM56080_A0_RXPMD_VRF                                        44
#define BCM56080_A0_RXPMD_MODULE_HDR                                 45
#define BCM56080_A0_RXPMD_COUNT                                      46

/* RXPMD name map */
#define BCM56080_A0_RXPMD_NAME_MAP_INIT \
    {"ING_L3_INTF", BCM56080_A0_RXPMD_ING_L3_INTF}, \
    {"I2E_CLASSID", BCM56080_A0_RXPMD_I2E_CLASSID}, \
    {"RX_BFD_SESSION_INDEX", BCM56080_A0_RXPMD_RX_BFD_SESSION_INDEX}, \
    {"I2E_CLASSID_TYPE", BCM56080_A0_RXPMD_I2E_CLASSID_TYPE}, \
    {"RX_BFD_START_OFFSET_TYPE", BCM56080_A0_RXPMD_RX_BFD_START_OFFSET_TYPE}, \
    {"RX_BFD_START_OFFSET", BCM56080_A0_RXPMD_RX_BFD_START_OFFSET}, \
    {"ING_L3_INTF_VALID", BCM56080_A0_RXPMD_ING_L3_INTF_VALID}, \
    {"CPU_COS", BCM56080_A0_RXPMD_CPU_COS}, \
    {"QUEUE_NUM", BCM56080_A0_RXPMD_QUEUE_NUM}, \
    {"BPDU", BCM56080_A0_RXPMD_BPDU}, \
    {"CHANGE_DSCP", BCM56080_A0_RXPMD_CHANGE_DSCP}, \
    {"CHANGE_ECN", BCM56080_A0_RXPMD_CHANGE_ECN}, \
    {"DO_NOT_CHANGE_TTL", BCM56080_A0_RXPMD_DO_NOT_CHANGE_TTL}, \
    {"REASON", BCM56080_A0_RXPMD_REASON}, \
    {"REASON_TYPE", BCM56080_A0_RXPMD_REASON_TYPE}, \
    {"DSCP", BCM56080_A0_RXPMD_DSCP}, \
    {"SPECIAL_PACKET_TYPE", BCM56080_A0_RXPMD_SPECIAL_PACKET_TYPE}, \
    {"ECN", BCM56080_A0_RXPMD_ECN}, \
    {"INCOMING_TAG_STATUS", BCM56080_A0_RXPMD_INCOMING_TAG_STATUS}, \
    {"O_NHI", BCM56080_A0_RXPMD_O_NHI}, \
    {"ING_OTAG_ACTION", BCM56080_A0_RXPMD_ING_OTAG_ACTION}, \
    {"IEU", BCM56080_A0_RXPMD_IEU}, \
    {"IEU_VALID", BCM56080_A0_RXPMD_IEU_VALID}, \
    {"L3ONLY", BCM56080_A0_RXPMD_L3ONLY}, \
    {"REGEN_CRC", BCM56080_A0_RXPMD_REGEN_CRC}, \
    {"MATCHED_RULE", BCM56080_A0_RXPMD_MATCHED_RULE}, \
    {"MTP_INDEX", BCM56080_A0_RXPMD_MTP_INDEX}, \
    {"OUTER_CFI", BCM56080_A0_RXPMD_OUTER_CFI}, \
    {"OUTER_PRI", BCM56080_A0_RXPMD_OUTER_PRI}, \
    {"OUTER_VID", BCM56080_A0_RXPMD_OUTER_VID}, \
    {"INCOMING_INT_HDR_TYPE", BCM56080_A0_RXPMD_INCOMING_INT_HDR_TYPE}, \
    {"IP_ROUTED", BCM56080_A0_RXPMD_IP_ROUTED}, \
    {"SPECIAL_PACKET_INDICATOR", BCM56080_A0_RXPMD_SPECIAL_PACKET_INDICATOR}, \
    {"SWITCH", BCM56080_A0_RXPMD_SWITCH}, \
    {"PKT_LENGTH", BCM56080_A0_RXPMD_PKT_LENGTH}, \
    {"REPLICATION_OR_NHOP_INDEX", BCM56080_A0_RXPMD_REPLICATION_OR_NHOP_INDEX}, \
    {"TUNNEL_DECAP_TYPE", BCM56080_A0_RXPMD_TUNNEL_DECAP_TYPE}, \
    {"UC_SW_COPY_DROPPED", BCM56080_A0_RXPMD_UC_SW_COPY_DROPPED}, \
    {"ENTROPY_LABEL", BCM56080_A0_RXPMD_ENTROPY_LABEL}, \
    {"SRC_PORT_NUM", BCM56080_A0_RXPMD_SRC_PORT_NUM}, \
    {"UNICAST_QUEUE", BCM56080_A0_RXPMD_UNICAST_QUEUE}, \
    {"TIMESTAMP_TYPE", BCM56080_A0_RXPMD_TIMESTAMP_TYPE}, \
    {"TIMESTAMP", BCM56080_A0_RXPMD_TIMESTAMP}, \
    {"TIMESTAMP_HI", BCM56080_A0_RXPMD_TIMESTAMP_HI}, \
    {"VRF", BCM56080_A0_RXPMD_VRF}, \
    {"MODULE_HDR", BCM56080_A0_RXPMD_MODULE_HDR}, \
    {"COUNT", BCM56080_A0_RXPMD_COUNT}

/*!
 * \name BCM56080_A0_RXPMD_TIMESTAMP_TYPE encodings.
 * \anchor BCM56080_A0_RXPMD_TIMESTAMP_TYPE_XXX
 */
/*! \{ */
#define BCM56080_A0_RXPMD_TIMESTAMP_TYPE_INVALID                     0
#define BCM56080_A0_RXPMD_TIMESTAMP_TYPE_OAM_LM                      1
#define BCM56080_A0_RXPMD_TIMESTAMP_TYPE_OAM_DM                      2
#define BCM56080_A0_RXPMD_TIMESTAMP_TYPE_IEEE_802_1AS                3
/*! \} */

/*! BCM56080_A0_RXPMD_TIMESTAMP_TYPE encoding name strings maps. */
#define BCM56080_A0_RXPMD_TIMESTAMP_TYPE_NAME_MAP_INIT \
    {"INVALID", BCM56080_A0_RXPMD_TIMESTAMP_TYPE_INVALID},\
    {"OAM_LM", BCM56080_A0_RXPMD_TIMESTAMP_TYPE_OAM_LM},\
    {"OAM_DM", BCM56080_A0_RXPMD_TIMESTAMP_TYPE_OAM_DM},\
    {"IEEE_802_1AS", BCM56080_A0_RXPMD_TIMESTAMP_TYPE_IEEE_802_1AS},\
    {NULL, 0}

/* RX_REASON defines */
#define BCM56080_A0_RX_REASON_CPU_UVLAN                              0
#define BCM56080_A0_RX_REASON_CPU_SLF                                1
#define BCM56080_A0_RX_REASON_CPU_DLF                                2
#define BCM56080_A0_RX_REASON_CPU_L2MOVE                             3
#define BCM56080_A0_RX_REASON_CPU_L2CPU                              4
#define BCM56080_A0_RX_REASON_CPU_L3SRC_MISS                         5
#define BCM56080_A0_RX_REASON_CPU_L3DST_MISS                         6
#define BCM56080_A0_RX_REASON_CPU_L3SRC_MOVE                         7
#define BCM56080_A0_RX_REASON_CPU_MC_MISS                            8
#define BCM56080_A0_RX_REASON_CPU_IPMC_MISS                          9
#define BCM56080_A0_RX_REASON_CPU_FFP                                10
#define BCM56080_A0_RX_REASON_CPU_L3HDR_ERR                          11
#define BCM56080_A0_RX_REASON_CPU_PROTOCOL_PKT                       12
#define BCM56080_A0_RX_REASON_CPU_DOS_ATTACK                         13
#define BCM56080_A0_RX_REASON_CPU_MARTIAN_ADDR                       14
#define BCM56080_A0_RX_REASON_CPU_TUNNEL_ERR                         15
#define BCM56080_A0_RX_REASON_CPU_SFLOW                              16
#define BCM56080_A0_RX_REASON_ICMP_REDIRECT                          17
#define BCM56080_A0_RX_REASON_L3_SLOWPATH                            18
#define BCM56080_A0_RX_REASON_PARITY_ERROR                           19
#define BCM56080_A0_RX_REASON_L3_MTU_CHECK_FAIL                      20
#define BCM56080_A0_RX_REASON_MCIDX_ERROR                            21
#define BCM56080_A0_RX_REASON_CPU_VFP                                22
#define BCM56080_A0_RX_REASON_MPLS_PROC_ERROR                        23
#define BCM56080_A0_RX_REASON_PBT_NONUC_PKT                          24
#define BCM56080_A0_RX_REASON_L3_NEXT_HOP                            25
#define BCM56080_A0_RX_REASON_MY_STATION                             26
#define BCM56080_A0_RX_REASON_TIME_SYNC                              27
#define BCM56080_A0_RX_REASON_TUNNEL_DECAP_ECN_ERROR                 28
#define BCM56080_A0_RX_REASON_BFD_SLOWPATH                           29
#define BCM56080_A0_RX_REASON_BFD_ERROR                              30
#define BCM56080_A0_RX_REASON_PACKET_TRACE_TO_CPU                    31
#define BCM56080_A0_RX_REASON_MPLS_UNKNOWN_CONTROL_PKT               32
#define BCM56080_A0_RX_REASON_MPLS_ALERT_LABEL                       33
#define BCM56080_A0_RX_REASON_CPU_IPMC_INTERFACE_MISMATCH            34
#define BCM56080_A0_RX_REASON_SRV6_ERROR                             35
#define BCM56080_A0_RX_REASON_VXLAN_VN_ID_MISS                       36
#define BCM56080_A0_RX_REASON_VXLAN_SIP_MISS                         37
#define BCM56080_A0_RX_REASON_ADAPT_MISS                             38
#define BCM56080_A0_RX_REASON_NH_PROTO_STATUS_DOWN                   39
#define BCM56080_A0_RX_REASON_OAM_PROCESSING                         40
#define BCM56080_A0_RX_REASON_SUBPORT_ID_LOOKUP_MISS                 41
#define BCM56080_A0_RX_REASON_SVTAG_CPU_BIT_SET                      42
#define BCM56080_A0_RX_REASON_COUNT                                  43

/* RX_REASON name map */
#define BCM56080_A0_RX_REASON_NAME_MAP_INIT \
    {"CPU_UVLAN", BCM56080_A0_RX_REASON_CPU_UVLAN}, \
    {"CPU_SLF", BCM56080_A0_RX_REASON_CPU_SLF}, \
    {"CPU_DLF", BCM56080_A0_RX_REASON_CPU_DLF}, \
    {"CPU_L2MOVE", BCM56080_A0_RX_REASON_CPU_L2MOVE}, \
    {"CPU_L2CPU", BCM56080_A0_RX_REASON_CPU_L2CPU}, \
    {"CPU_L3SRC_MISS", BCM56080_A0_RX_REASON_CPU_L3SRC_MISS}, \
    {"CPU_L3DST_MISS", BCM56080_A0_RX_REASON_CPU_L3DST_MISS}, \
    {"CPU_L3SRC_MOVE", BCM56080_A0_RX_REASON_CPU_L3SRC_MOVE}, \
    {"CPU_MC_MISS", BCM56080_A0_RX_REASON_CPU_MC_MISS}, \
    {"CPU_IPMC_MISS", BCM56080_A0_RX_REASON_CPU_IPMC_MISS}, \
    {"CPU_FFP", BCM56080_A0_RX_REASON_CPU_FFP}, \
    {"CPU_L3HDR_ERR", BCM56080_A0_RX_REASON_CPU_L3HDR_ERR}, \
    {"CPU_PROTOCOL_PKT", BCM56080_A0_RX_REASON_CPU_PROTOCOL_PKT}, \
    {"CPU_DOS_ATTACK", BCM56080_A0_RX_REASON_CPU_DOS_ATTACK}, \
    {"CPU_MARTIAN_ADDR", BCM56080_A0_RX_REASON_CPU_MARTIAN_ADDR}, \
    {"CPU_TUNNEL_ERR", BCM56080_A0_RX_REASON_CPU_TUNNEL_ERR}, \
    {"CPU_SFLOW", BCM56080_A0_RX_REASON_CPU_SFLOW}, \
    {"ICMP_REDIRECT", BCM56080_A0_RX_REASON_ICMP_REDIRECT}, \
    {"L3_SLOWPATH", BCM56080_A0_RX_REASON_L3_SLOWPATH}, \
    {"PARITY_ERROR", BCM56080_A0_RX_REASON_PARITY_ERROR}, \
    {"L3_MTU_CHECK_FAIL", BCM56080_A0_RX_REASON_L3_MTU_CHECK_FAIL}, \
    {"MCIDX_ERROR", BCM56080_A0_RX_REASON_MCIDX_ERROR}, \
    {"CPU_VFP", BCM56080_A0_RX_REASON_CPU_VFP}, \
    {"MPLS_PROC_ERROR", BCM56080_A0_RX_REASON_MPLS_PROC_ERROR}, \
    {"PBT_NONUC_PKT", BCM56080_A0_RX_REASON_PBT_NONUC_PKT}, \
    {"L3_NEXT_HOP", BCM56080_A0_RX_REASON_L3_NEXT_HOP}, \
    {"MY_STATION", BCM56080_A0_RX_REASON_MY_STATION}, \
    {"TIME_SYNC", BCM56080_A0_RX_REASON_TIME_SYNC}, \
    {"TUNNEL_DECAP_ECN_ERROR", BCM56080_A0_RX_REASON_TUNNEL_DECAP_ECN_ERROR}, \
    {"BFD_SLOWPATH", BCM56080_A0_RX_REASON_BFD_SLOWPATH}, \
    {"BFD_ERROR", BCM56080_A0_RX_REASON_BFD_ERROR}, \
    {"PACKET_TRACE_TO_CPU", BCM56080_A0_RX_REASON_PACKET_TRACE_TO_CPU}, \
    {"MPLS_UNKNOWN_CONTROL_PKT", BCM56080_A0_RX_REASON_MPLS_UNKNOWN_CONTROL_PKT}, \
    {"MPLS_ALERT_LABEL", BCM56080_A0_RX_REASON_MPLS_ALERT_LABEL}, \
    {"CPU_IPMC_INTERFACE_MISMATCH", BCM56080_A0_RX_REASON_CPU_IPMC_INTERFACE_MISMATCH}, \
    {"SRV6_ERROR", BCM56080_A0_RX_REASON_SRV6_ERROR}, \
    {"VXLAN_VN_ID_MISS", BCM56080_A0_RX_REASON_VXLAN_VN_ID_MISS}, \
    {"VXLAN_SIP_MISS", BCM56080_A0_RX_REASON_VXLAN_SIP_MISS}, \
    {"ADAPT_MISS", BCM56080_A0_RX_REASON_ADAPT_MISS}, \
    {"NH_PROTO_STATUS_DOWN", BCM56080_A0_RX_REASON_NH_PROTO_STATUS_DOWN}, \
    {"OAM_PROCESSING", BCM56080_A0_RX_REASON_OAM_PROCESSING}, \
    {"SUBPORT_ID_LOOKUP_MISS", BCM56080_A0_RX_REASON_SUBPORT_ID_LOOKUP_MISS}, \
    {"SVTAG_CPU_BIT_SET", BCM56080_A0_RX_REASON_SVTAG_CPU_BIT_SET}, \
    {"COUNT", BCM56080_A0_RX_REASON_COUNT}

/*!
 * \name BCM56080_A0_RX_REASON_CPU_SFLOW encodings.
 * \anchor BCM56080_A0_RX_REASON_CPU_SFLOW_XXX
 */
/*! \{ */
#define BCM56080_A0_RX_REASON_CPU_SFLOW_INVALID                      0
#define BCM56080_A0_RX_REASON_CPU_SFLOW_CPU_SFLOW_FLEX               1
#define BCM56080_A0_RX_REASON_CPU_SFLOW_CPU_SFLOW_DST                2
#define BCM56080_A0_RX_REASON_CPU_SFLOW_CPU_SFLOW_SRC                3
/*! \} */

/*! BCM56080_A0_RX_REASON_CPU_SFLOW encoding name strings maps. */
#define BCM56080_A0_RX_REASON_CPU_SFLOW_NAME_MAP_INIT \
    {"INVALID", BCM56080_A0_RX_REASON_CPU_SFLOW_INVALID},\
    {"CPU_SFLOW_FLEX", BCM56080_A0_RX_REASON_CPU_SFLOW_CPU_SFLOW_FLEX},\
    {"CPU_SFLOW_DST", BCM56080_A0_RX_REASON_CPU_SFLOW_CPU_SFLOW_DST},\
    {"CPU_SFLOW_SRC", BCM56080_A0_RX_REASON_CPU_SFLOW_CPU_SFLOW_SRC},\
    {NULL, 0}

/*!
 * \name BCM56080_A0_RX_REASON_MPLS_PROC_ERROR encodings.
 * \anchor BCM56080_A0_RX_REASON_MPLS_PROC_ERROR_XXX
 */
/*! \{ */
#define BCM56080_A0_RX_REASON_MPLS_PROC_ERROR_NOP                    0
#define BCM56080_A0_RX_REASON_MPLS_PROC_ERROR_INVALID_PAYLOAD        1
#define BCM56080_A0_RX_REASON_MPLS_PROC_ERROR_INVALID_ACTION         2
#define BCM56080_A0_RX_REASON_MPLS_PROC_ERROR_LABEL_MISS             3
#define BCM56080_A0_RX_REASON_MPLS_PROC_ERROR_TTL_CHECK_FAIL         4
/*! \} */

/*! BCM56080_A0_RX_REASON_MPLS_PROC_ERROR encoding name strings maps. */
#define BCM56080_A0_RX_REASON_MPLS_PROC_ERROR_NAME_MAP_INIT \
    {"NOP", BCM56080_A0_RX_REASON_MPLS_PROC_ERROR_NOP},\
    {"INVALID_PAYLOAD", BCM56080_A0_RX_REASON_MPLS_PROC_ERROR_INVALID_PAYLOAD},\
    {"INVALID_ACTION", BCM56080_A0_RX_REASON_MPLS_PROC_ERROR_INVALID_ACTION},\
    {"LABEL_MISS", BCM56080_A0_RX_REASON_MPLS_PROC_ERROR_LABEL_MISS},\
    {"TTL_CHECK_FAIL", BCM56080_A0_RX_REASON_MPLS_PROC_ERROR_TTL_CHECK_FAIL},\
    {NULL, 0}

/*!
 * \name BCM56080_A0_RX_REASON_OAM_PROCESSING encodings.
 * \anchor BCM56080_A0_RX_REASON_OAM_PROCESSING_XXX
 */
/*! \{ */
#define BCM56080_A0_RX_REASON_OAM_PROCESSING_INVALID                 0
#define BCM56080_A0_RX_REASON_OAM_PROCESSING_OAM_CCM                 1
#define BCM56080_A0_RX_REASON_OAM_PROCESSING_OAM_LM                  2
#define BCM56080_A0_RX_REASON_OAM_PROCESSING_OAM_DM                  3
#define BCM56080_A0_RX_REASON_OAM_PROCESSING_OAM_OTHER_OPCODES       4
/*! \} */

/*! BCM56080_A0_RX_REASON_OAM_PROCESSING encoding name strings maps. */
#define BCM56080_A0_RX_REASON_OAM_PROCESSING_NAME_MAP_INIT \
    {"INVALID", BCM56080_A0_RX_REASON_OAM_PROCESSING_INVALID},\
    {"OAM_CCM", BCM56080_A0_RX_REASON_OAM_PROCESSING_OAM_CCM},\
    {"OAM_LM", BCM56080_A0_RX_REASON_OAM_PROCESSING_OAM_LM},\
    {"OAM_DM", BCM56080_A0_RX_REASON_OAM_PROCESSING_OAM_DM},\
    {"OAM_OTHER_OPCODES", BCM56080_A0_RX_REASON_OAM_PROCESSING_OAM_OTHER_OPCODES},\
    {NULL, 0}

/* TXPMD defines */
#define BCM56080_A0_TXPMD_CPU_TX_ECMP_MEMBER_ID                      0
#define BCM56080_A0_TXPMD_CPU_TX_MCAST_LB_INDEX                      1
#define BCM56080_A0_TXPMD_CPU_TX_DESTINATION                         2
#define BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE                    3
#define BCM56080_A0_TXPMD_CPU_TX_DP                                  4
#define BCM56080_A0_TXPMD_CPU_TX_INPUT_PRI                           5
#define BCM56080_A0_TXPMD_CPU_TX_INT_CN                              6
#define BCM56080_A0_TXPMD_CPU_TX_INT_PRI                             7
#define BCM56080_A0_TXPMD_CPU_TX_MCAST_LB_INDEX_VLD                  8
#define BCM56080_A0_TXPMD_CPU_TX_PKT_PROFILE                         9
#define BCM56080_A0_TXPMD_CPU_TX_QOS_FIELDS_VLD                      10
#define BCM56080_A0_TXPMD_CPU_TX_ROUTED_PKT                          11
#define BCM56080_A0_TXPMD_CPU_TX_SOP                                 12
#define BCM56080_A0_TXPMD_CPU_TX_UNICAST                             13
#define BCM56080_A0_TXPMD_CPU_TX_VRF                                 14
#define BCM56080_A0_TXPMD_CPU_TX_VRF_VALID                           15
#define BCM56080_A0_TXPMD_CPU_TX_WCMP_SEL                            16
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_CELL_ERROR                  17
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_CELL_LENGTH                 18
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_COS                         19
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_DESTINATION                 20
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_DESTINATION_TYPE            21
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_EOP                         22
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_INPUT_PRI                   23
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_LM_COUNTER_ACTION           24
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_LM_COUNTER_ID               25
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_OAM_REPLACEMENT_OFFSET      26
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_PKT_LENGTH                  27
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_RQE_Q_NUM                   28
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_SOP                         29
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_SPAP                        30
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_SPID                        31
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_SPID_OVERRIDE               32
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_SRC_MODID                   33
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_TIMESTAMP_ACTION            34
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_UNICAST                     35
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_CELL_ERROR                  36
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_CNG                         37
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_COS                         38
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_DESTINATION                 39
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_DESTINATION_TYPE            40
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_EOP                         41
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_IEEE1588_INGRESS_TIMESTAMP_SIGN 42
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_IEEE1588_ONE_STEP_ENABLE    43
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_IEEE1588_REGEN_UDP_CHECKSUM 44
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_IEEE1588_TIMESTAMP_HDR_OFFSET 45
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_INPUT_PRI                   46
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_RQE_Q_NUM                   47
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_SOP                         48
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_SPAP                        49
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_SPID                        50
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_SPID_OVERRIDE               51
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_SRC_MODID                   52
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_TX_TS                       53
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_UNICAST                     54
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_WRED_MARK_ELIGIBLE          55
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_WRED_RESPONSE               56
#define BCM56080_A0_TXPMD_HEADER_TYPE                                57
#define BCM56080_A0_TXPMD_START                                      58
#define BCM56080_A0_TXPMD_COUNT                                      59

/* TXPMD name map */
#define BCM56080_A0_TXPMD_NAME_MAP_INIT \
    {"CPU_TX::ECMP_MEMBER_ID", BCM56080_A0_TXPMD_CPU_TX_ECMP_MEMBER_ID}, \
    {"CPU_TX::MCAST_LB_INDEX", BCM56080_A0_TXPMD_CPU_TX_MCAST_LB_INDEX}, \
    {"CPU_TX::DESTINATION", BCM56080_A0_TXPMD_CPU_TX_DESTINATION}, \
    {"CPU_TX::DESTINATION_TYPE", BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE}, \
    {"CPU_TX::DP", BCM56080_A0_TXPMD_CPU_TX_DP}, \
    {"CPU_TX::INPUT_PRI", BCM56080_A0_TXPMD_CPU_TX_INPUT_PRI}, \
    {"CPU_TX::INT_CN", BCM56080_A0_TXPMD_CPU_TX_INT_CN}, \
    {"CPU_TX::INT_PRI", BCM56080_A0_TXPMD_CPU_TX_INT_PRI}, \
    {"CPU_TX::MCAST_LB_INDEX_VLD", BCM56080_A0_TXPMD_CPU_TX_MCAST_LB_INDEX_VLD}, \
    {"CPU_TX::PKT_PROFILE", BCM56080_A0_TXPMD_CPU_TX_PKT_PROFILE}, \
    {"CPU_TX::QOS_FIELDS_VLD", BCM56080_A0_TXPMD_CPU_TX_QOS_FIELDS_VLD}, \
    {"CPU_TX::ROUTED_PKT", BCM56080_A0_TXPMD_CPU_TX_ROUTED_PKT}, \
    {"CPU_TX::SOP", BCM56080_A0_TXPMD_CPU_TX_SOP}, \
    {"CPU_TX::UNICAST", BCM56080_A0_TXPMD_CPU_TX_UNICAST}, \
    {"CPU_TX::VRF", BCM56080_A0_TXPMD_CPU_TX_VRF}, \
    {"CPU_TX::VRF_VALID", BCM56080_A0_TXPMD_CPU_TX_VRF_VALID}, \
    {"CPU_TX::WCMP_SEL", BCM56080_A0_TXPMD_CPU_TX_WCMP_SEL}, \
    {"OAM_DOWNMEP_TX::CELL_ERROR", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_CELL_ERROR}, \
    {"OAM_DOWNMEP_TX::CELL_LENGTH", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_CELL_LENGTH}, \
    {"OAM_DOWNMEP_TX::COS", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_COS}, \
    {"OAM_DOWNMEP_TX::DESTINATION", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_DESTINATION}, \
    {"OAM_DOWNMEP_TX::DESTINATION_TYPE", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_DESTINATION_TYPE}, \
    {"OAM_DOWNMEP_TX::EOP", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_EOP}, \
    {"OAM_DOWNMEP_TX::INPUT_PRI", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_INPUT_PRI}, \
    {"OAM_DOWNMEP_TX::LM_COUNTER_ACTION", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_LM_COUNTER_ACTION}, \
    {"OAM_DOWNMEP_TX::LM_COUNTER_ID", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_LM_COUNTER_ID}, \
    {"OAM_DOWNMEP_TX::OAM_REPLACEMENT_OFFSET", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_OAM_REPLACEMENT_OFFSET}, \
    {"OAM_DOWNMEP_TX::PKT_LENGTH", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_PKT_LENGTH}, \
    {"OAM_DOWNMEP_TX::RQE_Q_NUM", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_RQE_Q_NUM}, \
    {"OAM_DOWNMEP_TX::SOP", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_SOP}, \
    {"OAM_DOWNMEP_TX::SPAP", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_SPAP}, \
    {"OAM_DOWNMEP_TX::SPID", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_SPID}, \
    {"OAM_DOWNMEP_TX::SPID_OVERRIDE", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_SPID_OVERRIDE}, \
    {"OAM_DOWNMEP_TX::SRC_MODID", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_SRC_MODID}, \
    {"OAM_DOWNMEP_TX::TIMESTAMP_ACTION", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_TIMESTAMP_ACTION}, \
    {"OAM_DOWNMEP_TX::UNICAST", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_UNICAST}, \
    {"SOBMH_FROM_CPU::CELL_ERROR", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_CELL_ERROR}, \
    {"SOBMH_FROM_CPU::CNG", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_CNG}, \
    {"SOBMH_FROM_CPU::COS", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_COS}, \
    {"SOBMH_FROM_CPU::DESTINATION", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_DESTINATION}, \
    {"SOBMH_FROM_CPU::DESTINATION_TYPE", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_DESTINATION_TYPE}, \
    {"SOBMH_FROM_CPU::EOP", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_EOP}, \
    {"SOBMH_FROM_CPU::IEEE1588_INGRESS_TIMESTAMP_SIGN", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_IEEE1588_INGRESS_TIMESTAMP_SIGN}, \
    {"SOBMH_FROM_CPU::IEEE1588_ONE_STEP_ENABLE", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_IEEE1588_ONE_STEP_ENABLE}, \
    {"SOBMH_FROM_CPU::IEEE1588_REGEN_UDP_CHECKSUM", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_IEEE1588_REGEN_UDP_CHECKSUM}, \
    {"SOBMH_FROM_CPU::IEEE1588_TIMESTAMP_HDR_OFFSET", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_IEEE1588_TIMESTAMP_HDR_OFFSET}, \
    {"SOBMH_FROM_CPU::INPUT_PRI", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_INPUT_PRI}, \
    {"SOBMH_FROM_CPU::RQE_Q_NUM", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_RQE_Q_NUM}, \
    {"SOBMH_FROM_CPU::SOP", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_SOP}, \
    {"SOBMH_FROM_CPU::SPAP", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_SPAP}, \
    {"SOBMH_FROM_CPU::SPID", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_SPID}, \
    {"SOBMH_FROM_CPU::SPID_OVERRIDE", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_SPID_OVERRIDE}, \
    {"SOBMH_FROM_CPU::SRC_MODID", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_SRC_MODID}, \
    {"SOBMH_FROM_CPU::TX_TS", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_TX_TS}, \
    {"SOBMH_FROM_CPU::UNICAST", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_UNICAST}, \
    {"SOBMH_FROM_CPU::WRED_MARK_ELIGIBLE", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_WRED_MARK_ELIGIBLE}, \
    {"SOBMH_FROM_CPU::WRED_RESPONSE", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_WRED_RESPONSE}, \
    {"HEADER_TYPE", BCM56080_A0_TXPMD_HEADER_TYPE}, \
    {"START", BCM56080_A0_TXPMD_START}, \
    {"COUNT", BCM56080_A0_TXPMD_COUNT}

/*!
 * \name BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE encodings.
 * \anchor BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_XXX
 */
/*! \{ */
#define BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_EGRESS_PORT        0
#define BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_NHI                1
#define BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_ECMP               2
#define BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_ECMP_MEMBER        3
#define BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_IPMC               4
#define BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_L2MC               5
#define BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_VLAN_FLOOD         6
#define BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_L2_PBM             7
#define BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_LAG_ID             8
#define BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_INVALID            9
/*! \} */

/*! BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE encoding name strings maps. */
#define BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_NAME_MAP_INIT \
    {"EGRESS_PORT", BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_EGRESS_PORT},\
    {"NHI", BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_NHI},\
    {"ECMP", BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_ECMP},\
    {"ECMP_MEMBER", BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_ECMP_MEMBER},\
    {"IPMC", BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_IPMC},\
    {"L2MC", BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_L2MC},\
    {"VLAN_FLOOD", BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_VLAN_FLOOD},\
    {"L2_PBM", BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_L2_PBM},\
    {"LAG_ID", BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_LAG_ID},\
    {"INVALID", BCM56080_A0_TXPMD_CPU_TX_DESTINATION_TYPE_INVALID},\
    {NULL, 0}

/*!
 * \name BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_DESTINATION_TYPE encodings.
 * \anchor BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_DESTINATION_TYPE_XXX
 */
/*! \{ */
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_DESTINATION_TYPE_EGRESS_PORT 0
/*! \} */

/*! BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_DESTINATION_TYPE encoding name strings maps. */
#define BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_DESTINATION_TYPE_NAME_MAP_INIT \
    {"EGRESS_PORT", BCM56080_A0_TXPMD_OAM_DOWNMEP_TX_DESTINATION_TYPE_EGRESS_PORT},\
    {NULL, 0}

/*!
 * \name BCM56080_A0_TXPMD_SOBMH_FROM_CPU_DESTINATION_TYPE encodings.
 * \anchor BCM56080_A0_TXPMD_SOBMH_FROM_CPU_DESTINATION_TYPE_XXX
 */
/*! \{ */
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_DESTINATION_TYPE_EGRESS_PORT 0
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_DESTINATION_TYPE_L2_PBM     7
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_DESTINATION_TYPE_INVALID    9
/*! \} */

/*! BCM56080_A0_TXPMD_SOBMH_FROM_CPU_DESTINATION_TYPE encoding name strings maps. */
#define BCM56080_A0_TXPMD_SOBMH_FROM_CPU_DESTINATION_TYPE_NAME_MAP_INIT \
    {"EGRESS_PORT", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_DESTINATION_TYPE_EGRESS_PORT},\
    {"L2_PBM", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_DESTINATION_TYPE_L2_PBM},\
    {"INVALID", BCM56080_A0_TXPMD_SOBMH_FROM_CPU_DESTINATION_TYPE_INVALID},\
    {NULL, 0}

/*!
 * \name BCM56080_A0_TXPMD_HEADER_TYPE encodings.
 * \anchor BCM56080_A0_TXPMD_HEADER_TYPE_XXX
 */
/*! \{ */
#define BCM56080_A0_TXPMD_HEADER_TYPE_RESERVED_0                     0
#define BCM56080_A0_TXPMD_HEADER_TYPE_SOBMH_FROM_CPU                 1
#define BCM56080_A0_TXPMD_HEADER_TYPE_CPU_TX                         2
#define BCM56080_A0_TXPMD_HEADER_TYPE_OAM_DOWNMEP_TX                 12
/*! \} */

/*! BCM56080_A0_TXPMD_HEADER_TYPE encoding name strings maps. */
#define BCM56080_A0_TXPMD_HEADER_TYPE_NAME_MAP_INIT \
    {"RESERVED_0", BCM56080_A0_TXPMD_HEADER_TYPE_RESERVED_0},\
    {"SOBMH_FROM_CPU", BCM56080_A0_TXPMD_HEADER_TYPE_SOBMH_FROM_CPU},\
    {"CPU_TX", BCM56080_A0_TXPMD_HEADER_TYPE_CPU_TX},\
    {"OAM_DOWNMEP_TX", BCM56080_A0_TXPMD_HEADER_TYPE_OAM_DOWNMEP_TX},\
    {NULL, 0}

/*!
 * \name BCM56080_A0_TXPMD_START encodings.
 * \anchor BCM56080_A0_TXPMD_START_XXX
 */
/*! \{ */
#define BCM56080_A0_TXPMD_START_RESERVED_0                           0
#define BCM56080_A0_TXPMD_START_RESERVED_1                           1
#define BCM56080_A0_TXPMD_START_INTERNAL_HEADER                      2
#define BCM56080_A0_TXPMD_START_HIGIG                                3
/*! \} */

/*! BCM56080_A0_TXPMD_START encoding name strings maps. */
#define BCM56080_A0_TXPMD_START_NAME_MAP_INIT \
    {"RESERVED_0", BCM56080_A0_TXPMD_START_RESERVED_0},\
    {"RESERVED_1", BCM56080_A0_TXPMD_START_RESERVED_1},\
    {"INTERNAL_HEADER", BCM56080_A0_TXPMD_START_INTERNAL_HEADER},\
    {"HIGIG", BCM56080_A0_TXPMD_START_HIGIG},\
    {NULL, 0}

/* LBHDR defines */
#define BCM56080_A0_LBHDR_PP_PORT                                    0
#define BCM56080_A0_LBHDR_ROUTED_PKT                                 1
#define BCM56080_A0_LBHDR_VRF                                        2
#define BCM56080_A0_LBHDR_VRF_VALID                                  3
#define BCM56080_A0_LBHDR_ZERO                                       4
#define BCM56080_A0_LBHDR_PKT_PROFILE                                5
#define BCM56080_A0_LBHDR_VISIBILITY_PKT                             6
#define BCM56080_A0_LBHDR_SOURCE                                     7
#define BCM56080_A0_LBHDR_SOURCE_TYPE                                8
#define BCM56080_A0_LBHDR_HEADER_TYPE                                9
#define BCM56080_A0_LBHDR_INPUT_PRIORITY                             10
#define BCM56080_A0_LBHDR_START                                      11
#define BCM56080_A0_LBHDR_COUNT                                      12

/* LBHDR name map */
#define BCM56080_A0_LBHDR_NAME_MAP_INIT \
    {"PP_PORT", BCM56080_A0_LBHDR_PP_PORT}, \
    {"ROUTED_PKT", BCM56080_A0_LBHDR_ROUTED_PKT}, \
    {"VRF", BCM56080_A0_LBHDR_VRF}, \
    {"VRF_VALID", BCM56080_A0_LBHDR_VRF_VALID}, \
    {"ZERO", BCM56080_A0_LBHDR_ZERO}, \
    {"PKT_PROFILE", BCM56080_A0_LBHDR_PKT_PROFILE}, \
    {"VISIBILITY_PKT", BCM56080_A0_LBHDR_VISIBILITY_PKT}, \
    {"SOURCE", BCM56080_A0_LBHDR_SOURCE}, \
    {"SOURCE_TYPE", BCM56080_A0_LBHDR_SOURCE_TYPE}, \
    {"HEADER_TYPE", BCM56080_A0_LBHDR_HEADER_TYPE}, \
    {"INPUT_PRIORITY", BCM56080_A0_LBHDR_INPUT_PRIORITY}, \
    {"START", BCM56080_A0_LBHDR_START}, \
    {"COUNT", BCM56080_A0_LBHDR_COUNT}

/*!
 * \name BCM56080_A0_LBHDR_HEADER_TYPE encodings.
 * \anchor BCM56080_A0_LBHDR_HEADER_TYPE_XXX
 */
/*! \{ */
#define BCM56080_A0_LBHDR_HEADER_TYPE_GENERIC                        0
/*! \} */

/*! BCM56080_A0_LBHDR_HEADER_TYPE encoding name strings maps. */
#define BCM56080_A0_LBHDR_HEADER_TYPE_NAME_MAP_INIT \
    {"GENERIC", BCM56080_A0_LBHDR_HEADER_TYPE_GENERIC},\
    {NULL, 0}

#endif /* BCM56080_A0_PMD_FIELD_H */
