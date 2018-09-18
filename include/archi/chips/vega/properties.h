/*
 * Copyright (C) 2018 ETH Zurich, University of Bologna and GreenWaves Technologies
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


#ifndef __ARCHI_CHIPS_VEGA_PROPERTIES_H__
#define __ARCHI_CHIPS_VEGA_PROPERTIES_H__

/*
 * MEMORIES
 */ 

#define ARCHI_HAS_L2                   1
#define ARCHI_HAS_L1                   1

#define ARCHI_L1_SIZE                  65536


/*
 * MEMORY ALIAS
 */

#define ARCHI_HAS_L1_ALIAS             1
#define ARCHI_HAS_L2_ALIAS             1



/*
 * IP VERSIONS
 */

#define FLL_VERSION            1
#define GPIO_VERSION           2
#define UDMA_VERSION           3
#define PERIPH_VERSION         3
#define APB_SOC_VERSION        3
#define ADV_TIMER_VERSION      1
#define SOC_EU_VERSION         2
#define PMU_VERSION            3
#define FC_ICACHE_CTRL_VERSION 2
#define ITC_VERSION            1
#define I3C_VERSION            1
#define TIMER_VERSION          2
#define DPHY_VERSION           1
#define CSI2_VERSION           1
#define MPU_VERSION            1
// #define EFUSE_VERSION          1
#define DEBUG_VERSION          1
#define STDOUT_VERSION         2
#define QUIDDIKEY_VERSION      1
#define ROM_VERSION       	   2

#define EU_VERSION             3
#define RISCV_VERSION          4
#define MCHAN_VERSION          7
#define HWCE_VERSION           5

#define CL_CTRL_VERSION        2


/*
 * CLUSTER
 */

#define ARCHI_HAS_CLUSTER   1
#define ARCHI_CL_CID        0

// TAS = Test&Set
#define ARCHI_L1_TAS_BIT    20
//#define ARCHI_HAS_CC        1
//#define ARCHI_CC_CORE_ID    0
#define ARCHI_CLUSTER_NB_PE 8


/*
 * CLUSTER EVENT UNIT
 */

//#define ARCHI_HAS_NO_BARRIER    1
//#define ARCHI_HAS_NO_DISPATCH   1
//#define ARCHI_HAS_NO_MUTEX   1


/*
 * HWS
 */

#define ARCHI_EU_NB_HW_MUTEX 1



/*
 * FC
 */

#define ARCHI_FC_CID        31
#define ARCHI_HAS_FC_ITC     1



/*
 * CLOCKS
 */

#define ARCHI_REF_CLOCK_LOG2 15
#define ARCHI_REF_CLOCK      (1<<ARCHI_REF_CLOCK_LOG2) // log2 of ref_clk frequency



/*
 * UDMA
 */
#define ARCHI_UDMA_HAS_SPIM      1
#define ARCHI_UDMA_HAS_HYPER     1
#define ARCHI_UDMA_HAS_SDIO      1
#define ARCHI_UDMA_HAS_UART      1
#define ARCHI_UDMA_HAS_I2C       1
#define ARCHI_UDMA_HAS_I2S       1
#define ARCHI_UDMA_HAS_JTAG_FIFO 1
#define ARCHI_UDMA_HAS_MRAM      1
#define ARCHI_UDMA_HAS_CAM       1
#define ARCHI_UDMA_HAS_CSI2      1
#define ARCHI_UDMA_HAS_FILTER    1

#define ARCHI_UDMA_NB_SPIM      4
#define ARCHI_UDMA_NB_HYPER     1
#define ARCHI_UDMA_NB_SDIO      1
#define ARCHI_UDMA_NB_UART      2
#define ARCHI_UDMA_NB_I2C       1
#define ARCHI_UDMA_NB_I2S       1
#define ARCHI_UDMA_NB_JTAG_FIFO 1
#define ARCHI_UDMA_NB_MRAM      1
#define ARCHI_UDMA_NB_CAM       1
#define ARCHI_UDMA_NB_CSI2      1
#define ARCHI_UDMA_NB_FILTER    1

