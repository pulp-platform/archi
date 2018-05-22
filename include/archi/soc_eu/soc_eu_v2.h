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


#ifndef __ARCHI_SOC_EU_SOC_EU_V2_H__
#define __ARCHI_SOC_EU_SOC_EU_V2_H__

#define SOC_EU_EVENT             0x00
#define SOC_FC_FIRST_MASK        0x04
#define SOC_CL_FIRST_MASK        0x24
#define SOC_PR_FIRST_MASK        0x44
#define SOC_ERR_FIRST_MASK       0x64
#define SOC_TIMER_SEL_HI         0x84
#define SOC_TIMER_SEL_LO         0x88

#define SOC_NB_EVENT_REGS        8

#define SOC_FC_MASK(x)    (SOC_FC_FIRST_MASK + (x)*4)
#define SOC_CL_MASK(x)    (SOC_CL_FIRST_MASK + (x)*4)
#define SOC_PR_MASK(x)    (SOC_PR_FIRST_MASK + (x)*4)

#endif