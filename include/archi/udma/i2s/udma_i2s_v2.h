
/* THIS FILE HAS BEEN GENERATED, DO NOT MODIFY IT.
 */

/*
 * Copyright (C) 2018 ETH Zurich and University of Bologna
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

#ifndef __ARCHI_UDMA_I2S_UDMA_I2S_V2_H__
#define __ARCHI_UDMA_I2S_UDMA_I2S_V2_H__

#ifndef LANGUAGE_ASSEMBLY

#include <stdint.h>
#include "archi/utils.h"

#endif




//
// REGISTERS
//

// Clock configuration for both master, slave and pdm
#define UDMA_I2S_CLKCFG_SETUP_OFFSET             0x20

// Configuration of I2S slave
#define UDMA_I2S_SLAVE_SETUP_OFFSET              0x24

// Configuration of I2S master
#define UDMA_I2S_MASTER_SETUP_OFFSET             0x28

// Configuration of PDM module
#define UDMA_I2S_PDM_SETUP_OFFSET                0x2c



//
// REGISTERS FIELDS
//

// LSB of master clock divider. (access: R/W)
#define UDMA_I2S_CLKCFG_SETUP_MASTER_CLK_DIV_BIT                     0
#define UDMA_I2S_CLKCFG_SETUP_MASTER_CLK_DIV_WIDTH                   8
#define UDMA_I2S_CLKCFG_SETUP_MASTER_CLK_DIV_MASK                    0xff
#define UDMA_I2S_CLKCFG_SETUP_MASTER_CLK_DIV_RESET                   0x0

// LSB of slave clock divider. (access: R/W)
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_CLK_DIV_BIT                      8
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_CLK_DIV_WIDTH                    16
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_CLK_DIV_MASK                     0xffff00
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_CLK_DIV_RESET                    0x0

// MSBs of both master and slave clock divider. (access: R/W)
#define UDMA_I2S_CLKCFG_SETUP_COMMON_CLK_DIV_BIT                     16
#define UDMA_I2S_CLKCFG_SETUP_COMMON_CLK_DIV_WIDTH                   8
#define UDMA_I2S_CLKCFG_SETUP_COMMON_CLK_DIV_MASK                    0xff0000
#define UDMA_I2S_CLKCFG_SETUP_COMMON_CLK_DIV_RESET                   0x0

// Enables Slave clock (access: R/W)
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_CLK_EN_BIT                       24
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_CLK_EN_WIDTH                     1
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_CLK_EN_MASK                      0x1000000
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_CLK_EN_RESET                     0x0

// Enables Master clock (access: R/W)
#define UDMA_I2S_CLKCFG_SETUP_MASTER_CLK_EN_BIT                      25
#define UDMA_I2S_CLKCFG_SETUP_MASTER_CLK_EN_WIDTH                    1
#define UDMA_I2S_CLKCFG_SETUP_MASTER_CLK_EN_MASK                     0x2000000
#define UDMA_I2S_CLKCFG_SETUP_MASTER_CLK_EN_RESET                    0x0

// When enabled slave output clock is taken from PDM module (access: R/W)
#define UDMA_I2S_CLKCFG_SETUP_PDM_CLK_EN_BIT                         26
#define UDMA_I2S_CLKCFG_SETUP_PDM_CLK_EN_WIDTH                       1
#define UDMA_I2S_CLKCFG_SETUP_PDM_CLK_EN_MASK                        0x4000000
#define UDMA_I2S_CLKCFG_SETUP_PDM_CLK_EN_RESET                       0x0

// When set uses external clock for slave (access: R/W)
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_EXT_BIT                          28
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_EXT_WIDTH                        1
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_EXT_MASK                         0x10000000
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_EXT_RESET                        0x0

// Selects slave clock source(either ext or generated): 1’b0:selects master; 1’b1:selects slave (access: R/W)
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_NUM_BIT                          29
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_NUM_WIDTH                        1
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_NUM_MASK                         0x20000000
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_NUM_RESET                        0x0

// When set uses external clock for master (access: R/W)
#define UDMA_I2S_CLKCFG_SETUP_MASTER_EXT_BIT                         30
#define UDMA_I2S_CLKCFG_SETUP_MASTER_EXT_WIDTH                       1
#define UDMA_I2S_CLKCFG_SETUP_MASTER_EXT_MASK                        0x40000000
#define UDMA_I2S_CLKCFG_SETUP_MASTER_EXT_RESET                       0x0

// Selects master clock source(either ext or generated): 1’b0:selects master; 1’b1:selects slave (access: R/W)
#define UDMA_I2S_CLKCFG_SETUP_MASTER_NUM_BIT                         31
#define UDMA_I2S_CLKCFG_SETUP_MASTER_NUM_WIDTH                       1
#define UDMA_I2S_CLKCFG_SETUP_MASTER_NUM_MASK                        0x80000000
#define UDMA_I2S_CLKCFG_SETUP_MASTER_NUM_RESET                       0x0

// Sets how many words for each I2S phase (access: R/W)
#define UDMA_I2S_SLAVE_SETUP_WORDS_BIT                               0
#define UDMA_I2S_SLAVE_SETUP_WORDS_WIDTH                             3
#define UDMA_I2S_SLAVE_SETUP_WORDS_MASK                              0x7
#define UDMA_I2S_SLAVE_SETUP_WORDS_RESET                             0x0

// Sets how many bits per word (access: R/W)
#define UDMA_I2S_SLAVE_SETUP_BITS_BIT                                8
#define UDMA_I2S_SLAVE_SETUP_BITS_WIDTH                              5
#define UDMA_I2S_SLAVE_SETUP_BITS_MASK                               0x1f00
#define UDMA_I2S_SLAVE_SETUP_BITS_RESET                              0x0

// Enables LSB shifting (access: R/W)
#define UDMA_I2S_SLAVE_SETUP_LSB_BIT                                 16
#define UDMA_I2S_SLAVE_SETUP_LSB_WIDTH                               1
#define UDMA_I2S_SLAVE_SETUP_LSB_MASK                                0x10000
#define UDMA_I2S_SLAVE_SETUP_LSB_RESET                               0x0

// Enables both channels (access: R/W)
#define UDMA_I2S_SLAVE_SETUP_TWO_CHANNELS_BIT                        17
#define UDMA_I2S_SLAVE_SETUP_TWO_CHANNELS_WIDTH                      1
#define UDMA_I2S_SLAVE_SETUP_TWO_CHANNELS_MASK                       0x20000
#define UDMA_I2S_SLAVE_SETUP_TWO_CHANNELS_RESET                      0x0

// Enables the slave (access: R/W)
#define UDMA_I2S_SLAVE_SETUP_EN_BIT                                  31
#define UDMA_I2S_SLAVE_SETUP_EN_WIDTH                                1
#define UDMA_I2S_SLAVE_SETUP_EN_MASK                                 0x80000000
#define UDMA_I2S_SLAVE_SETUP_EN_RESET                                0x0

// Sets how many words for each I2S phase (access: R/W)
#define UDMA_I2S_MASTER_SETUP_WORDS_BIT                              0
#define UDMA_I2S_MASTER_SETUP_WORDS_WIDTH                            3
#define UDMA_I2S_MASTER_SETUP_WORDS_MASK                             0x7
#define UDMA_I2S_MASTER_SETUP_WORDS_RESET                            0x0

// Sets how many bits per word (access: R/W)
#define UDMA_I2S_MASTER_SETUP_BITS_BIT                               8
#define UDMA_I2S_MASTER_SETUP_BITS_WIDTH                             5
#define UDMA_I2S_MASTER_SETUP_BITS_MASK                              0x1f00
#define UDMA_I2S_MASTER_SETUP_BITS_RESET                             0x0

// Enables LSB shifting (access: R/W)
#define UDMA_I2S_MASTER_SETUP_LSB_BIT                                16
#define UDMA_I2S_MASTER_SETUP_LSB_WIDTH                              1
#define UDMA_I2S_MASTER_SETUP_LSB_MASK                               0x10000
#define UDMA_I2S_MASTER_SETUP_LSB_RESET                              0x0

// Enables both channels (access: R/W)
#define UDMA_I2S_MASTER_SETUP_TWO_CHANNELS_BIT                       17
#define UDMA_I2S_MASTER_SETUP_TWO_CHANNELS_WIDTH                     1
#define UDMA_I2S_MASTER_SETUP_TWO_CHANNELS_MASK                      0x20000
#define UDMA_I2S_MASTER_SETUP_TWO_CHANNELS_RESET                     0x0

// Enables the master (access: R/W)
#define UDMA_I2S_MASTER_SETUP_EN_BIT                                 31
#define UDMA_I2S_MASTER_SETUP_EN_WIDTH                               1
#define UDMA_I2S_MASTER_SETUP_EN_MASK                                0x80000000
#define UDMA_I2S_MASTER_SETUP_EN_RESET                               0x0

// Shifts the output of the filter (access: R/W)
#define UDMA_I2S_PDM_SETUP_WORDS_BIT                                 0
#define UDMA_I2S_PDM_SETUP_WORDS_WIDTH                               3
#define UDMA_I2S_PDM_SETUP_WORDS_MASK                                0x7
#define UDMA_I2S_PDM_SETUP_WORDS_RESET                               0x0

// Sets the decimation ratio of the filter (access: R/W)
#define UDMA_I2S_PDM_SETUP_DECIMATION_BIT                            3
#define UDMA_I2S_PDM_SETUP_DECIMATION_WIDTH                          10
#define UDMA_I2S_PDM_SETUP_DECIMATION_MASK                           0x1ff8
#define UDMA_I2S_PDM_SETUP_DECIMATION_RESET                          0x0

//  (access: R/W)
#define UDMA_I2S_PDM_SETUP_MODE_BIT                                  13
#define UDMA_I2S_PDM_SETUP_MODE_WIDTH                                2
#define UDMA_I2S_PDM_SETUP_MODE_MASK                                 0x6000
#define UDMA_I2S_PDM_SETUP_MODE_RESET                                0x0

//  (access: R/W)
#define UDMA_I2S_PDM_SETUP_EN_BIT                                    31
#define UDMA_I2S_PDM_SETUP_EN_WIDTH                                  1
#define UDMA_I2S_PDM_SETUP_EN_MASK                                   0x80000000
#define UDMA_I2S_PDM_SETUP_EN_RESET                                  0x0



//
// REGISTERS STRUCTS
//

#ifndef LANGUAGE_ASSEMBLY

typedef union {
  struct {
    unsigned int master_clk_div  :8 ; // LSB of master clock divider.
    unsigned int slave_clk_div   :16; // LSB of slave clock divider.
    unsigned int common_clk_div  :8 ; // MSBs of both master and slave clock divider.
    unsigned int slave_clk_en    :1 ; // Enables Slave clock
    unsigned int master_clk_en   :1 ; // Enables Master clock
    unsigned int pdm_clk_en      :1 ; // When enabled slave output clock is taken from PDM module
    unsigned int slave_ext       :1 ; // When set uses external clock for slave
    unsigned int slave_num       :1 ; // Selects slave clock source(either ext or generated): 1’b0:selects master; 1’b1:selects slave
    unsigned int master_ext      :1 ; // When set uses external clock for master
    unsigned int master_num      :1 ; // Selects master clock source(either ext or generated): 1’b0:selects master; 1’b1:selects slave
  };
  unsigned int raw;
} __attribute__((packed)) udma_i2s_clkcfg_setup_t;

typedef union {
  struct {
    unsigned int words           :3 ; // Sets how many words for each I2S phase
    unsigned int bits            :5 ; // Sets how many bits per word
    unsigned int lsb             :1 ; // Enables LSB shifting
    unsigned int two_channels    :1 ; // Enables both channels
    unsigned int en              :1 ; // Enables the slave
  };
  unsigned int raw;
} __attribute__((packed)) udma_i2s_slave_setup_t;

typedef union {
  struct {
    unsigned int words           :3 ; // Sets how many words for each I2S phase
    unsigned int bits            :5 ; // Sets how many bits per word
    unsigned int lsb             :1 ; // Enables LSB shifting
    unsigned int two_channels    :1 ; // Enables both channels
    unsigned int en              :1 ; // Enables the master
  };
  unsigned int raw;
} __attribute__((packed)) udma_i2s_master_setup_t;

typedef union {
  struct {
    unsigned int words           :3 ; // Shifts the output of the filter
    unsigned int decimation      :10; // Sets the decimation ratio of the filter
    unsigned int mode            :2 ; // 
    unsigned int en              :1 ; // 
  };
  unsigned int raw;
} __attribute__((packed)) udma_i2s_pdm_setup_t;

#endif



//
// REGISTERS GLOBAL STRUCT
//

#ifndef LANGUAGE_ASSEMBLY

typedef struct {
  unsigned int clkcfg_setup    ; // Clock configuration for both master, slave and pdm
  unsigned int slave_setup     ; // Configuration of I2S slave
  unsigned int master_setup    ; // Configuration of I2S master
  unsigned int pdm_setup       ; // Configuration of PDM module
} __attribute__((packed)) udma_i2s_None_t;

#endif



//
// REGISTERS ACCESS FUNCTIONS
//

#ifndef LANGUAGE_ASSEMBLY

static inline uint32_t udma_i2s_clkcfg_setup_get(uint32_t base) { return ARCHI_READ(base, UDMA_I2S_CLKCFG_SETUP_OFFSET); }
static inline void udma_i2s_clkcfg_setup_set(uint32_t base, uint32_t value) { ARCHI_WRITE(base, UDMA_I2S_CLKCFG_SETUP_OFFSET, value); }

static inline uint32_t udma_i2s_slave_setup_get(uint32_t base) { return ARCHI_READ(base, UDMA_I2S_SLAVE_SETUP_OFFSET); }
static inline void udma_i2s_slave_setup_set(uint32_t base, uint32_t value) { ARCHI_WRITE(base, UDMA_I2S_SLAVE_SETUP_OFFSET, value); }

static inline uint32_t udma_i2s_master_setup_get(uint32_t base) { return ARCHI_READ(base, UDMA_I2S_MASTER_SETUP_OFFSET); }
static inline void udma_i2s_master_setup_set(uint32_t base, uint32_t value) { ARCHI_WRITE(base, UDMA_I2S_MASTER_SETUP_OFFSET, value); }

static inline uint32_t udma_i2s_pdm_setup_get(uint32_t base) { return ARCHI_READ(base, UDMA_I2S_PDM_SETUP_OFFSET); }
static inline void udma_i2s_pdm_setup_set(uint32_t base, uint32_t value) { ARCHI_WRITE(base, UDMA_I2S_PDM_SETUP_OFFSET, value); }

#endif



//
// REGISTERS FIELDS MACROS
//

#ifndef LANGUAGE_ASSEMBLY

#define UDMA_I2S_CLKCFG_SETUP_MASTER_CLK_DIV_GET(value)    (ARCHI_BEXTRACTU((value),8,0))
#define UDMA_I2S_CLKCFG_SETUP_MASTER_CLK_DIV_GETS(value)   (ARCHI_BEXTRACT((value),8,0))
#define UDMA_I2S_CLKCFG_SETUP_MASTER_CLK_DIV_SET(value,field) (ARCHI_BINSERT((value),(field),8,0))
#define UDMA_I2S_CLKCFG_SETUP_MASTER_CLK_DIV(val)          ((val) << 0)

#define UDMA_I2S_CLKCFG_SETUP_SLAVE_CLK_DIV_GET(value)     (ARCHI_BEXTRACTU((value),16,8))
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_CLK_DIV_GETS(value)    (ARCHI_BEXTRACT((value),16,8))
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_CLK_DIV_SET(value,field) (ARCHI_BINSERT((value),(field),16,8))
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_CLK_DIV(val)           ((val) << 8)

#define UDMA_I2S_CLKCFG_SETUP_COMMON_CLK_DIV_GET(value)    (ARCHI_BEXTRACTU((value),8,16))
#define UDMA_I2S_CLKCFG_SETUP_COMMON_CLK_DIV_GETS(value)   (ARCHI_BEXTRACT((value),8,16))
#define UDMA_I2S_CLKCFG_SETUP_COMMON_CLK_DIV_SET(value,field) (ARCHI_BINSERT((value),(field),8,16))
#define UDMA_I2S_CLKCFG_SETUP_COMMON_CLK_DIV(val)          ((val) << 16)

#define UDMA_I2S_CLKCFG_SETUP_SLAVE_CLK_EN_GET(value)      (ARCHI_BEXTRACTU((value),1,24))
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_CLK_EN_GETS(value)     (ARCHI_BEXTRACT((value),1,24))
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_CLK_EN_SET(value,field) (ARCHI_BINSERT((value),(field),1,24))
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_CLK_EN(val)            ((val) << 24)

#define UDMA_I2S_CLKCFG_SETUP_MASTER_CLK_EN_GET(value)     (ARCHI_BEXTRACTU((value),1,25))
#define UDMA_I2S_CLKCFG_SETUP_MASTER_CLK_EN_GETS(value)    (ARCHI_BEXTRACT((value),1,25))
#define UDMA_I2S_CLKCFG_SETUP_MASTER_CLK_EN_SET(value,field) (ARCHI_BINSERT((value),(field),1,25))
#define UDMA_I2S_CLKCFG_SETUP_MASTER_CLK_EN(val)           ((val) << 25)

#define UDMA_I2S_CLKCFG_SETUP_PDM_CLK_EN_GET(value)        (ARCHI_BEXTRACTU((value),1,26))
#define UDMA_I2S_CLKCFG_SETUP_PDM_CLK_EN_GETS(value)       (ARCHI_BEXTRACT((value),1,26))
#define UDMA_I2S_CLKCFG_SETUP_PDM_CLK_EN_SET(value,field)  (ARCHI_BINSERT((value),(field),1,26))
#define UDMA_I2S_CLKCFG_SETUP_PDM_CLK_EN(val)              ((val) << 26)

#define UDMA_I2S_CLKCFG_SETUP_SLAVE_EXT_GET(value)         (ARCHI_BEXTRACTU((value),1,28))
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_EXT_GETS(value)        (ARCHI_BEXTRACT((value),1,28))
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_EXT_SET(value,field)   (ARCHI_BINSERT((value),(field),1,28))
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_EXT(val)               ((val) << 28)

#define UDMA_I2S_CLKCFG_SETUP_SLAVE_NUM_GET(value)         (ARCHI_BEXTRACTU((value),1,29))
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_NUM_GETS(value)        (ARCHI_BEXTRACT((value),1,29))
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_NUM_SET(value,field)   (ARCHI_BINSERT((value),(field),1,29))
#define UDMA_I2S_CLKCFG_SETUP_SLAVE_NUM(val)               ((val) << 29)

#define UDMA_I2S_CLKCFG_SETUP_MASTER_EXT_GET(value)        (ARCHI_BEXTRACTU((value),1,30))
#define UDMA_I2S_CLKCFG_SETUP_MASTER_EXT_GETS(value)       (ARCHI_BEXTRACT((value),1,30))
#define UDMA_I2S_CLKCFG_SETUP_MASTER_EXT_SET(value,field)  (ARCHI_BINSERT((value),(field),1,30))
#define UDMA_I2S_CLKCFG_SETUP_MASTER_EXT(val)              ((val) << 30)

#define UDMA_I2S_CLKCFG_SETUP_MASTER_NUM_GET(value)        (ARCHI_BEXTRACTU((value),1,31))
#define UDMA_I2S_CLKCFG_SETUP_MASTER_NUM_GETS(value)       (ARCHI_BEXTRACT((value),1,31))
#define UDMA_I2S_CLKCFG_SETUP_MASTER_NUM_SET(value,field)  (ARCHI_BINSERT((value),(field),1,31))
#define UDMA_I2S_CLKCFG_SETUP_MASTER_NUM(val)              ((val) << 31)

#define UDMA_I2S_SLAVE_SETUP_WORDS_GET(value)              (ARCHI_BEXTRACTU((value),3,0))
#define UDMA_I2S_SLAVE_SETUP_WORDS_GETS(value)             (ARCHI_BEXTRACT((value),3,0))
#define UDMA_I2S_SLAVE_SETUP_WORDS_SET(value,field)        (ARCHI_BINSERT((value),(field),3,0))
#define UDMA_I2S_SLAVE_SETUP_WORDS(val)                    ((val) << 0)

#define UDMA_I2S_SLAVE_SETUP_BITS_GET(value)               (ARCHI_BEXTRACTU((value),5,8))
#define UDMA_I2S_SLAVE_SETUP_BITS_GETS(value)              (ARCHI_BEXTRACT((value),5,8))
#define UDMA_I2S_SLAVE_SETUP_BITS_SET(value,field)         (ARCHI_BINSERT((value),(field),5,8))
#define UDMA_I2S_SLAVE_SETUP_BITS(val)                     ((val) << 8)

#define UDMA_I2S_SLAVE_SETUP_LSB_GET(value)                (ARCHI_BEXTRACTU((value),1,16))
#define UDMA_I2S_SLAVE_SETUP_LSB_GETS(value)               (ARCHI_BEXTRACT((value),1,16))
#define UDMA_I2S_SLAVE_SETUP_LSB_SET(value,field)          (ARCHI_BINSERT((value),(field),1,16))
#define UDMA_I2S_SLAVE_SETUP_LSB(val)                      ((val) << 16)

#define UDMA_I2S_SLAVE_SETUP_TWO_CHANNELS_GET(value)       (ARCHI_BEXTRACTU((value),1,17))
#define UDMA_I2S_SLAVE_SETUP_TWO_CHANNELS_GETS(value)      (ARCHI_BEXTRACT((value),1,17))
#define UDMA_I2S_SLAVE_SETUP_TWO_CHANNELS_SET(value,field) (ARCHI_BINSERT((value),(field),1,17))
#define UDMA_I2S_SLAVE_SETUP_TWO_CHANNELS(val)             ((val) << 17)

#define UDMA_I2S_SLAVE_SETUP_EN_GET(value)                 (ARCHI_BEXTRACTU((value),1,31))
#define UDMA_I2S_SLAVE_SETUP_EN_GETS(value)                (ARCHI_BEXTRACT((value),1,31))
#define UDMA_I2S_SLAVE_SETUP_EN_SET(value,field)           (ARCHI_BINSERT((value),(field),1,31))
#define UDMA_I2S_SLAVE_SETUP_EN(val)                       ((val) << 31)

#define UDMA_I2S_MASTER_SETUP_WORDS_GET(value)             (ARCHI_BEXTRACTU((value),3,0))
#define UDMA_I2S_MASTER_SETUP_WORDS_GETS(value)            (ARCHI_BEXTRACT((value),3,0))
#define UDMA_I2S_MASTER_SETUP_WORDS_SET(value,field)       (ARCHI_BINSERT((value),(field),3,0))
#define UDMA_I2S_MASTER_SETUP_WORDS(val)                   ((val) << 0)

#define UDMA_I2S_MASTER_SETUP_BITS_GET(value)              (ARCHI_BEXTRACTU((value),5,8))
#define UDMA_I2S_MASTER_SETUP_BITS_GETS(value)             (ARCHI_BEXTRACT((value),5,8))
#define UDMA_I2S_MASTER_SETUP_BITS_SET(value,field)        (ARCHI_BINSERT((value),(field),5,8))
#define UDMA_I2S_MASTER_SETUP_BITS(val)                    ((val) << 8)

#define UDMA_I2S_MASTER_SETUP_LSB_GET(value)               (ARCHI_BEXTRACTU((value),1,16))
#define UDMA_I2S_MASTER_SETUP_LSB_GETS(value)              (ARCHI_BEXTRACT((value),1,16))
#define UDMA_I2S_MASTER_SETUP_LSB_SET(value,field)         (ARCHI_BINSERT((value),(field),1,16))
#define UDMA_I2S_MASTER_SETUP_LSB(val)                     ((val) << 16)

#define UDMA_I2S_MASTER_SETUP_TWO_CHANNELS_GET(value)      (ARCHI_BEXTRACTU((value),1,17))
#define UDMA_I2S_MASTER_SETUP_TWO_CHANNELS_GETS(value)     (ARCHI_BEXTRACT((value),1,17))
#define UDMA_I2S_MASTER_SETUP_TWO_CHANNELS_SET(value,field) (ARCHI_BINSERT((value),(field),1,17))
#define UDMA_I2S_MASTER_SETUP_TWO_CHANNELS(val)            ((val) << 17)

#define UDMA_I2S_MASTER_SETUP_EN_GET(value)                (ARCHI_BEXTRACTU((value),1,31))
#define UDMA_I2S_MASTER_SETUP_EN_GETS(value)               (ARCHI_BEXTRACT((value),1,31))
#define UDMA_I2S_MASTER_SETUP_EN_SET(value,field)          (ARCHI_BINSERT((value),(field),1,31))
#define UDMA_I2S_MASTER_SETUP_EN(val)                      ((val) << 31)

#define UDMA_I2S_PDM_SETUP_WORDS_GET(value)                (ARCHI_BEXTRACTU((value),3,0))
#define UDMA_I2S_PDM_SETUP_WORDS_GETS(value)               (ARCHI_BEXTRACT((value),3,0))
#define UDMA_I2S_PDM_SETUP_WORDS_SET(value,field)          (ARCHI_BINSERT((value),(field),3,0))
#define UDMA_I2S_PDM_SETUP_WORDS(val)                      ((val) << 0)

#define UDMA_I2S_PDM_SETUP_DECIMATION_GET(value)           (ARCHI_BEXTRACTU((value),10,3))
#define UDMA_I2S_PDM_SETUP_DECIMATION_GETS(value)          (ARCHI_BEXTRACT((value),10,3))
#define UDMA_I2S_PDM_SETUP_DECIMATION_SET(value,field)     (ARCHI_BINSERT((value),(field),10,3))
#define UDMA_I2S_PDM_SETUP_DECIMATION(val)                 ((val) << 3)

#define UDMA_I2S_PDM_SETUP_MODE_GET(value)                 (ARCHI_BEXTRACTU((value),2,13))
#define UDMA_I2S_PDM_SETUP_MODE_GETS(value)                (ARCHI_BEXTRACT((value),2,13))
#define UDMA_I2S_PDM_SETUP_MODE_SET(value,field)           (ARCHI_BINSERT((value),(field),2,13))
#define UDMA_I2S_PDM_SETUP_MODE(val)                       ((val) << 13)

#define UDMA_I2S_PDM_SETUP_EN_GET(value)                   (ARCHI_BEXTRACTU((value),1,31))
#define UDMA_I2S_PDM_SETUP_EN_GETS(value)                  (ARCHI_BEXTRACT((value),1,31))
#define UDMA_I2S_PDM_SETUP_EN_SET(value,field)             (ARCHI_BINSERT((value),(field),1,31))
#define UDMA_I2S_PDM_SETUP_EN(val)                         ((val) << 31)

#endif

#endif