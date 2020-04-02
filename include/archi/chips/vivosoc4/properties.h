/*
 * Copyright (C) 2018 ETH Zurich, University of Bologna
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


#ifndef __ARCHI_CHIPS_VIVOSOC4_PROPERTIES_H__
#define __ARCHI_CHIPS_VIVOSOC4_PROPERTIES_H__

/*
 * MEMORIES
 */

#define ARCHI_HAS_L2                1
#define ARCHI_HAS_L1                1

#define ARCHI_HAS_L1_ALIAS          1
#define ARCHI_HAS_L2_ALIAS          1

/*
 * IP VERSIONS
 */

#define UDMA_VERSION                3
#define PERIPH_VERSION              2
#define TIMER_VERSION               2
#define SOC_EU_VERSION              3
#define APB_SOC_VERSION             2
#define STDOUT_VERSION              2
#define GPIO_VERSION                2
#define EU_VERSION                  3
#define ITC_VERSION                 1
#define RISCV_VERSION               4
#define MCHAN_VERSION               6
#define PADS_VERSION                2
#define FLL_VERSION                 1


/*
 * CLUSTER
 */

#define ARCHI_HAS_CLUSTER           1
#define ARCHI_L1_TAS_BIT            20
#define ARCHI_CLUSTER_NB_PE         4


/*
 * HWS
 */

#define ARCHI_EU_NB_HW_MUTEX        1


/*
 * FC
 */

#define ARCHI_FC_CID                31
#define ARCHI_HAS_FC_ITC            1


/*
 * CLOCKS
 */

#define ARCHI_REF_CLOCK_LOG2        15
#define ARCHI_REF_CLOCK             (1<<ARCHI_REF_CLOCK_LOG2)

#define ARCHI_FLL_REF_CLOCK_SLOW    (ARCHI_REF_CLOCK)       // 32768Hz
#define ARCHI_FLL_REF_CLOCK_FAST    (ARCHI_REF_CLOCK*500)   // 16384000Hz


/*
 * ADC/AFE properties
 */

#define ARCHI_NUM_AFE                   6

#define ARCHI_AFE_BIOZ_ID               0
#define ARCHI_AFE_TMAO_ID               1
#define ARCHI_AFE_EXG_ID                2
#define ARCHI_AFE_AUX_ID                3
#define ARCHI_AFE_MIUR1_ID              4
#define ARCHI_AFE_MIUR2_ID              5

#define ARCHI_NUM_AFE_RX                4
#define ARCHI_NUM_ADC_RX                ARCHI_NUM_AFE_RX

#define ARCHI_ADC_BIOZ_NUM_CH           4
#define ARCHI_ADC_BIOZ_NUM_AFE_CH       32
#define ARCHI_ADC_TMAO_NUM_CH           16
#define ARCHI_ADC_TMAO_NUM_SUBCH        3
#define ARCHI_ADC_EXG_NUM_CH            12
#define ARCHI_ADC_AUX_NUM_CH            3
#define ARCHI_ADC_NUM_CH(id)            ((id == 3) ? ARCHI_ADC_AUX_NUM_CH : ((id == 2) ? ARCHI_ADC_EXG_NUM_CH : ((id == 1) ? ARCHI_ADC_TMAO_NUM_CH : ARCHI_ADC_BIOZ_NUM_CH)))

#define ARCHI_ADC_EXG_NUM_THR_CH        9

// TODO move to archi_analog
#define ARCHI_ANALOG_PPG_NUM_THR_SETS   4
#define ARCHI_ANALOG_INTCFG_IP          31

/*
 * UDMA
 */

#define ARCHI_UDMA_HAS_SPIM         1
#define ARCHI_UDMA_HAS_UART         1
#define ARCHI_UDMA_HAS_I2C          1
#define ARCHI_UDMA_HAS_FILTER       1
#define ARCHI_UDMA_HAS_TIMESYNC     1

#define ARCHI_UDMA_NB_SPIM          3
#define ARCHI_UDMA_NB_UART          2
#define ARCHI_UDMA_NB_I2C           1
#define ARCHO_UDMA_NB_FILTER        1
#define ARCHI_UDMA_NB_TIMESYNC      ARCHI_NUM_AFE

#define ARCHI_NB_PERIPH             (ARCHI_UDMA_NB_SPIM+ARCHI_UDMA_NB_UART+ARCHI_UDMA_NB_I2C+ARCHO_UDMA_NB_FILTER+ARCHI_UDMA_NB_TIMESYNC)

