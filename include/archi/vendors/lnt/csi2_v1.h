/*
 * Copyright (C) 2018 GreenWaves Technologies
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __ARCHI_LNT_CSI2_V1_H__
#define __ARCHI_LNT_CSI2_V1_H__

// Registers offset definition
#define APB_CSI2_CFG_OFFSET                          (0x60 << 2)
#define APB_CSI2_ERR_MSB1_OFFSET                     (0x61 << 2)
#define APB_CSI2_ERR_MSB_OFFSET                      (0x62 << 2)
#define APB_CSI2_ERR_LSB_OFFSET                      (0x63 << 2)
#define APB_CSI2_HS_RX_TIMEOUT_MSB2_OFFSET           (0x64 << 2)
#define APB_CSI2_HS_RX_TIMEOUT_MSB1_OFFSET           (0x65 << 2)
#define APB_CSI2_HS_RX_TIMEOUT_LSB_OFFSET            (0x66 << 2)
#define APB_CSI2_VCCFG_OFFSET                        (0x67 << 2)
#define APB_CSI2_POLARITY_OFFSET                     (0x68 << 2)
#define APB_CSI2_CCI_ADDR_OFFSET                     (0x69 << 2)
#define APB_CSI2_CCI_WR_DATA_OFFSET                  (0x6a << 2)
#define APB_CSI2_CCI_RD_DATA_OFFSET                  (0x6b << 2)
#define APB_CSI2_CCI_READ_WRITE_OFFSET               (0x6c << 2)
#define APB_CSI2_CCI_STATUS_OFFSET                   (0x6d << 2)
#define APB_CSI2_CCI_DEVICE_ADDR_OFFSET              (0x6e << 2)
#define APB_CSI2_ULPS_STATUS_OFFSET                  (0x6f << 2)

#define APB_CSI2_DPHY_LANE_ENABLE_OFFSET             (0x00 << 2)
#define APB_CSI2_DPHY_RESET_DIG_LOGIC_OFFSET         (0x20 << 2)
#define APB_CSI2_DPHY_LANE_CK_HS_COUNTDOWN_OFFSET    (0x38 << 2)
#define APB_CSI2_DPHY_LANE_CK_CONT_MODE_OFFSET       (0x2a << 2)
#define APB_CSI2_DPHY_LANE_CK_RX_CALIB_ENABLE_OFFSET (0x3a << 2)
#define APB_CSI2_DPHY_LANE_0_HS_COUNTDOWN_OFFSET     (0x78 << 2)
#define APB_CSI2_DPHY_LANE_0_RX_CALIB_ENABLE_OFFSET  (0x9a << 2)
#define APB_CSI2_DPHY_LANE_1_HS_COUNTDOWN_OFFSET     (0x88 << 2)
#define APB_CSI2_DPHY_LANE_1_RX_CALIB_ENABLE_OFFSET  (0x9a << 2)

// Registers bitfields offset, mask, value definition
// Configuration Register
// #define APB_CSI2_CFG__BIT        				()
// #define APB__BITS       				()
// #define APB__MASK       				ARCHI_REG_MASK(, )
// #define APB__ENA        				(1<<)
// #define APB__DIS        				(0<<)

// #define APB__BIT        				()
// #define APB__BITS       				()
// #define APB__MASK       				ARCHI_REG_MASK(, )
// #define APB__ENA        				(1<<)
// #define APB__DIS        				(0<<)

// #define APB__BIT        				()
// #define APB__BITS       				()
// #define APB__MASK       				ARCHI_REG_MASK(, )
// #define APB__ENA        				(1<<)
// #define APB__DIS        				(0<<)

// #define APB__BIT        				()
// #define APB__BITS       				()
// #define APB__MASK       				ARCHI_REG_MASK(, )
// #define APB__ENA        				(1<<)
// #define APB__DIS        				(0<<)

#endif