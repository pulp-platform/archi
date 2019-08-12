
/* THIS FILE HAS BEEN GENERATED, DO NOT MODIFY IT.
 */

/*
 * Copyright (C) 2018 ETH Zurich, University of Bologna
 * and GreenWaves Technologies
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

#ifndef __INCLUDE_ARCHI_UDMA_MEMCPY_UDMA_MEMCPY_V1_H__
#define __INCLUDE_ARCHI_UDMA_MEMCPY_UDMA_MEMCPY_V1_H__

#if !defined(LANGUAGE_ASSEMBLY) && !defined(__ASSEMBLER__)

#include <stdint.h>
#include "archi/utils.h"

#endif




//
// REGISTERS
//

// uDMA RX MEMCPY buffer base address configuration register.
#define UDMA_MEMCPY_RX_SADDR_OFFSET              0x0

// uDMA RX MEMCPY buffer size configuration register.
#define UDMA_MEMCPY_RX_SIZE_OFFSET               0x4

// uDMA RX MEMCPY stream configuration register.
#define UDMA_MEMCPY_RX_CFG_OFFSET                0x8

// uDMA TX MEMCPY buffer base address configuration register.
#define UDMA_MEMCPY_TX_SADDR_OFFSET              0x10

// uDMA TX MEMCPY buffer size configuration register.
#define UDMA_MEMCPY_TX_SIZE_OFFSET               0x14

// uDMA TX MEMCPY stream configuration register.
#define UDMA_MEMCPY_TX_CFG_OFFSET                0x18

// MEMCPY TX destination address configuration register.
#define UDMA_MEMCPY_DST_ADDR_OFFSET              0x20

// MEMCPY RX source address configuration register.
#define UDMA_MEMCPY_SRC_ADDR_OFFSET              0x24

// MEMCPY memory source/destination select configuration register.
#define UDMA_MEMCPY_MEM_SEL_OFFSET               0x28



//
// REGISTERS FIELDS
//

// RX buffer base address bitfield: - Read: returns value of the buffer pointer until transfer is finished. Else returns 0. - Write: sets RX buffer base address (access: R/W)
#define UDMA_MEMCPY_RX_SADDR_RX_SADDR_BIT                            0
#define UDMA_MEMCPY_RX_SADDR_RX_SADDR_WIDTH                          16
#define UDMA_MEMCPY_RX_SADDR_RX_SADDR_MASK                           0xffff

// RX buffer size bitfield in bytes. (128kBytes maximum) - Read: returns remaining buffer size to transfer. - Write: sets buffer size. (access: R/W)
#define UDMA_MEMCPY_RX_SIZE_RX_SIZE_BIT                              0
#define UDMA_MEMCPY_RX_SIZE_RX_SIZE_WIDTH                            17
#define UDMA_MEMCPY_RX_SIZE_RX_SIZE_MASK                             0x1ffff

// RX channel continuous mode bitfield: -1'b0: disabled -1'b1: enabled At the end of the buffer transfer, the uDMA reloads the address / buffer size and starts a new transfer. (access: R/W)
#define UDMA_MEMCPY_RX_CFG_CONTINOUS_BIT                             0
#define UDMA_MEMCPY_RX_CFG_CONTINOUS_WIDTH                           1
#define UDMA_MEMCPY_RX_CFG_CONTINOUS_MASK                            0x1

// RX channel enable and start transfer bitfield: -1'b0: disable -1'b1: start - enable and start the transfer This signal is used also to queue a transfer if one is already ongoing. (access: R/W)
#define UDMA_MEMCPY_RX_CFG_EN_BIT                                    4
#define UDMA_MEMCPY_RX_CFG_EN_WIDTH                                  1
#define UDMA_MEMCPY_RX_CFG_EN_MASK                                   0x10

// RX channel clear and stop transfer: -1'b0: disable -1'b1: stop and clear - stop and clear the on-going transfer (access: W)
#define UDMA_MEMCPY_RX_CFG_CLR_BIT                                   5
#define UDMA_MEMCPY_RX_CFG_CLR_WIDTH                                 1
#define UDMA_MEMCPY_RX_CFG_CLR_MASK                                  0x20

// RX transfer pending in queue status flag: -1'b0: no pending - no pending transfer in the queue -1'b1: pending - pending transfer in the queue (access: R)
#define UDMA_MEMCPY_RX_CFG_PENDING_BIT                               5
#define UDMA_MEMCPY_RX_CFG_PENDING_WIDTH                             1
#define UDMA_MEMCPY_RX_CFG_PENDING_MASK                              0x20

// TX buffer base address bitfield: - Read: returns value of the buffer pointer until transfer is finished. Else returns 0. - Write: sets buffer base address (access: R/W)
#define UDMA_MEMCPY_TX_SADDR_TX_SADDR_BIT                            0
#define UDMA_MEMCPY_TX_SADDR_TX_SADDR_WIDTH                          16
#define UDMA_MEMCPY_TX_SADDR_TX_SADDR_MASK                           0xffff

// TX buffer size bitfield in bytes. (128kBytes maximum) - Read: returns remaining buffer size to transfer. - Write: sets buffer size. (access: R/W)
#define UDMA_MEMCPY_TX_SIZE_TX_SIZE_BIT                              0
#define UDMA_MEMCPY_TX_SIZE_TX_SIZE_WIDTH                            17
#define UDMA_MEMCPY_TX_SIZE_TX_SIZE_MASK                             0x1ffff

// TX channel continuous mode bitfield: -1'b0: disabled -1'b1: enabled At the end of the buffer transfer, the uDMA reloads the address / buffer size and starts a new transfer. (access: R/W)
#define UDMA_MEMCPY_TX_CFG_CONTINOUS_BIT                             0
#define UDMA_MEMCPY_TX_CFG_CONTINOUS_WIDTH                           1
#define UDMA_MEMCPY_TX_CFG_CONTINOUS_MASK                            0x1

// TX channel enable and start transfer bitfield: -1'b0: disabled -1'b1: start - enable and start the transfer This signal is used also to queue a transfer if one is already ongoing. (access: R/W)
#define UDMA_MEMCPY_TX_CFG_EN_BIT                                    4
#define UDMA_MEMCPY_TX_CFG_EN_WIDTH                                  1
#define UDMA_MEMCPY_TX_CFG_EN_MASK                                   0x10

// TX channel clear and stop transfer bitfield: -1'b0: disabled -1'b1: stop and clear - stop and clear the on-going transfer (access: W)
#define UDMA_MEMCPY_TX_CFG_CLR_BIT                                   5
#define UDMA_MEMCPY_TX_CFG_CLR_WIDTH                                 1
#define UDMA_MEMCPY_TX_CFG_CLR_MASK                                  0x20

// TX transfer pending in queue status flag: -1'b0: no pending - no pending transfer in the queue -1'b1: pending - pending transfer in the queue (access: R)
#define UDMA_MEMCPY_TX_CFG_PENDING_BIT                               5
#define UDMA_MEMCPY_TX_CFG_PENDING_WIDTH                             1
#define UDMA_MEMCPY_TX_CFG_PENDING_MASK                              0x20

// TX destination start address configuration bitfield. MEMCPY TX transfer copy data from L2 TX_CFG.TX_SADDR address to FC_TCDM or L2 memories DST_ADDR address. (access: R/W)
#define UDMA_MEMCPY_DST_ADDR_DST_ADDR_BIT                            0
#define UDMA_MEMCPY_DST_ADDR_DST_ADDR_WIDTH                          17
#define UDMA_MEMCPY_DST_ADDR_DST_ADDR_MASK                           0x1ffff

// RX source start address configuration bitfield. MEMCPY RX transfer copy data from FC_TCDM or L2 memories SRC_ADDR address to L2 RX_CFG.RX_SADDR address. (access: R/W)
#define UDMA_MEMCPY_SRC_ADDR_SRC_ADDR_BIT                            0
#define UDMA_MEMCPY_SRC_ADDR_SRC_ADDR_WIDTH                          17
#define UDMA_MEMCPY_SRC_ADDR_SRC_ADDR_MASK                           0x1ffff

// Memory selection configuration bitfield: - 1'b0: L2 from/to FC_TCDM - 1'b1: L2 from/to L2 (access: R/W)
#define UDMA_MEMCPY_MEM_SEL_MEM_SEL_BIT                              0
#define UDMA_MEMCPY_MEM_SEL_MEM_SEL_WIDTH                            1
#define UDMA_MEMCPY_MEM_SEL_MEM_SEL_MASK                             0x1



//
// REGISTERS STRUCTS
//

#if !defined(LANGUAGE_ASSEMBLY) && !defined(__ASSEMBLER__)

typedef union {
  struct {
    unsigned int rx_saddr        :16; // RX buffer base address bitfield: - Read: returns value of the buffer pointer until transfer is finished. Else returns 0. - Write: sets RX buffer base address
  };
  unsigned int raw;
} __attribute__((packed)) udma_memcpy_rx_saddr_t;

typedef union {
  struct {
    unsigned int rx_size         :17; // RX buffer size bitfield in bytes. (128kBytes maximum) - Read: returns remaining buffer size to transfer. - Write: sets buffer size.
  };
  unsigned int raw;
} __attribute__((packed)) udma_memcpy_rx_size_t;

typedef union {
  struct {
    unsigned int continous       :1 ; // RX channel continuous mode bitfield: -1'b0: disabled -1'b1: enabled At the end of the buffer transfer, the uDMA reloads the address / buffer size and starts a new transfer.
    unsigned int padding0:3 ;
    unsigned int en              :1 ; // RX channel enable and start transfer bitfield: -1'b0: disable -1'b1: start - enable and start the transfer This signal is used also to queue a transfer if one is already ongoing.
    unsigned int clr             :1 ; // RX channel clear and stop transfer: -1'b0: disable -1'b1: stop and clear - stop and clear the on-going transfer
    unsigned int pending         :1 ; // RX transfer pending in queue status flag: -1'b0: no pending - no pending transfer in the queue -1'b1: pending - pending transfer in the queue
  };
  unsigned int raw;
} __attribute__((packed)) udma_memcpy_rx_cfg_t;

typedef union {
  struct {
    unsigned int tx_saddr        :16; // TX buffer base address bitfield: - Read: returns value of the buffer pointer until transfer is finished. Else returns 0. - Write: sets buffer base address
  };
  unsigned int raw;
} __attribute__((packed)) udma_memcpy_tx_saddr_t;

typedef union {
  struct {
    unsigned int tx_size         :17; // TX buffer size bitfield in bytes. (128kBytes maximum) - Read: returns remaining buffer size to transfer. - Write: sets buffer size.
  };
  unsigned int raw;
} __attribute__((packed)) udma_memcpy_tx_size_t;

typedef union {
  struct {
    unsigned int continous       :1 ; // TX channel continuous mode bitfield: -1'b0: disabled -1'b1: enabled At the end of the buffer transfer, the uDMA reloads the address / buffer size and starts a new transfer.
    unsigned int padding0:3 ;
    unsigned int en              :1 ; // TX channel enable and start transfer bitfield: -1'b0: disabled -1'b1: start - enable and start the transfer This signal is used also to queue a transfer if one is already ongoing.
    unsigned int clr             :1 ; // TX channel clear and stop transfer bitfield: -1'b0: disabled -1'b1: stop and clear - stop and clear the on-going transfer
    unsigned int pending         :1 ; // TX transfer pending in queue status flag: -1'b0: no pending - no pending transfer in the queue -1'b1: pending - pending transfer in the queue
  };
  unsigned int raw;
} __attribute__((packed)) udma_memcpy_tx_cfg_t;

typedef union {
  struct {
    unsigned int dst_addr        :17; // TX destination start address configuration bitfield. MEMCPY TX transfer copy data from L2 TX_CFG.TX_SADDR address to FC_TCDM or L2 memories DST_ADDR address.
  };
  unsigned int raw;
} __attribute__((packed)) udma_memcpy_dst_addr_t;

typedef union {
  struct {
    unsigned int src_addr        :17; // RX source start address configuration bitfield. MEMCPY RX transfer copy data from FC_TCDM or L2 memories SRC_ADDR address to L2 RX_CFG.RX_SADDR address.
  };
  unsigned int raw;
} __attribute__((packed)) udma_memcpy_src_addr_t;

typedef union {
  struct {
    unsigned int mem_sel         :1 ; // Memory selection configuration bitfield: - 1'b0: L2 from/to FC_TCDM - 1'b1: L2 from/to L2
  };
  unsigned int raw;
} __attribute__((packed)) udma_memcpy_mem_sel_t;

#endif



//
// REGISTERS STRUCTS
//

#ifdef __GVSOC__

class vp_udma_memcpy_rx_saddr : public vp::reg_32
{
public:
  inline void rx_saddr_set(uint32_t value) { this->set_field(value, UDMA_MEMCPY_RX_SADDR_RX_SADDR_BIT, UDMA_MEMCPY_RX_SADDR_RX_SADDR_WIDTH); }
  inline uint32_t rx_saddr_get() { return this->get_field(UDMA_MEMCPY_RX_SADDR_RX_SADDR_BIT, UDMA_MEMCPY_RX_SADDR_RX_SADDR_WIDTH); }
};

class vp_udma_memcpy_rx_size : public vp::reg_32
{
public:
  inline void rx_size_set(uint32_t value) { this->set_field(value, UDMA_MEMCPY_RX_SIZE_RX_SIZE_BIT, UDMA_MEMCPY_RX_SIZE_RX_SIZE_WIDTH); }
  inline uint32_t rx_size_get() { return this->get_field(UDMA_MEMCPY_RX_SIZE_RX_SIZE_BIT, UDMA_MEMCPY_RX_SIZE_RX_SIZE_WIDTH); }
};

class vp_udma_memcpy_rx_cfg : public vp::reg_32
{
public:
  inline void continous_set(uint32_t value) { this->set_field(value, UDMA_MEMCPY_RX_CFG_CONTINOUS_BIT, UDMA_MEMCPY_RX_CFG_CONTINOUS_WIDTH); }
  inline uint32_t continous_get() { return this->get_field(UDMA_MEMCPY_RX_CFG_CONTINOUS_BIT, UDMA_MEMCPY_RX_CFG_CONTINOUS_WIDTH); }
  inline void en_set(uint32_t value) { this->set_field(value, UDMA_MEMCPY_RX_CFG_EN_BIT, UDMA_MEMCPY_RX_CFG_EN_WIDTH); }
  inline uint32_t en_get() { return this->get_field(UDMA_MEMCPY_RX_CFG_EN_BIT, UDMA_MEMCPY_RX_CFG_EN_WIDTH); }
  inline void clr_set(uint32_t value) { this->set_field(value, UDMA_MEMCPY_RX_CFG_CLR_BIT, UDMA_MEMCPY_RX_CFG_CLR_WIDTH); }
  inline uint32_t clr_get() { return this->get_field(UDMA_MEMCPY_RX_CFG_CLR_BIT, UDMA_MEMCPY_RX_CFG_CLR_WIDTH); }
  inline void pending_set(uint32_t value) { this->set_field(value, UDMA_MEMCPY_RX_CFG_PENDING_BIT, UDMA_MEMCPY_RX_CFG_PENDING_WIDTH); }
  inline uint32_t pending_get() { return this->get_field(UDMA_MEMCPY_RX_CFG_PENDING_BIT, UDMA_MEMCPY_RX_CFG_PENDING_WIDTH); }
};

class vp_udma_memcpy_tx_saddr : public vp::reg_32
{
public:
  inline void tx_saddr_set(uint32_t value) { this->set_field(value, UDMA_MEMCPY_TX_SADDR_TX_SADDR_BIT, UDMA_MEMCPY_TX_SADDR_TX_SADDR_WIDTH); }
  inline uint32_t tx_saddr_get() { return this->get_field(UDMA_MEMCPY_TX_SADDR_TX_SADDR_BIT, UDMA_MEMCPY_TX_SADDR_TX_SADDR_WIDTH); }
};

class vp_udma_memcpy_tx_size : public vp::reg_32
{
public:
  inline void tx_size_set(uint32_t value) { this->set_field(value, UDMA_MEMCPY_TX_SIZE_TX_SIZE_BIT, UDMA_MEMCPY_TX_SIZE_TX_SIZE_WIDTH); }
  inline uint32_t tx_size_get() { return this->get_field(UDMA_MEMCPY_TX_SIZE_TX_SIZE_BIT, UDMA_MEMCPY_TX_SIZE_TX_SIZE_WIDTH); }
};

class vp_udma_memcpy_tx_cfg : public vp::reg_32
{
public:
  inline void continous_set(uint32_t value) { this->set_field(value, UDMA_MEMCPY_TX_CFG_CONTINOUS_BIT, UDMA_MEMCPY_TX_CFG_CONTINOUS_WIDTH); }
  inline uint32_t continous_get() { return this->get_field(UDMA_MEMCPY_TX_CFG_CONTINOUS_BIT, UDMA_MEMCPY_TX_CFG_CONTINOUS_WIDTH); }
  inline void en_set(uint32_t value) { this->set_field(value, UDMA_MEMCPY_TX_CFG_EN_BIT, UDMA_MEMCPY_TX_CFG_EN_WIDTH); }
  inline uint32_t en_get() { return this->get_field(UDMA_MEMCPY_TX_CFG_EN_BIT, UDMA_MEMCPY_TX_CFG_EN_WIDTH); }
  inline void clr_set(uint32_t value) { this->set_field(value, UDMA_MEMCPY_TX_CFG_CLR_BIT, UDMA_MEMCPY_TX_CFG_CLR_WIDTH); }
  inline uint32_t clr_get() { return this->get_field(UDMA_MEMCPY_TX_CFG_CLR_BIT, UDMA_MEMCPY_TX_CFG_CLR_WIDTH); }
  inline void pending_set(uint32_t value) { this->set_field(value, UDMA_MEMCPY_TX_CFG_PENDING_BIT, UDMA_MEMCPY_TX_CFG_PENDING_WIDTH); }
  inline uint32_t pending_get() { return this->get_field(UDMA_MEMCPY_TX_CFG_PENDING_BIT, UDMA_MEMCPY_TX_CFG_PENDING_WIDTH); }
};

class vp_udma_memcpy_dst_addr : public vp::reg_32
{
public:
  inline void dst_addr_set(uint32_t value) { this->set_field(value, UDMA_MEMCPY_DST_ADDR_DST_ADDR_BIT, UDMA_MEMCPY_DST_ADDR_DST_ADDR_WIDTH); }
  inline uint32_t dst_addr_get() { return this->get_field(UDMA_MEMCPY_DST_ADDR_DST_ADDR_BIT, UDMA_MEMCPY_DST_ADDR_DST_ADDR_WIDTH); }
};

class vp_udma_memcpy_src_addr : public vp::reg_32
{
public:
  inline void src_addr_set(uint32_t value) { this->set_field(value, UDMA_MEMCPY_SRC_ADDR_SRC_ADDR_BIT, UDMA_MEMCPY_SRC_ADDR_SRC_ADDR_WIDTH); }
  inline uint32_t src_addr_get() { return this->get_field(UDMA_MEMCPY_SRC_ADDR_SRC_ADDR_BIT, UDMA_MEMCPY_SRC_ADDR_SRC_ADDR_WIDTH); }
};

class vp_udma_memcpy_mem_sel : public vp::reg_32
{
public:
  inline void mem_sel_set(uint32_t value) { this->set_field(value, UDMA_MEMCPY_MEM_SEL_MEM_SEL_BIT, UDMA_MEMCPY_MEM_SEL_MEM_SEL_WIDTH); }
  inline uint32_t mem_sel_get() { return this->get_field(UDMA_MEMCPY_MEM_SEL_MEM_SEL_BIT, UDMA_MEMCPY_MEM_SEL_MEM_SEL_WIDTH); }
};

#endif



//
// REGISTERS GLOBAL STRUCT
//

#if !defined(LANGUAGE_ASSEMBLY) && !defined(__ASSEMBLER__)

typedef struct {
  unsigned int rx_saddr        ; // uDMA RX MEMCPY buffer base address configuration register.
  unsigned int rx_size         ; // uDMA RX MEMCPY buffer size configuration register.
  unsigned int rx_cfg          ; // uDMA RX MEMCPY stream configuration register.
  unsigned int tx_saddr        ; // uDMA TX MEMCPY buffer base address configuration register.
  unsigned int tx_size         ; // uDMA TX MEMCPY buffer size configuration register.
  unsigned int tx_cfg          ; // uDMA TX MEMCPY stream configuration register.
  unsigned int dst_addr        ; // MEMCPY TX destination address configuration register.
  unsigned int src_addr        ; // MEMCPY RX source address configuration register.
  unsigned int mem_sel         ; // MEMCPY memory source/destination select configuration register.
} __attribute__((packed)) udma_memcpy_udma_memcpy_t;

#endif



//
// REGISTERS ACCESS FUNCTIONS
//

#if !defined(LANGUAGE_ASSEMBLY) && !defined(__ASSEMBLER__)

static inline uint32_t udma_memcpy_rx_saddr_get(uint32_t base) { return ARCHI_READ(base, UDMA_MEMCPY_RX_SADDR_OFFSET); }
static inline void udma_memcpy_rx_saddr_set(uint32_t base, uint32_t value) { ARCHI_WRITE(base, UDMA_MEMCPY_RX_SADDR_OFFSET, value); }

static inline uint32_t udma_memcpy_rx_size_get(uint32_t base) { return ARCHI_READ(base, UDMA_MEMCPY_RX_SIZE_OFFSET); }
static inline void udma_memcpy_rx_size_set(uint32_t base, uint32_t value) { ARCHI_WRITE(base, UDMA_MEMCPY_RX_SIZE_OFFSET, value); }

static inline uint32_t udma_memcpy_rx_cfg_get(uint32_t base) { return ARCHI_READ(base, UDMA_MEMCPY_RX_CFG_OFFSET); }
static inline void udma_memcpy_rx_cfg_set(uint32_t base, uint32_t value) { ARCHI_WRITE(base, UDMA_MEMCPY_RX_CFG_OFFSET, value); }

static inline uint32_t udma_memcpy_tx_saddr_get(uint32_t base) { return ARCHI_READ(base, UDMA_MEMCPY_TX_SADDR_OFFSET); }
static inline void udma_memcpy_tx_saddr_set(uint32_t base, uint32_t value) { ARCHI_WRITE(base, UDMA_MEMCPY_TX_SADDR_OFFSET, value); }

static inline uint32_t udma_memcpy_tx_size_get(uint32_t base) { return ARCHI_READ(base, UDMA_MEMCPY_TX_SIZE_OFFSET); }
static inline void udma_memcpy_tx_size_set(uint32_t base, uint32_t value) { ARCHI_WRITE(base, UDMA_MEMCPY_TX_SIZE_OFFSET, value); }

static inline uint32_t udma_memcpy_tx_cfg_get(uint32_t base) { return ARCHI_READ(base, UDMA_MEMCPY_TX_CFG_OFFSET); }
static inline void udma_memcpy_tx_cfg_set(uint32_t base, uint32_t value) { ARCHI_WRITE(base, UDMA_MEMCPY_TX_CFG_OFFSET, value); }

static inline uint32_t udma_memcpy_dst_addr_get(uint32_t base) { return ARCHI_READ(base, UDMA_MEMCPY_DST_ADDR_OFFSET); }
static inline void udma_memcpy_dst_addr_set(uint32_t base, uint32_t value) { ARCHI_WRITE(base, UDMA_MEMCPY_DST_ADDR_OFFSET, value); }

static inline uint32_t udma_memcpy_src_addr_get(uint32_t base) { return ARCHI_READ(base, UDMA_MEMCPY_SRC_ADDR_OFFSET); }
static inline void udma_memcpy_src_addr_set(uint32_t base, uint32_t value) { ARCHI_WRITE(base, UDMA_MEMCPY_SRC_ADDR_OFFSET, value); }

static inline uint32_t udma_memcpy_mem_sel_get(uint32_t base) { return ARCHI_READ(base, UDMA_MEMCPY_MEM_SEL_OFFSET); }
static inline void udma_memcpy_mem_sel_set(uint32_t base, uint32_t value) { ARCHI_WRITE(base, UDMA_MEMCPY_MEM_SEL_OFFSET, value); }

#endif



//
// REGISTERS FIELDS MACROS
//

#if !defined(LANGUAGE_ASSEMBLY) && !defined(__ASSEMBLER__)

#define UDMA_MEMCPY_RX_SADDR_RX_SADDR_GET(value)           (ARCHI_BEXTRACTU((value),16,0))
#define UDMA_MEMCPY_RX_SADDR_RX_SADDR_GETS(value)          (ARCHI_BEXTRACT((value),16,0))
#define UDMA_MEMCPY_RX_SADDR_RX_SADDR_SET(value,field)     (ARCHI_BINSERT((value),(field),16,0))
#define UDMA_MEMCPY_RX_SADDR_RX_SADDR(val)                 ((val) << 0)

#define UDMA_MEMCPY_RX_SIZE_RX_SIZE_GET(value)             (ARCHI_BEXTRACTU((value),17,0))
#define UDMA_MEMCPY_RX_SIZE_RX_SIZE_GETS(value)            (ARCHI_BEXTRACT((value),17,0))
#define UDMA_MEMCPY_RX_SIZE_RX_SIZE_SET(value,field)       (ARCHI_BINSERT((value),(field),17,0))
#define UDMA_MEMCPY_RX_SIZE_RX_SIZE(val)                   ((val) << 0)

#define UDMA_MEMCPY_RX_CFG_CONTINOUS_GET(value)            (ARCHI_BEXTRACTU((value),1,0))
#define UDMA_MEMCPY_RX_CFG_CONTINOUS_GETS(value)           (ARCHI_BEXTRACT((value),1,0))
#define UDMA_MEMCPY_RX_CFG_CONTINOUS_SET(value,field)      (ARCHI_BINSERT((value),(field),1,0))
#define UDMA_MEMCPY_RX_CFG_CONTINOUS(val)                  ((val) << 0)

#define UDMA_MEMCPY_RX_CFG_EN_GET(value)                   (ARCHI_BEXTRACTU((value),1,4))
#define UDMA_MEMCPY_RX_CFG_EN_GETS(value)                  (ARCHI_BEXTRACT((value),1,4))
#define UDMA_MEMCPY_RX_CFG_EN_SET(value,field)             (ARCHI_BINSERT((value),(field),1,4))
#define UDMA_MEMCPY_RX_CFG_EN(val)                         ((val) << 4)

#define UDMA_MEMCPY_RX_CFG_CLR_GET(value)                  (ARCHI_BEXTRACTU((value),1,5))
#define UDMA_MEMCPY_RX_CFG_CLR_GETS(value)                 (ARCHI_BEXTRACT((value),1,5))
#define UDMA_MEMCPY_RX_CFG_CLR_SET(value,field)            (ARCHI_BINSERT((value),(field),1,5))
#define UDMA_MEMCPY_RX_CFG_CLR(val)                        ((val) << 5)

#define UDMA_MEMCPY_RX_CFG_PENDING_GET(value)              (ARCHI_BEXTRACTU((value),1,5))
#define UDMA_MEMCPY_RX_CFG_PENDING_GETS(value)             (ARCHI_BEXTRACT((value),1,5))
#define UDMA_MEMCPY_RX_CFG_PENDING_SET(value,field)        (ARCHI_BINSERT((value),(field),1,5))
#define UDMA_MEMCPY_RX_CFG_PENDING(val)                    ((val) << 5)

#define UDMA_MEMCPY_TX_SADDR_TX_SADDR_GET(value)           (ARCHI_BEXTRACTU((value),16,0))
#define UDMA_MEMCPY_TX_SADDR_TX_SADDR_GETS(value)          (ARCHI_BEXTRACT((value),16,0))
#define UDMA_MEMCPY_TX_SADDR_TX_SADDR_SET(value,field)     (ARCHI_BINSERT((value),(field),16,0))
#define UDMA_MEMCPY_TX_SADDR_TX_SADDR(val)                 ((val) << 0)

#define UDMA_MEMCPY_TX_SIZE_TX_SIZE_GET(value)             (ARCHI_BEXTRACTU((value),17,0))
#define UDMA_MEMCPY_TX_SIZE_TX_SIZE_GETS(value)            (ARCHI_BEXTRACT((value),17,0))
#define UDMA_MEMCPY_TX_SIZE_TX_SIZE_SET(value,field)       (ARCHI_BINSERT((value),(field),17,0))
#define UDMA_MEMCPY_TX_SIZE_TX_SIZE(val)                   ((val) << 0)

#define UDMA_MEMCPY_TX_CFG_CONTINOUS_GET(value)            (ARCHI_BEXTRACTU((value),1,0))
#define UDMA_MEMCPY_TX_CFG_CONTINOUS_GETS(value)           (ARCHI_BEXTRACT((value),1,0))
#define UDMA_MEMCPY_TX_CFG_CONTINOUS_SET(value,field)      (ARCHI_BINSERT((value),(field),1,0))
#define UDMA_MEMCPY_TX_CFG_CONTINOUS(val)                  ((val) << 0)

#define UDMA_MEMCPY_TX_CFG_EN_GET(value)                   (ARCHI_BEXTRACTU((value),1,4))
#define UDMA_MEMCPY_TX_CFG_EN_GETS(value)                  (ARCHI_BEXTRACT((value),1,4))
#define UDMA_MEMCPY_TX_CFG_EN_SET(value,field)             (ARCHI_BINSERT((value),(field),1,4))
#define UDMA_MEMCPY_TX_CFG_EN(val)                         ((val) << 4)

#define UDMA_MEMCPY_TX_CFG_CLR_GET(value)                  (ARCHI_BEXTRACTU((value),1,5))
#define UDMA_MEMCPY_TX_CFG_CLR_GETS(value)                 (ARCHI_BEXTRACT((value),1,5))
#define UDMA_MEMCPY_TX_CFG_CLR_SET(value,field)            (ARCHI_BINSERT((value),(field),1,5))
#define UDMA_MEMCPY_TX_CFG_CLR(val)                        ((val) << 5)

#define UDMA_MEMCPY_TX_CFG_PENDING_GET(value)              (ARCHI_BEXTRACTU((value),1,5))
#define UDMA_MEMCPY_TX_CFG_PENDING_GETS(value)             (ARCHI_BEXTRACT((value),1,5))
#define UDMA_MEMCPY_TX_CFG_PENDING_SET(value,field)        (ARCHI_BINSERT((value),(field),1,5))
#define UDMA_MEMCPY_TX_CFG_PENDING(val)                    ((val) << 5)

#define UDMA_MEMCPY_DST_ADDR_DST_ADDR_GET(value)           (ARCHI_BEXTRACTU((value),17,0))
#define UDMA_MEMCPY_DST_ADDR_DST_ADDR_GETS(value)          (ARCHI_BEXTRACT((value),17,0))
#define UDMA_MEMCPY_DST_ADDR_DST_ADDR_SET(value,field)     (ARCHI_BINSERT((value),(field),17,0))
#define UDMA_MEMCPY_DST_ADDR_DST_ADDR(val)                 ((val) << 0)

#define UDMA_MEMCPY_SRC_ADDR_SRC_ADDR_GET(value)           (ARCHI_BEXTRACTU((value),17,0))
#define UDMA_MEMCPY_SRC_ADDR_SRC_ADDR_GETS(value)          (ARCHI_BEXTRACT((value),17,0))
#define UDMA_MEMCPY_SRC_ADDR_SRC_ADDR_SET(value,field)     (ARCHI_BINSERT((value),(field),17,0))
#define UDMA_MEMCPY_SRC_ADDR_SRC_ADDR(val)                 ((val) << 0)

#define UDMA_MEMCPY_MEM_SEL_MEM_SEL_GET(value)             (ARCHI_BEXTRACTU((value),1,0))
#define UDMA_MEMCPY_MEM_SEL_MEM_SEL_GETS(value)            (ARCHI_BEXTRACT((value),1,0))
#define UDMA_MEMCPY_MEM_SEL_MEM_SEL_SET(value,field)       (ARCHI_BINSERT((value),(field),1,0))
#define UDMA_MEMCPY_MEM_SEL_MEM_SEL(val)                   ((val) << 0)

#endif

#endif