#define ARCHI_UDMA_SPIM_ID(id)      (0  + (id))
#define ARCHI_UDMA_UART_ID(id)      (3  + (id))
#define ARCHI_UDMA_I2C_ID(id)       (5  + (id))
#define ARCHI_UDMA_FILTER_ID(id)    (6  + (id))
#define ARCHI_UDMA_TIMESYNC_ID(id)  (7 + (id))

#define ARCHI_UDMA_TIMESYNC_BIOZ_ID     7
#define ARCHI_UDMA_TIMESYNC_TMAO_ID     8
#define ARCHI_UDMA_TIMESYNC_EXG_ID      9
#define ARCHI_UDMA_TIMESYNC_MIUR_ID     11
#define ARCHI_UDMA_TIMESYNC_MIUR1_ID    ARCHI_UDMA_TIMESYNC_MIUR_ID
#define ARCHI_UDMA_TIMESYNC_MIUR2_ID    (ARCHI_UDMA_TIMESYNC_MIUR_ID+1)

// legacy -> remove
#define ARCHI_UDMA_HAS_ADC          1
#define ARCHI_UDMA_NB_ADC           3
#define ARCHI_UDMA_ADC_ID(id)       ((id == 2) ? 12 : ((id == 1) ? 8 : 7))
#define ARCHI_UDMA_ADC_BIOZ_ID      7
#define ARCHI_UDMA_ADC_TMAO_ID      8
#define ARCHI_UDMA_ADC_EXG_ID       12

/*
 * FLLS
 */

#define ARCHI_NB_FLL                3
#define ARCHI_FLL_CLUSTER_ID        0
#define ARCHI_FLL_MASTER_ID         1
#define ARCHI_FLL_PERIPH_ID         2

#define ARCHI_FLL_SOC_ID            ARCHI_FLL_MASTER_ID

/*
 * SOC EVENTS
 */

#define ARCHI_SOC_EVENT_PERIPH_EVT_NB   124
#define ARCHI_SOC_EVENT_SW_NB           8
#define ARCHI_SOC_EVENT_NB_TOTAL        (ARCHI_SOC_EVENT_PERIPH_EVT_NB+ARCHI_SOC_EVENT_SW_NB+1)

#define ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT_LOG2    2
#define ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT         (1<<ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT_LOG2)
#define ARCHI_SOC_EVENT_UDMA_FIRST_EVT              0
#define ARCHI_SOC_EVENT_UDMA_NB_EVT                 28 //(ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT * ARCHI_NB_PERIPH)
#define ARCHI_SOC_EVENT_UDMA_NB_TGEN_EVT            6 // TODO check this

#define ARCHI_SOC_EVENT_PERIPH_FIRST_EVT(x)         ((x)*ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT)

#define ARCHI_SOC_EVENT_SPIM0_RX        0
#define ARCHI_SOC_EVENT_SPIM0_TX        1
#define ARCHI_SOC_EVENT_SPIM0_CMD       2
#define ARCHI_SOC_EVENT_SPIM0_EOT       3

#define ARCHI_SOC_EVENT_SPIM1_RX        4
#define ARCHI_SOC_EVENT_SPIM1_TX        5
#define ARCHI_SOC_EVENT_SPIM1_CMD       6
#define ARCHI_SOC_EVENT_SPIM1_EOT       7

#define ARCHI_SOC_EVENT_SPIM2_RX        8
#define ARCHI_SOC_EVENT_SPIM2_TX        9
#define ARCHI_SOC_EVENT_SPIM2_CMD       10
#define ARCHI_SOC_EVENT_SPIM2_EOT       11

#define ARCHI_SOC_EVENT_UART0_RX        12
#define ARCHI_SOC_EVENT_UART0_TX        13
#define ARCHI_SOC_EVENT_UART0_EOT       14 // not implemented
#define ARCHI_SOC_EVENT_UART0_RX_DATA   15 // not implemented

#define ARCHI_SOC_EVENT_UART1_RX        16
#define ARCHI_SOC_EVENT_UART1_TX        17
#define ARCHI_SOC_EVENT_UART1_EOT       18 // not implemented
#define ARCHI_SOC_EVENT_UART1_RX_DATA   19 // not implemented

#define ARCHI_SOC_EVENT_I2C0_RX         20
#define ARCHI_SOC_EVENT_I2C0_TX         21
#define ARCHI_SOC_EVENT_I2C0_ERR        22