#define ARCHI_UDMA_SPIM_ID_OFFSET        (0)
#define ARCHI_UDMA_UART_ID_OFFSET        (ARCHI_UDMA_NB_SPIM)
#define ARCHI_UDMA_I2C_ID_OFFSET         (ARCHI_UDMA_UART_ID_OFFSET      + ARCHI_UDMA_NB_UART)
#define ARCHI_UDMA_HYPER_ID_OFFSET       (ARCHI_UDMA_I2C_ID_OFFSET       + ARCHI_UDMA_NB_I2C)
#define ARCHI_UDMA_JTAG_FIFO_ID_OFFSET   (ARCHI_UDMA_HYPER_ID_OFFSET     + ARCHI_UDMA_NB_HYPER)
#define ARCHI_UDMA_SDIO_ID_OFFSET      	 (ARCHI_UDMA_JTAG_FIFO_ID_OFFSET + ARCHI_UDMA_NB_JTAG_FIFO)
#define ARCHI_UDMA_I2S_ID_OFFSET         (ARCHI_UDMA_SDIO_ID_OFFSET      + ARCHI_UDMA_NB_SDIO)
#define ARCHI_UDMA_CAM_ID_OFFSET         (ARCHI_UDMA_I2S_ID_OFFSET       + ARCHI_UDMA_NB_I2S)
#define ARCHI_UDMA_CSI2_ID_OFFSET        (ARCHI_UDMA_CAM_ID_OFFSET       + ARCHI_UDMA_NB_CAM)
#define ARCHI_UDMA_MRAM_ID_OFFSET      	 (ARCHI_UDMA_CSI2_ID_OFFSET      + ARCHI_UDMA_NB_CSI2)
#define ARCHI_UDMA_FILTER_ID_OFFSET      (ARCHI_UDMA_MRAM_ID_OFFSET      + ARCHI_UDMA_NB_MRAM)

#define ARCHI_UDMA_SPIM_ID(id)      (ARCHI_UDMA_SPIM_ID_OFFSET      + (id))
#define ARCHI_UDMA_UART_ID(id)      (ARCHI_UDMA_UART_ID_OFFSET      + (id))
#define ARCHI_UDMA_I2C_ID(id)       (ARCHI_UDMA_I2C_ID_OFFSET       + (id))
#define ARCHI_UDMA_HYPER_ID(id)     (ARCHI_UDMA_HYPER_ID_OFFSET     + (id))
#define ARCHI_UDMA_JTAG_FIFO_ID(id) (ARCHI_UDMA_JTAG_FIFO_ID_OFFSET + (id))
#define ARCHI_UDMA_SDIO_ID(id)      (ARCHI_UDMA_SDIO_ID_OFFSET      + (id))
#define ARCHI_UDMA_I2S_ID(id)       (ARCHI_UDMA_I2S_ID_OFFSET       + (id))
#define ARCHI_UDMA_CAM_ID(id)       (ARCHI_UDMA_CAM_ID_OFFSET       + (id))
#define ARCHI_UDMA_CSI2_ID(id)      (ARCHI_UDMA_CSI2_ID_OFFSET      + (id))
#define ARCHI_UDMA_MRAM_ID(id)      (ARCHI_UDMA_MRAM_ID_OFFSET      + (id))
#define ARCHI_UDMA_FILTER_ID(id)    (ARCHI_UDMA_FILTER_ID_OFFSET    + (id))

#define ARCHI_NB_PERIPH             (	ARCHI_UDMA_NB_SPIM \
									 +	ARCHI_UDMA_NB_HYPER \
									 +	ARCHI_UDMA_NB_SDIO \
									 +	ARCHI_UDMA_NB_UART \
									 +	ARCHI_UDMA_NB_I2C \
									 +	ARCHI_UDMA_NB_I2S \
									 +  ARCHI_UDMA_NB_JTAG_FIFO \
									 +  ARCHI_UDMA_NB_MRAM \
									 +  ARCHI_UDMA_NB_CAM \
									 +  ARCHI_UDMA_NB_CSI2 \
									 +  ARCHI_UDMA_NB_FILTER \
									)