#define ARCHI_SOC_EVENT_FILTER0_EOT     24
#define ARCHI_SOC_EVENT_FILTER0_ACT     25

#define ARCHI_SOC_EVENT_ADC_BIOZ_FIRST  32
#define ARCHI_SOC_EVENT_ADC_TMAO_FIRST  36
#define ARCHI_SOC_EVENT_ADC_EXG_FIRST   52
#define ARCHI_SOC_EVENT_ADC_AUX_FIRST   68

#define ARCHI_SOC_EVENT_ADC_BIOZ(ch)    (ARCHI_SOC_EVENT_ADC_BIOZ_FIRST + (ch))
#define ARCHI_SOC_EVENT_ADC_TMAO(ch)    (ARCHI_SOC_EVENT_ADC_TMAO_FIRST + (ch))
#define ARCHI_SOC_EVENT_ADC_EXG(ch)     (ARCHI_SOC_EVENT_ADC_EXG_FIRST  + (ch))
#define ARCHI_SOC_EVENT_ADC_AUX(ch)     (ARCHI_SOC_EVENT_ADC_AUX_FIRST  + (ch))

#define ARCHI_SOC_EVENT_ADC_BIOZ_BUFF   72
#define ARCHI_SOC_EVENT_ADC_TMAO_BUFF   73
#define ARCHI_SOC_EVENT_ADC_EXG_BUFF    74
#define ARCHI_SOC_EVENT_ADC_AUX_BUFF    75
#define ARCHI_SOC_EVENT_ADC_FIRST_BUFF  ARCHI_SOC_EVENT_ADC_BIOZ_BUFF
#define ARCHI_SOC_EVENT_ADC_BUFF(adc)   (ARCHI_SOC_EVENT_ADC_FIRST_BUFF + (adc))

#define ARCHI_SOC_EVENT_TIMESYNC_BIOZ   28
#define ARCHI_SOC_EVENT_TIMESYNC_TMAO   77
#define ARCHI_SOC_EVENT_TIMESYNC_EXG    78
#define ARCHI_SOC_EVENT_TIMESYNC_MIUR   79

#define ARCHI_SOC_EVENT_THRESHOLD_TMAO      80
#define ARCHI_SOC_EVENT_THRESHOLD_EXG(ch)   (81+ch)
#define ARCHI_SOC_EVENT_THRESHOLD_AUX       90
#define ARCHI_SOC_EVENT_THRESHOLD_ADC(id)   ((id == 3) ? ARCHI_SOC_EVENT_THRESHOLD_AUX : ((id == 2) ? ARCHI_SOC_EVENT_THRESHOLD_EXG(0) : ARCHI_SOC_EVENT_THRESHOLD_TMAO))

#define ARCHI_SOC_EVENT_ADV_TIMER0      92
#define ARCHI_SOC_EVENT_ADV_TIMER1      93
#define ARCHI_SOC_EVENT_ADV_TIMER2      94
#define ARCHI_SOC_EVENT_ADV_TIMER3      95
#define ARCHI_SOC_EVENT_ADV_TIMER(id)   (ARCHI_SOC_EVENT_ADV_TIMER0 + (id))

#define ARCHI_SOC_EVENT_TMAO_IDLE       96
#define ARCHI_SOC_EVENT_TMAO_EOC        97
#define ARCHI_SOC_EVENT_AUX_DATA_VLD    98
#define ARCHI_SOC_EVENT_MIUR_CURR_VLD   99
#define ARCHI_SOC_EVENT_MIUR_EOCA       100
#define ARCHI_SOC_EVENT_MIUR_EOCB       101

#define ARCHI_SOC_EVENT_PSW_OK          104
#define ARCHI_SOC_EVENT_PMIC            105
#define ARCHI_SOC_EVENT_VCC             106
#define ARCHI_SOC_EVENT_CL_PM           107

#define ARCHI_SOC_EVENT_USB             108
#define ARCHI_SOC_EVENT_GPIO            109

#define ARCHI_SOC_EVENT_FLL_CLUSTER     112
#define ARCHI_SOC_EVENT_FLL_MASTER      113
#define ARCHI_SOC_EVENT_FLL_PERIPH      114
#define ARCHI_SOC_EVENT_FLL_SOC         ARCHI_SOC_EVENT_FLL_MASTER
#define ARCHI_SOC_EVENT_FLL_FIRST       ARCHI_SOC_EVENT_FLL_CLUSTER
#define ARCHI_SOC_EVENT_FLL(fll_id)     (ARCHI_SOC_EVENT_FLL_FIRST + (fll_id))

#define ARCHI_SOC_EVENT_REFCLK_RISEFALL 115

#define ARCHI_SOC_EVENT_WD_FLL_MASTER   116

#define ARCHI_SOC_EVENT_ADC_BIOZ_FLAG   120
#define ARCHI_SOC_EVENT_ADC_TMAO_FLAG   121
#define ARCHI_SOC_EVENT_ADC_EXG_FLAG    122
#define ARCHI_SOC_EVENT_ADC_FIRST_FLAG  ARCHI_SOC_EVENT_ADC_BIOZ_FLAG
#define ARCHI_SOC_EVENT_ADC_FLAG(adc)   (ARCHI_SOC_EVENT_ADC_FIRST_FLAG + (adc))

#define ARCHI_SOC_EVENT_SW_EVENT0       (ARCHI_SOC_EVENT_PERIPH_EVT_NB + 0)
#define ARCHI_SOC_EVENT_SW_EVENT1       (ARCHI_SOC_EVENT_PERIPH_EVT_NB + 1)
#define ARCHI_SOC_EVENT_SW_EVENT2       (ARCHI_SOC_EVENT_PERIPH_EVT_NB + 2)
#define ARCHI_SOC_EVENT_SW_EVENT3       (ARCHI_SOC_EVENT_PERIPH_EVT_NB + 3)
#define ARCHI_SOC_EVENT_SW_EVENT4       (ARCHI_SOC_EVENT_PERIPH_EVT_NB + 4)
#define ARCHI_SOC_EVENT_SW_EVENT5       (ARCHI_SOC_EVENT_PERIPH_EVT_NB + 5)
#define ARCHI_SOC_EVENT_SW_EVENT6       (ARCHI_SOC_EVENT_PERIPH_EVT_NB + 6)
#define ARCHI_SOC_EVENT_SW_EVENT7       (ARCHI_SOC_EVENT_PERIPH_EVT_NB + 7)
#define ARCHI_SOC_EVENT_SW(evt_id)      (ARCHI_SOC_EVENT_SW_EVENT0 + (evt_id))
#define ARCHI_SOC_EVENT_REFCLK          (ARCHI_SOC_EVENT_NB_TOTAL - 1)


/*
 * CLUSTER EVENTS
 */

// events 0-7 are sw events (notifiers)
#define ARCHI_CL_EVT_DMA0           8
#define ARCHI_CL_EVT_DMA1           9
#define ARCHI_CL_EVT_TIMER0         10
#define ARCHI_CL_EVT_TIMER1         11
#define ARCHI_CL_EVT_ACC0           12
#define ARCHI_CL_EVT_ACC1           13
#define ARCHI_CL_EVT_ACC2           14
#define ARCHI_CL_EVT_ACC3           15
#define ARCHI_CL_EVT_BAR            16
#define ARCHI_CL_EVT_MUTEX          17
#define ARCHI_CL_EVT_DISPATCH       18

#define ARCHI_CL_EVT_DMA_PE         22

#define ARCHI_CL_EVT_SOC_FIFO       27


/*
 * FC EVENTS
 */

#define ARCHI_FC_EVT_FIRST_SW       0
#define ARCHI_FC_EVT_NB_SW          8

#define ARCHI_FC_EVT_TIMER0_LO      10
#define ARCHI_FC_EVT_TIMER0_HI      11

#define ARCHI_FC_EVT_CLK_REF_RISE   13
#define ARCHI_FC_EVT_CLK_REF        14
#define ARCHI_FC_EVT_GPIO           15

#define ARCHI_FC_EVT_ADV_TIMER0     17
#define ARCHI_FC_EVT_ADV_TIMER1     18
#define ARCHI_FC_EVT_ADV_TIMER2     19
#define ARCHI_FC_EVT_ADV_TIMER3     20
#define ARCHI_FC_EVT_PMIC           21
#define ARCHI_FC_EVT_VCC            22
#define ARCHI_FC_EVT_CLUSTER_PM     23
#define ARCHI_FC_EVT_CLUSTER_CG_OK  23

#define ARCHI_FC_EVT_FIFO_PER_EVTS  26

#define ARCHI_FC_EVT_QUEUE_ERROR    31

#define ARCHI_FC_EVT_SOC_EVT        ARCHI_FC_EVT_FIFO_PER_EVTS

#endif