/*
 * FLLS
*/

#define ARCHI_NB_FLL  3



/*
 * SOC EVENTS GENERATOR 
 */
#define ARCHI_SOC_EVENT_PERIPH_EVT_NB 		160

#define ARCHI_SOC_EVENT_NB_TOTAL     256

#define ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT_LOG2 2
#define ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT (1<<ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT_LOG2)
#define ARCHI_SOC_EVENT_UDMA_FIRST_EVT   	0
#define ARCHI_SOC_EVENT_UDMA_NB_EVT      	(ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT * ARCHI_NB_PERIPH)
#define ARCHI_SOC_EVENT_UDMA_NB_TGEN_EVT 	6


#define ARCHI_SOC_EVENT_PERIPH_FIRST_EVT(x)     ((x)*ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT)

#define ARCHI_UDMA_HYPER_RX_EVT           0
#define ARCHI_UDMA_HYPER_TX_EVT           1

#define ARCHI_SOC_EVENT_SPIM_CMD_OFFSET 	(2 + ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT * ARCHI_UDMA_SPIM_ID_OFFSET)
#define ARCHI_SOC_EVENT_SPIM_CMD(id) 		(ARCHI_SOC_EVENT_SPIM_CMD_OFFSET + ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT * id)
// old style
#define ARCHI_SOC_EVENT_SPIM0_CMD    		2
#define ARCHI_SOC_EVENT_SPIM1_CMD    		(2 + ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT)
#define ARCHI_SOC_EVENT_SPIM2_CMD    		(2 + ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT * 2)
#define ARCHI_SOC_EVENT_SPIM3_CMD    		(2 + ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT * 3) 
/////////////////////////////////////////////////

#define ARCHI_SOC_EVENT_SPIM_EOT_OFFSET 	3
#define ARCHI_SOC_EVENT_SPIM_EOT(id) 		(ARCHI_SOC_EVENT_SPIM_EOT_OFFSET + ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT * (id))
// old style
#define ARCHI_SOC_EVENT_SPIM0_EOT    		3
#define ARCHI_SOC_EVENT_SPIM1_EOT    		(3 + ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT)
#define ARCHI_SOC_EVENT_SPIM2_EOT    		(3 + ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT * 2)
#define ARCHI_SOC_EVENT_SPIM3_EOT    		(3 + ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT * 3) 
/////////////////////////////////////////////////

#define ARCHI_SOC_EVENT_I2C_EXTRA_OFFSET   	(3 + ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT * ARCHI_UDMA_I2C_ID_OFFSET)
#define ARCHI_SOC_EVENT_I2C_EXTRA(id)   	(ARCHI_SOC_EVENT_I2C_EXTRA_OFFSET + ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT * id)
// old style
#define ARCHI_SOC_EVENT_I2C0_EXTRA   		(3 + ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT * ARCHI_UDMA_I2C_ID_OFFSET)
#define ARCHI_SOC_EVENT_I2C1_EXTRA   		(3 + ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT * ARCHI_UDMA_I2C_ID_OFFSET + ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT)
/////////////////////////////////////////////////

#define ARCHI_SOC_EVENT_MRAM_ERASE			(2 + ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT * ARCHI_UDMA_MRAM_ID_OFFSET)
#define ARCHI_SOC_EVENT_MRAM_EOTX   		(3 + ARCHI_SOC_EVENT_UDMA_NB_CHANNEL_EVT * ARCHI_UDMA_MRAM_ID_OFFSET)    

#define ARCHI_SOC_EVENT_CLUSTER_ON_OFF   	128  	// cluster pok
#define ARCHI_SOC_EVENT_CLUSTER_NOT_BUSY 	131  	
#define ARCHI_SOC_EVENT_CLUSTER_CG_OK    	132
#define ARCHI_SOC_EVENT_PICL_OK          	133
#define ARCHI_SOC_EVENT_SCU_OK           	134
// #define ARCHI_SOC_EVENT_PMU_FIRST_EVENT  ARCHI_SOC_EVENT_CLUSTER_ON_OFF
// #define ARCHI_SOC_EVENT_PMU_NB_EVENTS    7

#define ARCHI_SOC_EVENT_ADV_TIMER_0 	 	135 			
#define ARCHI_SOC_EVENT_ADV_TIMER_1   		136 		
#define ARCHI_SOC_EVENT_ADV_TIMER_2   		137 		
#define ARCHI_SOC_EVENT_ADV_TIMER_3 		138 		

#define ARCHI_SOC_EVENT_GPIO        	 	139

#define ARCHI_SOC_EVENT_RTC           		141 	

#define ARCHI_UDMA_SPIM_RX_EVT  0
#define ARCHI_UDMA_SPIM_TX_EVT  1
#define ARCHI_UDMA_SPIM_CMD_EVT 2
#define ARCHI_UDMA_SPIM_EOT_EVT 3



/*
 * FC EVENTS
 */

#define ARCHI_FC_EVT_FIRST_SW         0
#define ARCHI_FC_EVT_NB_SW            8

#define ARCHI_FC_EVT_DMA_EVT          8
#define ARCHI_FC_EVT_DMA_IRQ          9

#define ARCHI_FC_EVT_TIMER0_LO        10
#define ARCHI_FC_EVT_TIMER0_HI        11
#define ARCHI_FC_EVT_TIMER1_LO        12
#define ARCHI_FC_EVT_TIMER1_HI        13
#define ARCHI_FC_EVT_CLK_REF          14
#define ARCHI_FC_EVT_GPIO             15
#define ARCHI_FC_EVT_RTC              16
#define ARCHI_FC_EVT_ADV_TIMER0       17
#define ARCHI_FC_EVT_ADV_TIMER1       18
#define ARCHI_FC_EVT_ADV_TIMER2       19
#define ARCHI_FC_EVT_ADV_TIMER3       20
#define ARCHI_FC_EVT_CLUSTER_NOT_BUSY 21

// #define ARCHI_FC_EVT_CLUSTER_POK      22
// #define ARCHI_FC_EVT_CLUSTER_CG_OK    23
#define ARCHI_FC_EVT_PICL_OK          24
#define ARCHI_FC_EVT_SCU_OK           25
#define ARCHI_FC_EVT_SOC_EVT          26
#define ARCHI_FC_EVT_QUIDDIKEY_IRQ	  27
#define ARCHI_FC_EVT_MPU_ERROR   	  28
#define ARCHI_FC_EVT_QUEUE_ERROR      29
#define ARCHI_FC_EVT_HP0		      30
#define ARCHI_FC_EVT_HP1      		  31



/*
 * CLUSTER EVENTS
 */

#define ARCHI_CL_EVT_FIRST_SW   0
#define ARCHI_CL_EVT_NB_SW      8

#define ARCHI_CL_EVT_DMA0       8
#define ARCHI_CL_EVT_DMA1       9
#define ARCHI_CL_EVT_TIMER0_LO  10
#define ARCHI_CL_EVT_TIMER0_HI  11
#define ARCHI_CL_EVT_ACC0       12
#define ARCHI_CL_EVT_ACC1       13
#define ARCHI_CL_EVT_ACC2       14
#define ARCHI_CL_EVT_ACC3       15
#define ARCHI_CL_EVT_BAR        16
#define ARCHI_CL_EVT_MUTEX      17
#define ARCHI_CL_EVT_DISPATCH   18
#define ARCHI_CL_EVT_CLUSTER0  	22
#define ARCHI_CL_EVT_CLUSTER1  	23
#define ARCHI_CL_EVT_SOC_EVT    27


#endif
