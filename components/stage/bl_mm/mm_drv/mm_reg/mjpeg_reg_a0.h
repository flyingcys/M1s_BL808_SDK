/**
  ******************************************************************************
  * @file    mjpeg_reg.h
  * @version V1.2
  * @date    2019-08-05
  * @brief   This file is the description of.IP register
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2018 Bouffalo Lab</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of Bouffalo Lab nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
#ifndef  __MJENC_REG_H__
#define  __MJENC_REG_H__

#include "bl808.h"

/* 0x0 : mjpeg_control_1 */
#define MJENC_MJPEG_CONTROL_1_OFFSET                            (0x0)
#define MJENC_REG_MJPEG_ENABLE                                  MJENC_REG_MJPEG_ENABLE
#define MJENC_REG_MJPEG_ENABLE_POS                              (0U)
#define MJENC_REG_MJPEG_ENABLE_LEN                              (1U)
#define MJENC_REG_MJPEG_ENABLE_MSK                              (((1U<<MJENC_REG_MJPEG_ENABLE_LEN)-1)<<MJENC_REG_MJPEG_ENABLE_POS)
#define MJENC_REG_MJPEG_ENABLE_UMSK                             (~(((1U<<MJENC_REG_MJPEG_ENABLE_LEN)-1)<<MJENC_REG_MJPEG_ENABLE_POS))
#define MJENC_REG_MJPEG_BIT_ORDER                               MJENC_REG_MJPEG_BIT_ORDER
#define MJENC_REG_MJPEG_BIT_ORDER_POS                           (1U)
#define MJENC_REG_MJPEG_BIT_ORDER_LEN                           (1U)
#define MJENC_REG_MJPEG_BIT_ORDER_MSK                           (((1U<<MJENC_REG_MJPEG_BIT_ORDER_LEN)-1)<<MJENC_REG_MJPEG_BIT_ORDER_POS)
#define MJENC_REG_MJPEG_BIT_ORDER_UMSK                          (~(((1U<<MJENC_REG_MJPEG_BIT_ORDER_LEN)-1)<<MJENC_REG_MJPEG_BIT_ORDER_POS))
#define MJENC_REG_ORDER_U_EVEN                                  MJENC_REG_ORDER_U_EVEN
#define MJENC_REG_ORDER_U_EVEN_POS                              (2U)
#define MJENC_REG_ORDER_U_EVEN_LEN                              (1U)
#define MJENC_REG_ORDER_U_EVEN_MSK                              (((1U<<MJENC_REG_ORDER_U_EVEN_LEN)-1)<<MJENC_REG_ORDER_U_EVEN_POS)
#define MJENC_REG_ORDER_U_EVEN_UMSK                             (~(((1U<<MJENC_REG_ORDER_U_EVEN_LEN)-1)<<MJENC_REG_ORDER_U_EVEN_POS))
#define MJENC_REG_Q_MODE                                        MJENC_REG_Q_MODE
#define MJENC_REG_Q_MODE_POS                                    (4U)
#define MJENC_REG_Q_MODE_LEN                                    (3U)
#define MJENC_REG_Q_MODE_MSK                                    (((1U<<MJENC_REG_Q_MODE_LEN)-1)<<MJENC_REG_Q_MODE_POS)
#define MJENC_REG_Q_MODE_UMSK                                   (~(((1U<<MJENC_REG_Q_MODE_LEN)-1)<<MJENC_REG_Q_MODE_POS))
#define MJENC_REG_W_XLEN                                        MJENC_REG_W_XLEN
#define MJENC_REG_W_XLEN_POS                                    (8U)
#define MJENC_REG_W_XLEN_LEN                                    (3U)
#define MJENC_REG_W_XLEN_MSK                                    (((1U<<MJENC_REG_W_XLEN_LEN)-1)<<MJENC_REG_W_XLEN_POS)
#define MJENC_REG_W_XLEN_UMSK                                   (~(((1U<<MJENC_REG_W_XLEN_LEN)-1)<<MJENC_REG_W_XLEN_POS))
#define MJENC_REG_LAST_HF_HBLK_DMY                               MJENC_REG_LAST_HF_HBLK_DMY
#define MJENC_REG_LAST_HF_HBLK_DMY_POS                           (11U)
#define MJENC_REG_LAST_HF_HBLK_DMY_LEN                           (1U)
#define MJENC_REG_LAST_HF_HBLK_DMY_MSK                           (((1U<<MJENC_REG_LAST_HF_HBLK_DMY_LEN)-1)<<MJENC_REG_LAST_HF_HBLK_DMY_POS)
#define MJENC_REG_LAST_HF_HBLK_DMY_UMSK                          (~(((1U<<MJENC_REG_LAST_HF_HBLK_DMY_LEN)-1)<<MJENC_REG_LAST_HF_HBLK_DMY_POS))
#define MJENC_REG_FRAME_WBLK                                    MJENC_REG_FRAME_WBLK
#define MJENC_REG_FRAME_WBLK_POS                                (16U)
#define MJENC_REG_FRAME_WBLK_LEN                                (8U)
#define MJENC_REG_FRAME_WBLK_MSK                                (((1U<<MJENC_REG_FRAME_WBLK_LEN)-1)<<MJENC_REG_FRAME_WBLK_POS)
#define MJENC_REG_FRAME_WBLK_UMSK                               (~(((1U<<MJENC_REG_FRAME_WBLK_LEN)-1)<<MJENC_REG_FRAME_WBLK_POS))
#define MJENC_REG_FRAME_HBLK                                    MJENC_REG_FRAME_HBLK
#define MJENC_REG_FRAME_HBLK_POS                                (24U)
#define MJENC_REG_FRAME_HBLK_LEN                                (8U)
#define MJENC_REG_FRAME_HBLK_MSK                                (((1U<<MJENC_REG_FRAME_HBLK_LEN)-1)<<MJENC_REG_FRAME_HBLK_POS)
#define MJENC_REG_FRAME_HBLK_UMSK                               (~(((1U<<MJENC_REG_FRAME_HBLK_LEN)-1)<<MJENC_REG_FRAME_HBLK_POS))

/* 0x4 : mjpeg_control_2 */
#define MJENC_MJPEG_CONTROL_2_OFFSET                            (0x4)
#define MJENC_REG_SW_FRAME                                      MJENC_REG_SW_FRAME
#define MJENC_REG_SW_FRAME_POS                                  (0U)
#define MJENC_REG_SW_FRAME_LEN                                  (5U)
#define MJENC_REG_SW_FRAME_MSK                                  (((1U<<MJENC_REG_SW_FRAME_LEN)-1)<<MJENC_REG_SW_FRAME_POS)
#define MJENC_REG_SW_FRAME_UMSK                                 (~(((1U<<MJENC_REG_SW_FRAME_LEN)-1)<<MJENC_REG_SW_FRAME_POS))
#define MJENC_REG_MJPEG_SW_MODE                                 MJENC_REG_MJPEG_SW_MODE
#define MJENC_REG_MJPEG_SW_MODE_POS                             (8U)
#define MJENC_REG_MJPEG_SW_MODE_LEN                             (1U)
#define MJENC_REG_MJPEG_SW_MODE_MSK                             (((1U<<MJENC_REG_MJPEG_SW_MODE_LEN)-1)<<MJENC_REG_MJPEG_SW_MODE_POS)
#define MJENC_REG_MJPEG_SW_MODE_UMSK                            (~(((1U<<MJENC_REG_MJPEG_SW_MODE_LEN)-1)<<MJENC_REG_MJPEG_SW_MODE_POS))
#define MJENC_REG_MJPEG_SW_RUN                                  MJENC_REG_MJPEG_SW_RUN
#define MJENC_REG_MJPEG_SW_RUN_POS                              (9U)
#define MJENC_REG_MJPEG_SW_RUN_LEN                              (1U)
#define MJENC_REG_MJPEG_SW_RUN_MSK                              (((1U<<MJENC_REG_MJPEG_SW_RUN_LEN)-1)<<MJENC_REG_MJPEG_SW_RUN_POS)
#define MJENC_REG_MJPEG_SW_RUN_UMSK                             (~(((1U<<MJENC_REG_MJPEG_SW_RUN_LEN)-1)<<MJENC_REG_MJPEG_SW_RUN_POS))
#define MJENC_REG_YY_DVP2AXI_SEL                                MJENC_REG_YY_DVP2AXI_SEL
#define MJENC_REG_YY_DVP2AXI_SEL_POS                            (12U)
#define MJENC_REG_YY_DVP2AXI_SEL_LEN                            (2U)
#define MJENC_REG_YY_DVP2AXI_SEL_MSK                            (((1U<<MJENC_REG_YY_DVP2AXI_SEL_LEN)-1)<<MJENC_REG_YY_DVP2AXI_SEL_POS)
#define MJENC_REG_YY_DVP2AXI_SEL_UMSK                           (~(((1U<<MJENC_REG_YY_DVP2AXI_SEL_LEN)-1)<<MJENC_REG_YY_DVP2AXI_SEL_POS))
#define MJENC_REG_UV_DVP2AXI_SEL                                MJENC_REG_UV_DVP2AXI_SEL
#define MJENC_REG_UV_DVP2AXI_SEL_POS                            (14U)
#define MJENC_REG_UV_DVP2AXI_SEL_LEN                            (2U)
#define MJENC_REG_UV_DVP2AXI_SEL_MSK                            (((1U<<MJENC_REG_UV_DVP2AXI_SEL_LEN)-1)<<MJENC_REG_UV_DVP2AXI_SEL_POS)
#define MJENC_REG_UV_DVP2AXI_SEL_UMSK                           (~(((1U<<MJENC_REG_UV_DVP2AXI_SEL_LEN)-1)<<MJENC_REG_UV_DVP2AXI_SEL_POS))
#define MJENC_REG_MJPEG_WAIT_CYCLE                              MJENC_REG_MJPEG_WAIT_CYCLE
#define MJENC_REG_MJPEG_WAIT_CYCLE_POS                          (16U)
#define MJENC_REG_MJPEG_WAIT_CYCLE_LEN                          (16U)
#define MJENC_REG_MJPEG_WAIT_CYCLE_MSK                          (((1U<<MJENC_REG_MJPEG_WAIT_CYCLE_LEN)-1)<<MJENC_REG_MJPEG_WAIT_CYCLE_POS)
#define MJENC_REG_MJPEG_WAIT_CYCLE_UMSK                         (~(((1U<<MJENC_REG_MJPEG_WAIT_CYCLE_LEN)-1)<<MJENC_REG_MJPEG_WAIT_CYCLE_POS))

/* 0x08 : mjpeg_yy_frame_addr */
#define MJENC_MJPEG_YY_FRAME_ADDR_OFFSET                        (0x08)
#define MJENC_REG_YY_ADDR_START                                 MJENC_REG_YY_ADDR_START
#define MJENC_REG_YY_ADDR_START_POS                             (0U)
#define MJENC_REG_YY_ADDR_START_LEN                             (32U)
#define MJENC_REG_YY_ADDR_START_MSK                             (((1U<<MJENC_REG_YY_ADDR_START_LEN)-1)<<MJENC_REG_YY_ADDR_START_POS)
#define MJENC_REG_YY_ADDR_START_UMSK                            (~(((1U<<MJENC_REG_YY_ADDR_START_LEN)-1)<<MJENC_REG_YY_ADDR_START_POS))

/* 0x0C : mjpeg_uv_frame_addr */
#define MJENC_MJPEG_UV_FRAME_ADDR_OFFSET                        (0x0C)
#define MJENC_REG_UV_ADDR_START                                 MJENC_REG_UV_ADDR_START
#define MJENC_REG_UV_ADDR_START_POS                             (0U)
#define MJENC_REG_UV_ADDR_START_LEN                             (32U)
#define MJENC_REG_UV_ADDR_START_MSK                             (((1U<<MJENC_REG_UV_ADDR_START_LEN)-1)<<MJENC_REG_UV_ADDR_START_POS)
#define MJENC_REG_UV_ADDR_START_UMSK                            (~(((1U<<MJENC_REG_UV_ADDR_START_LEN)-1)<<MJENC_REG_UV_ADDR_START_POS))

/* 0x10 : mjpeg_yuv_mem */
#define MJENC_MJPEG_YUV_MEM_OFFSET                              (0x10)
#define MJENC_REG_YY_MEM_HBLK                                   MJENC_REG_YY_MEM_HBLK
#define MJENC_REG_YY_MEM_HBLK_POS                               (0U)
#define MJENC_REG_YY_MEM_HBLK_LEN                               (13U)
#define MJENC_REG_YY_MEM_HBLK_MSK                               (((1U<<MJENC_REG_YY_MEM_HBLK_LEN)-1)<<MJENC_REG_YY_MEM_HBLK_POS)
#define MJENC_REG_YY_MEM_HBLK_UMSK                              (~(((1U<<MJENC_REG_YY_MEM_HBLK_LEN)-1)<<MJENC_REG_YY_MEM_HBLK_POS))
#define MJENC_REG_UV_MEM_HBLK                                   MJENC_REG_UV_MEM_HBLK
#define MJENC_REG_UV_MEM_HBLK_POS                               (16U)
#define MJENC_REG_UV_MEM_HBLK_LEN                               (13U)
#define MJENC_REG_UV_MEM_HBLK_MSK                               (((1U<<MJENC_REG_UV_MEM_HBLK_LEN)-1)<<MJENC_REG_UV_MEM_HBLK_POS)
#define MJENC_REG_UV_MEM_HBLK_UMSK                              (~(((1U<<MJENC_REG_UV_MEM_HBLK_LEN)-1)<<MJENC_REG_UV_MEM_HBLK_POS))

/* 0x14 : jpeg_frame_addr */
#define MJENC_JPEG_FRAME_ADDR_OFFSET                            (0x14)
#define MJENC_REG_W_ADDR_START                                  MJENC_REG_W_ADDR_START
#define MJENC_REG_W_ADDR_START_POS                              (0U)
#define MJENC_REG_W_ADDR_START_LEN                              (32U)
#define MJENC_REG_W_ADDR_START_MSK                              (((1U<<MJENC_REG_W_ADDR_START_LEN)-1)<<MJENC_REG_W_ADDR_START_POS)
#define MJENC_REG_W_ADDR_START_UMSK                             (~(((1U<<MJENC_REG_W_ADDR_START_LEN)-1)<<MJENC_REG_W_ADDR_START_POS))

/* 0x18 : jpeg_store_memory */
#define MJENC_JPEG_STORE_MEMORY_OFFSET                          (0x18)
#define MJENC_REG_W_BURST_CNT                                   MJENC_REG_W_BURST_CNT
#define MJENC_REG_W_BURST_CNT_POS                               (0U)
#define MJENC_REG_W_BURST_CNT_LEN                               (32U)
#define MJENC_REG_W_BURST_CNT_MSK                               (((1U<<MJENC_REG_W_BURST_CNT_LEN)-1)<<MJENC_REG_W_BURST_CNT_POS)
#define MJENC_REG_W_BURST_CNT_UMSK                              (~(((1U<<MJENC_REG_W_BURST_CNT_LEN)-1)<<MJENC_REG_W_BURST_CNT_POS))

/* 0x1C : mjpeg_control_3 */
#define MJENC_MJPEG_CONTROL_3_OFFSET                                  (0x1C)
#define MJENC_REG_INT_NORMAL_EN                                 MJENC_REG_INT_NORMAL_EN
#define MJENC_REG_INT_NORMAL_EN_POS                             (0U)
#define MJENC_REG_INT_NORMAL_EN_LEN                             (1U)
#define MJENC_REG_INT_NORMAL_EN_MSK                             (((1U<<MJENC_REG_INT_NORMAL_EN_LEN)-1)<<MJENC_REG_INT_NORMAL_EN_POS)
#define MJENC_REG_INT_NORMAL_EN_UMSK                            (~(((1U<<MJENC_REG_INT_NORMAL_EN_LEN)-1)<<MJENC_REG_INT_NORMAL_EN_POS))
#define MJENC_REG_INT_CAM_EN                                    MJENC_REG_INT_CAM_EN
#define MJENC_REG_INT_CAM_EN_POS                                (1U)
#define MJENC_REG_INT_CAM_EN_LEN                                (1U)
#define MJENC_REG_INT_CAM_EN_MSK                                (((1U<<MJENC_REG_INT_CAM_EN_LEN)-1)<<MJENC_REG_INT_CAM_EN_POS)
#define MJENC_REG_INT_CAM_EN_UMSK                               (~(((1U<<MJENC_REG_INT_CAM_EN_LEN)-1)<<MJENC_REG_INT_CAM_EN_POS))
#define MJENC_REG_INT_MEM_EN                                    MJENC_REG_INT_MEM_EN
#define MJENC_REG_INT_MEM_EN_POS                                (2U)
#define MJENC_REG_INT_MEM_EN_LEN                                (1U)
#define MJENC_REG_INT_MEM_EN_MSK                                (((1U<<MJENC_REG_INT_MEM_EN_LEN)-1)<<MJENC_REG_INT_MEM_EN_POS)
#define MJENC_REG_INT_MEM_EN_UMSK                               (~(((1U<<MJENC_REG_INT_MEM_EN_LEN)-1)<<MJENC_REG_INT_MEM_EN_POS))
#define MJENC_REG_INT_FRAME_EN                                  MJENC_REG_INT_FRAME_EN
#define MJENC_REG_INT_FRAME_EN_POS                              (3U)
#define MJENC_REG_INT_FRAME_EN_LEN                              (1U)
#define MJENC_REG_INT_FRAME_EN_MSK                              (((1U<<MJENC_REG_INT_FRAME_EN_LEN)-1)<<MJENC_REG_INT_FRAME_EN_POS)
#define MJENC_REG_INT_FRAME_EN_UMSK                             (~(((1U<<MJENC_REG_INT_FRAME_EN_LEN)-1)<<MJENC_REG_INT_FRAME_EN_POS))
#define MJENC_STS_NORMAL_INT                                    MJENC_STS_NORMAL_INT
#define MJENC_STS_NORMAL_INT_POS                                (4U)
#define MJENC_STS_NORMAL_INT_LEN                                (1U)
#define MJENC_STS_NORMAL_INT_MSK                                (((1U<<MJENC_STS_NORMAL_INT_LEN)-1)<<MJENC_STS_NORMAL_INT_POS)
#define MJENC_STS_NORMAL_INT_UMSK                               (~(((1U<<MJENC_STS_NORMAL_INT_LEN)-1)<<MJENC_STS_NORMAL_INT_POS))
#define MJENC_STS_CAM_INT                                       MJENC_STS_CAM_INT
#define MJENC_STS_CAM_INT_POS                                   (5U)
#define MJENC_STS_CAM_INT_LEN                                   (1U)
#define MJENC_STS_CAM_INT_MSK                                   (((1U<<MJENC_STS_CAM_INT_LEN)-1)<<MJENC_STS_CAM_INT_POS)
#define MJENC_STS_CAM_INT_UMSK                                  (~(((1U<<MJENC_STS_CAM_INT_LEN)-1)<<MJENC_STS_CAM_INT_POS))
#define MJENC_STS_MEM_INT                                       MJENC_STS_MEM_INT
#define MJENC_STS_MEM_INT_POS                                   (6U)
#define MJENC_STS_MEM_INT_LEN                                   (1U)
#define MJENC_STS_MEM_INT_MSK                                   (((1U<<MJENC_STS_MEM_INT_LEN)-1)<<MJENC_STS_MEM_INT_POS)
#define MJENC_STS_MEM_INT_UMSK                                  (~(((1U<<MJENC_STS_MEM_INT_LEN)-1)<<MJENC_STS_MEM_INT_POS))
#define MJENC_STS_FRAME_INT                                     MJENC_STS_FRAME_INT
#define MJENC_STS_FRAME_INT_POS                                 (7U)
#define MJENC_STS_FRAME_INT_LEN                                 (1U)
#define MJENC_STS_FRAME_INT_MSK                                 (((1U<<MJENC_STS_FRAME_INT_LEN)-1)<<MJENC_STS_FRAME_INT_POS)
#define MJENC_STS_FRAME_INT_UMSK                                (~(((1U<<MJENC_STS_FRAME_INT_LEN)-1)<<MJENC_STS_FRAME_INT_POS))
#define MJENC_MJPEG_IDLE                                        MJENC_MJPEG_IDLE
#define MJENC_MJPEG_IDLE_POS                                    (8U)
#define MJENC_MJPEG_IDLE_LEN                                    (1U)
#define MJENC_MJPEG_IDLE_MSK                                    (((1U<<MJENC_MJPEG_IDLE_LEN)-1)<<MJENC_MJPEG_IDLE_POS)
#define MJENC_MJPEG_IDLE_UMSK                                   (~(((1U<<MJENC_MJPEG_IDLE_LEN)-1)<<MJENC_MJPEG_IDLE_POS))
#define MJENC_MJPEG_FUNC                                        MJENC_MJPEG_FUNC
#define MJENC_MJPEG_FUNC_POS                                    (9U)
#define MJENC_MJPEG_FUNC_LEN                                    (1U)
#define MJENC_MJPEG_FUNC_MSK                                    (((1U<<MJENC_MJPEG_FUNC_LEN)-1)<<MJENC_MJPEG_FUNC_POS)
#define MJENC_MJPEG_FUNC_UMSK                                   (~(((1U<<MJENC_MJPEG_FUNC_LEN)-1)<<MJENC_MJPEG_FUNC_POS))
#define MJENC_MJPEG_WAIT                                        MJENC_MJPEG_WAIT
#define MJENC_MJPEG_WAIT_POS                                    (10U)
#define MJENC_MJPEG_WAIT_LEN                                    (1U)
#define MJENC_MJPEG_WAIT_MSK                                    (((1U<<MJENC_MJPEG_WAIT_LEN)-1)<<MJENC_MJPEG_WAIT_POS)
#define MJENC_MJPEG_WAIT_UMSK                                   (~(((1U<<MJENC_MJPEG_WAIT_LEN)-1)<<MJENC_MJPEG_WAIT_POS))
#define MJENC_MJPEG_FLSH                                        MJENC_MJPEG_FLSH
#define MJENC_MJPEG_FLSH_POS                                    (11U)
#define MJENC_MJPEG_FLSH_LEN                                    (1U)
#define MJENC_MJPEG_FLSH_MSK                                    (((1U<<MJENC_MJPEG_FLSH_LEN)-1)<<MJENC_MJPEG_FLSH_POS)
#define MJENC_MJPEG_FLSH_UMSK                                   (~(((1U<<MJENC_MJPEG_FLSH_LEN)-1)<<MJENC_MJPEG_FLSH_POS))
#define MJENC_MJPEG_MANS                                        MJENC_MJPEG_MANS
#define MJENC_MJPEG_MANS_POS                                    (12U)
#define MJENC_MJPEG_MANS_LEN                                    (1U)
#define MJENC_MJPEG_MANS_MSK                                    (((1U<<MJENC_MJPEG_MANS_LEN)-1)<<MJENC_MJPEG_MANS_POS)
#define MJENC_MJPEG_MANS_UMSK                                   (~(((1U<<MJENC_MJPEG_MANS_LEN)-1)<<MJENC_MJPEG_MANS_POS))
#define MJENC_MJPEG_MANF                                        MJENC_MJPEG_MANF
#define MJENC_MJPEG_MANF_POS                                    (13U)
#define MJENC_MJPEG_MANF_LEN                                    (1U)
#define MJENC_MJPEG_MANF_MSK                                    (((1U<<MJENC_MJPEG_MANF_LEN)-1)<<MJENC_MJPEG_MANF_POS)
#define MJENC_MJPEG_MANF_UMSK                                   (~(((1U<<MJENC_MJPEG_MANF_LEN)-1)<<MJENC_MJPEG_MANF_POS))
#define MJENC_AXI_READ_IDLE                                     MJENC_AXI_READ_IDLE
#define MJENC_AXI_READ_IDLE_POS                                 (14U)
#define MJENC_AXI_READ_IDLE_LEN                                 (1U)
#define MJENC_AXI_READ_IDLE_MSK                                 (((1U<<MJENC_AXI_READ_IDLE_LEN)-1)<<MJENC_AXI_READ_IDLE_POS)
#define MJENC_AXI_READ_IDLE_UMSK                                (~(((1U<<MJENC_AXI_READ_IDLE_LEN)-1)<<MJENC_AXI_READ_IDLE_POS))
#define MJENC_AXI_WRITE_IDLE                                    MJENC_AXI_WRITE_IDLE
#define MJENC_AXI_WRITE_IDLE_POS                                (15U)
#define MJENC_AXI_WRITE_IDLE_LEN                                (1U)
#define MJENC_AXI_WRITE_IDLE_MSK                                (((1U<<MJENC_AXI_WRITE_IDLE_LEN)-1)<<MJENC_AXI_WRITE_IDLE_POS)
#define MJENC_AXI_WRITE_IDLE_UMSK                               (~(((1U<<MJENC_AXI_WRITE_IDLE_LEN)-1)<<MJENC_AXI_WRITE_IDLE_POS))
#define MJENC_REG_FRAME_CNT_TRGR_INT                            MJENC_REG_FRAME_CNT_TRGR_INT
#define MJENC_REG_FRAME_CNT_TRGR_INT_POS                        (16U)
#define MJENC_REG_FRAME_CNT_TRGR_INT_LEN                        (5U)
#define MJENC_REG_FRAME_CNT_TRGR_INT_MSK                        (((1U<<MJENC_REG_FRAME_CNT_TRGR_INT_LEN)-1)<<MJENC_REG_FRAME_CNT_TRGR_INT_POS)
#define MJENC_REG_FRAME_CNT_TRGR_INT_UMSK                       (~(((1U<<MJENC_REG_FRAME_CNT_TRGR_INT_LEN)-1)<<MJENC_REG_FRAME_CNT_TRGR_INT_POS))
#define MJENC_REG_INT_IDLE_EN                                   MJENC_REG_INT_IDLE_EN
#define MJENC_REG_INT_IDLE_EN_POS                               (21U)
#define MJENC_REG_INT_IDLE_EN_LEN                               (1U)
#define MJENC_REG_INT_IDLE_EN_MSK                               (((1U<<MJENC_REG_INT_IDLE_EN_LEN)-1)<<MJENC_REG_INT_IDLE_EN_POS)
#define MJENC_REG_INT_IDLE_EN_UMSK                              (~(((1U<<MJENC_REG_INT_IDLE_EN_LEN)-1)<<MJENC_REG_INT_IDLE_EN_POS))
#define MJENC_STS_IDLE_INT                                      MJENC_STS_IDLE_INT
#define MJENC_STS_IDLE_INT_POS                                  (22U)
#define MJENC_STS_IDLE_INT_LEN                                  (1U)
#define MJENC_STS_IDLE_INT_MSK                                  (((1U<<MJENC_STS_IDLE_INT_LEN)-1)<<MJENC_STS_IDLE_INT_POS)
#define MJENC_STS_IDLE_INT_UMSK                                 (~(((1U<<MJENC_STS_IDLE_INT_LEN)-1)<<MJENC_STS_IDLE_INT_POS))
#define MJENC_FRAME_VALID_CNT                                   MJENC_FRAME_VALID_CNT
#define MJENC_FRAME_VALID_CNT_POS                               (24U)
#define MJENC_FRAME_VALID_CNT_LEN                               (5U)
#define MJENC_FRAME_VALID_CNT_MSK                               (((1U<<MJENC_FRAME_VALID_CNT_LEN)-1)<<MJENC_FRAME_VALID_CNT_POS)
#define MJENC_FRAME_VALID_CNT_UMSK                              (~(((1U<<MJENC_FRAME_VALID_CNT_LEN)-1)<<MJENC_FRAME_VALID_CNT_POS))

/* 0x20 : mjpeg_frame_fifo_pop */
#define MJENC_MJPEG_FRAME_FIFO_POP_OFFSET                       (0x20)
#define MJENC_RFIFO_POP                                         MJENC_RFIFO_POP
#define MJENC_RFIFO_POP_POS                                     (0U)
#define MJENC_RFIFO_POP_LEN                                     (1U)
#define MJENC_RFIFO_POP_MSK                                     (((1U<<MJENC_RFIFO_POP_LEN)-1)<<MJENC_RFIFO_POP_POS)
#define MJENC_RFIFO_POP_UMSK                                    (~(((1U<<MJENC_RFIFO_POP_LEN)-1)<<MJENC_RFIFO_POP_POS))
#define MJENC_REG_INT_CLR                                       MJENC_REG_INT_CLR
#define MJENC_REG_INT_CLR_POS                                   (8U)
#define MJENC_REG_INT_CLR_LEN                                   (1U)
#define MJENC_REG_INT_CLR_MSK                                   (((1U<<MJENC_REG_INT_CLR_LEN)-1)<<MJENC_REG_INT_CLR_POS)
#define MJENC_REG_INT_CLR_UMSK                                  (~(((1U<<MJENC_REG_INT_CLR_LEN)-1)<<MJENC_REG_INT_CLR_POS))

/* 0x40 : mjpeg_Y_frame_read_status_1 */
#define MJENC_MJPEG_Y_FRAME_READ_STATUS_1_OFFSET                (0x40)
#define MJENC_YY_MEM_HBLK_R                                     MJENC_YY_MEM_HBLK_R
#define MJENC_YY_MEM_HBLK_R_POS                                 (0U)
#define MJENC_YY_MEM_HBLK_R_LEN                                 (13U)
#define MJENC_YY_MEM_HBLK_R_MSK                                 (((1U<<MJENC_YY_MEM_HBLK_R_LEN)-1)<<MJENC_YY_MEM_HBLK_R_POS)
#define MJENC_YY_MEM_HBLK_R_UMSK                                (~(((1U<<MJENC_YY_MEM_HBLK_R_LEN)-1)<<MJENC_YY_MEM_HBLK_R_POS))
#define MJENC_YY_FRM_HBLK_R                                     MJENC_YY_FRM_HBLK_R
#define MJENC_YY_FRM_HBLK_R_POS                                 (16U)
#define MJENC_YY_FRM_HBLK_R_LEN                                 (13U)
#define MJENC_YY_FRM_HBLK_R_MSK                                 (((1U<<MJENC_YY_FRM_HBLK_R_LEN)-1)<<MJENC_YY_FRM_HBLK_R_POS)
#define MJENC_YY_FRM_HBLK_R_UMSK                                (~(((1U<<MJENC_YY_FRM_HBLK_R_LEN)-1)<<MJENC_YY_FRM_HBLK_R_POS))

/* 0x44 : mjpeg_Y_frame_read_status_2 */
#define MJENC_MJPEG_Y_FRAME_READ_STATUS_2_OFFSET                (0x44)
#define MJENC_YY_WBLK_R                                         MJENC_YY_WBLK_R
#define MJENC_YY_WBLK_R_POS                                     (0U)
#define MJENC_YY_WBLK_R_LEN                                     (13U)
#define MJENC_YY_WBLK_R_MSK                                     (((1U<<MJENC_YY_WBLK_R_LEN)-1)<<MJENC_YY_WBLK_R_POS)
#define MJENC_YY_WBLK_R_UMSK                                    (~(((1U<<MJENC_YY_WBLK_R_LEN)-1)<<MJENC_YY_WBLK_R_POS))
#define MJENC_YY_MEM_RND_R                                      MJENC_YY_MEM_RND_R
#define MJENC_YY_MEM_RND_R_POS                                  (16U)
#define MJENC_YY_MEM_RND_R_LEN                                  (8U)
#define MJENC_YY_MEM_RND_R_MSK                                  (((1U<<MJENC_YY_MEM_RND_R_LEN)-1)<<MJENC_YY_MEM_RND_R_POS)
#define MJENC_YY_MEM_RND_R_UMSK                                 (~(((1U<<MJENC_YY_MEM_RND_R_LEN)-1)<<MJENC_YY_MEM_RND_R_POS))
#define MJENC_YY_FRM_CNT_R                                      MJENC_YY_FRM_CNT_R
#define MJENC_YY_FRM_CNT_R_POS                                  (24U)
#define MJENC_YY_FRM_CNT_R_LEN                                  (8U)
#define MJENC_YY_FRM_CNT_R_MSK                                  (((1U<<MJENC_YY_FRM_CNT_R_LEN)-1)<<MJENC_YY_FRM_CNT_R_POS)
#define MJENC_YY_FRM_CNT_R_UMSK                                 (~(((1U<<MJENC_YY_FRM_CNT_R_LEN)-1)<<MJENC_YY_FRM_CNT_R_POS))

/* 0x48 : mjpeg_Y_frame_write_status */
#define MJENC_MJPEG_Y_FRAME_WRITE_STATUS_OFFSET                 (0x48)
#define MJENC_YY_MEM_HBLK_W                                     MJENC_YY_MEM_HBLK_W
#define MJENC_YY_MEM_HBLK_W_POS                                 (0U)
#define MJENC_YY_MEM_HBLK_W_LEN                                 (13U)
#define MJENC_YY_MEM_HBLK_W_MSK                                 (((1U<<MJENC_YY_MEM_HBLK_W_LEN)-1)<<MJENC_YY_MEM_HBLK_W_POS)
#define MJENC_YY_MEM_HBLK_W_UMSK                                (~(((1U<<MJENC_YY_MEM_HBLK_W_LEN)-1)<<MJENC_YY_MEM_HBLK_W_POS))
#define MJENC_YY_MEM_RND_W                                      MJENC_YY_MEM_RND_W
#define MJENC_YY_MEM_RND_W_POS                                  (16U)
#define MJENC_YY_MEM_RND_W_LEN                                  (8U)
#define MJENC_YY_MEM_RND_W_MSK                                  (((1U<<MJENC_YY_MEM_RND_W_LEN)-1)<<MJENC_YY_MEM_RND_W_POS)
#define MJENC_YY_MEM_RND_W_UMSK                                 (~(((1U<<MJENC_YY_MEM_RND_W_LEN)-1)<<MJENC_YY_MEM_RND_W_POS))
#define MJENC_YY_FRM_CNT_W                                      MJENC_YY_FRM_CNT_W
#define MJENC_YY_FRM_CNT_W_POS                                  (24U)
#define MJENC_YY_FRM_CNT_W_LEN                                  (8U)
#define MJENC_YY_FRM_CNT_W_MSK                                  (((1U<<MJENC_YY_FRM_CNT_W_LEN)-1)<<MJENC_YY_FRM_CNT_W_POS)
#define MJENC_YY_FRM_CNT_W_UMSK                                 (~(((1U<<MJENC_YY_FRM_CNT_W_LEN)-1)<<MJENC_YY_FRM_CNT_W_POS))

/* 0x4C : mjpeg_UV_frame_read_status_1 */
#define MJENC_MJPEG_UV_FRAME_READ_STATUS_1_OFFSET               (0x4C)
#define MJENC_UV_MEM_HBLK_R                                     MJENC_UV_MEM_HBLK_R
#define MJENC_UV_MEM_HBLK_R_POS                                 (0U)
#define MJENC_UV_MEM_HBLK_R_LEN                                 (13U)
#define MJENC_UV_MEM_HBLK_R_MSK                                 (((1U<<MJENC_UV_MEM_HBLK_R_LEN)-1)<<MJENC_UV_MEM_HBLK_R_POS)
#define MJENC_UV_MEM_HBLK_R_UMSK                                (~(((1U<<MJENC_UV_MEM_HBLK_R_LEN)-1)<<MJENC_UV_MEM_HBLK_R_POS))
#define MJENC_UV_FRM_HBLK_R                                     MJENC_UV_FRM_HBLK_R
#define MJENC_UV_FRM_HBLK_R_POS                                 (16U)
#define MJENC_UV_FRM_HBLK_R_LEN                                 (13U)
#define MJENC_UV_FRM_HBLK_R_MSK                                 (((1U<<MJENC_UV_FRM_HBLK_R_LEN)-1)<<MJENC_UV_FRM_HBLK_R_POS)
#define MJENC_UV_FRM_HBLK_R_UMSK                                (~(((1U<<MJENC_UV_FRM_HBLK_R_LEN)-1)<<MJENC_UV_FRM_HBLK_R_POS))

/* 0x50 : mjpeg_UV_frame_read_status_2 */
#define MJENC_MJPEG_UV_FRAME_READ_STATUS_2_OFFSET               (0x50)
#define MJENC_UV_WBLK_R                                         MJENC_UV_WBLK_R
#define MJENC_UV_WBLK_R_POS                                     (0U)
#define MJENC_UV_WBLK_R_LEN                                     (13U)
#define MJENC_UV_WBLK_R_MSK                                     (((1U<<MJENC_UV_WBLK_R_LEN)-1)<<MJENC_UV_WBLK_R_POS)
#define MJENC_UV_WBLK_R_UMSK                                    (~(((1U<<MJENC_UV_WBLK_R_LEN)-1)<<MJENC_UV_WBLK_R_POS))
#define MJENC_UV_MEM_RND_R                                      MJENC_UV_MEM_RND_R
#define MJENC_UV_MEM_RND_R_POS                                  (16U)
#define MJENC_UV_MEM_RND_R_LEN                                  (8U)
#define MJENC_UV_MEM_RND_R_MSK                                  (((1U<<MJENC_UV_MEM_RND_R_LEN)-1)<<MJENC_UV_MEM_RND_R_POS)
#define MJENC_UV_MEM_RND_R_UMSK                                 (~(((1U<<MJENC_UV_MEM_RND_R_LEN)-1)<<MJENC_UV_MEM_RND_R_POS))
#define MJENC_UV_FRM_CNT_R                                      MJENC_UV_FRM_CNT_R
#define MJENC_UV_FRM_CNT_R_POS                                  (24U)
#define MJENC_UV_FRM_CNT_R_LEN                                  (8U)
#define MJENC_UV_FRM_CNT_R_MSK                                  (((1U<<MJENC_UV_FRM_CNT_R_LEN)-1)<<MJENC_UV_FRM_CNT_R_POS)
#define MJENC_UV_FRM_CNT_R_UMSK                                 (~(((1U<<MJENC_UV_FRM_CNT_R_LEN)-1)<<MJENC_UV_FRM_CNT_R_POS))

/* 0x54 : mjpeg_UV_frame_write_status */
#define MJENC_MJPEG_UV_FRAME_WRITE_STATUS_OFFSET                (0x54)
#define MJENC_UV_MEM_HBLK_W                                     MJENC_UV_MEM_HBLK_W
#define MJENC_UV_MEM_HBLK_W_POS                                 (0U)
#define MJENC_UV_MEM_HBLK_W_LEN                                 (13U)
#define MJENC_UV_MEM_HBLK_W_MSK                                 (((1U<<MJENC_UV_MEM_HBLK_W_LEN)-1)<<MJENC_UV_MEM_HBLK_W_POS)
#define MJENC_UV_MEM_HBLK_W_UMSK                                (~(((1U<<MJENC_UV_MEM_HBLK_W_LEN)-1)<<MJENC_UV_MEM_HBLK_W_POS))
#define MJENC_UV_MEM_RND_W                                      MJENC_UV_MEM_RND_W
#define MJENC_UV_MEM_RND_W_POS                                  (16U)
#define MJENC_UV_MEM_RND_W_LEN                                  (8U)
#define MJENC_UV_MEM_RND_W_MSK                                  (((1U<<MJENC_UV_MEM_RND_W_LEN)-1)<<MJENC_UV_MEM_RND_W_POS)
#define MJENC_UV_MEM_RND_W_UMSK                                 (~(((1U<<MJENC_UV_MEM_RND_W_LEN)-1)<<MJENC_UV_MEM_RND_W_POS))
#define MJENC_UV_FRM_CNT_W                                      MJENC_UV_FRM_CNT_W
#define MJENC_UV_FRM_CNT_W_POS                                  (24U)
#define MJENC_UV_FRM_CNT_W_LEN                                  (8U)
#define MJENC_UV_FRM_CNT_W_MSK                                  (((1U<<MJENC_UV_FRM_CNT_W_LEN)-1)<<MJENC_UV_FRM_CNT_W_POS)
#define MJENC_UV_FRM_CNT_W_UMSK                                 (~(((1U<<MJENC_UV_FRM_CNT_W_LEN)-1)<<MJENC_UV_FRM_CNT_W_POS))

/* 0x80 : mjpeg_start_addr0 */
#define MJENC_MJPEG_START_ADDR0_OFFSET                          (0x80)
#define MJENC_FRAME_START_ADDR_0                                MJENC_FRAME_START_ADDR_0
#define MJENC_FRAME_START_ADDR_0_POS                            (0U)
#define MJENC_FRAME_START_ADDR_0_LEN                            (32U)
#define MJENC_FRAME_START_ADDR_0_MSK                            (((1U<<MJENC_FRAME_START_ADDR_0_LEN)-1)<<MJENC_FRAME_START_ADDR_0_POS)
#define MJENC_FRAME_START_ADDR_0_UMSK                           (~(((1U<<MJENC_FRAME_START_ADDR_0_LEN)-1)<<MJENC_FRAME_START_ADDR_0_POS))

/* 0x84 : mjpeg_bit_cnt0 */
#define MJENC_MJPEG_BIT_CNT0_OFFSET                             (0x84)
#define MJENC_FRAME_BIT_CNT_0                                   MJENC_FRAME_BIT_CNT_0
#define MJENC_FRAME_BIT_CNT_0_POS                               (0U)
#define MJENC_FRAME_BIT_CNT_0_LEN                               (32U)
#define MJENC_FRAME_BIT_CNT_0_MSK                               (((1U<<MJENC_FRAME_BIT_CNT_0_LEN)-1)<<MJENC_FRAME_BIT_CNT_0_POS)
#define MJENC_FRAME_BIT_CNT_0_UMSK                              (~(((1U<<MJENC_FRAME_BIT_CNT_0_LEN)-1)<<MJENC_FRAME_BIT_CNT_0_POS))

/* 0x88 : mjpeg_start_addr1 */
#define MJENC_MJPEG_START_ADDR1_OFFSET                          (0x88)
#define MJENC_FRAME_START_ADDR_1                                MJENC_FRAME_START_ADDR_1
#define MJENC_FRAME_START_ADDR_1_POS                            (0U)
#define MJENC_FRAME_START_ADDR_1_LEN                            (32U)
#define MJENC_FRAME_START_ADDR_1_MSK                            (((1U<<MJENC_FRAME_START_ADDR_1_LEN)-1)<<MJENC_FRAME_START_ADDR_1_POS)
#define MJENC_FRAME_START_ADDR_1_UMSK                           (~(((1U<<MJENC_FRAME_START_ADDR_1_LEN)-1)<<MJENC_FRAME_START_ADDR_1_POS))

/* 0x8C : mjpeg_bit_cnt1 */
#define MJENC_MJPEG_BIT_CNT1_OFFSET                             (0x8C)
#define MJENC_FRAME_BIT_CNT_1                                   MJENC_FRAME_BIT_CNT_1
#define MJENC_FRAME_BIT_CNT_1_POS                               (0U)
#define MJENC_FRAME_BIT_CNT_1_LEN                               (32U)
#define MJENC_FRAME_BIT_CNT_1_MSK                               (((1U<<MJENC_FRAME_BIT_CNT_1_LEN)-1)<<MJENC_FRAME_BIT_CNT_1_POS)
#define MJENC_FRAME_BIT_CNT_1_UMSK                              (~(((1U<<MJENC_FRAME_BIT_CNT_1_LEN)-1)<<MJENC_FRAME_BIT_CNT_1_POS))

/* 0x90 : mjpeg_start_addr2 */
#define MJENC_MJPEG_START_ADDR2_OFFSET                          (0x90)
#define MJENC_FRAME_START_ADDR_2                                MJENC_FRAME_START_ADDR_2
#define MJENC_FRAME_START_ADDR_2_POS                            (0U)
#define MJENC_FRAME_START_ADDR_2_LEN                            (32U)
#define MJENC_FRAME_START_ADDR_2_MSK                            (((1U<<MJENC_FRAME_START_ADDR_2_LEN)-1)<<MJENC_FRAME_START_ADDR_2_POS)
#define MJENC_FRAME_START_ADDR_2_UMSK                           (~(((1U<<MJENC_FRAME_START_ADDR_2_LEN)-1)<<MJENC_FRAME_START_ADDR_2_POS))

/* 0x94 : mjpeg_bit_cnt2 */
#define MJENC_MJPEG_BIT_CNT2_OFFSET                             (0x94)
#define MJENC_FRAME_BIT_CNT_2                                   MJENC_FRAME_BIT_CNT_2
#define MJENC_FRAME_BIT_CNT_2_POS                               (0U)
#define MJENC_FRAME_BIT_CNT_2_LEN                               (32U)
#define MJENC_FRAME_BIT_CNT_2_MSK                               (((1U<<MJENC_FRAME_BIT_CNT_2_LEN)-1)<<MJENC_FRAME_BIT_CNT_2_POS)
#define MJENC_FRAME_BIT_CNT_2_UMSK                              (~(((1U<<MJENC_FRAME_BIT_CNT_2_LEN)-1)<<MJENC_FRAME_BIT_CNT_2_POS))

/* 0x98 : mjpeg_start_addr3 */
#define MJENC_MJPEG_START_ADDR3_OFFSET                          (0x98)
#define MJENC_FRAME_START_ADDR_3                                MJENC_FRAME_START_ADDR_3
#define MJENC_FRAME_START_ADDR_3_POS                            (0U)
#define MJENC_FRAME_START_ADDR_3_LEN                            (32U)
#define MJENC_FRAME_START_ADDR_3_MSK                            (((1U<<MJENC_FRAME_START_ADDR_3_LEN)-1)<<MJENC_FRAME_START_ADDR_3_POS)
#define MJENC_FRAME_START_ADDR_3_UMSK                           (~(((1U<<MJENC_FRAME_START_ADDR_3_LEN)-1)<<MJENC_FRAME_START_ADDR_3_POS))

/* 0x9C : mjpeg_bit_cnt3 */
#define MJENC_MJPEG_BIT_CNT3_OFFSET                             (0x9C)
#define MJENC_FRAME_BIT_CNT_3                                   MJENC_FRAME_BIT_CNT_3
#define MJENC_FRAME_BIT_CNT_3_POS                               (0U)
#define MJENC_FRAME_BIT_CNT_3_LEN                               (32U)
#define MJENC_FRAME_BIT_CNT_3_MSK                               (((1U<<MJENC_FRAME_BIT_CNT_3_LEN)-1)<<MJENC_FRAME_BIT_CNT_3_POS)
#define MJENC_FRAME_BIT_CNT_3_UMSK                              (~(((1U<<MJENC_FRAME_BIT_CNT_3_LEN)-1)<<MJENC_FRAME_BIT_CNT_3_POS))

/* 0x1F0 : mjpeg_debug */
#define MJENC_DEBUG_OFFSET                                      (0x1F0)
#define MJENC_REG_MJENC_DBG_EN                                  MJENC_REG_MJENC_DBG_EN
#define MJENC_REG_MJENC_DBG_EN_POS                              (0U)
#define MJENC_REG_MJENC_DBG_EN_LEN                              (1U)
#define MJENC_REG_MJENC_DBG_EN_MSK                              (((1U<<MJENC_REG_MJENC_DBG_EN_LEN)-1)<<MJENC_REG_MJENC_DBG_EN_POS)
#define MJENC_REG_MJENC_DBG_EN_UMSK                             (~(((1U<<MJENC_REG_MJENC_DBG_EN_LEN)-1)<<MJENC_REG_MJENC_DBG_EN_POS))
#define MJENC_REG_MJENC_DBG_SEL                                 MJENC_REG_MJENC_DBG_SEL
#define MJENC_REG_MJENC_DBG_SEL_POS                             (4U)
#define MJENC_REG_MJENC_DBG_SEL_LEN                             (4U)
#define MJENC_REG_MJENC_DBG_SEL_MSK                             (((1U<<MJENC_REG_MJENC_DBG_SEL_LEN)-1)<<MJENC_REG_MJENC_DBG_SEL_POS)
#define MJENC_REG_MJENC_DBG_SEL_UMSK                            (~(((1U<<MJENC_REG_MJENC_DBG_SEL_LEN)-1)<<MJENC_REG_MJENC_DBG_SEL_POS))

/* 0x1FC : mjpeg_dummy_reg */
#define MJENC_DUMMY_REG_OFFSET                                  (0x1FC)
#define MJENC_DUMMY_REG                                         MJENC_DUMMY_REG
#define MJENC_DUMMY_REG_POS                                     (0U)
#define MJENC_DUMMY_REG_LEN                                     (32U)
#define MJENC_DUMMY_REG_MSK                                     (((1U<<MJENC_DUMMY_REG_LEN)-1)<<MJENC_DUMMY_REG_POS)
#define MJENC_DUMMY_REG_UMSK                                    (~(((1U<<MJENC_DUMMY_REG_LEN)-1)<<MJENC_DUMMY_REG_POS))


struct  mjpeg_reg {
    /* 0x0 : mjpeg_control_1 */
    union {
        struct {
            uint32_t reg_mjpeg_enable               :  1; /* [    0],        r/w,        0x0 */
            uint32_t reg_mjpeg_bit_order            :  1; /* [    1],        r/w,        0x1 */
            uint32_t reg_order_u_even               :  1; /* [    2],        r/w,        0x1 */
            uint32_t reserved_3                     :  1; /* [    3],       rsvd,        0x0 */
            uint32_t reg_q_mode                     :  3; /* [ 6: 4],        r/w,        0x2 */
            uint32_t reserved_7                     :  1; /* [    7],       rsvd,        0x0 */
            uint32_t reg_w_xlen                     :  3; /* [10: 8],        r/w,        0x3 */
            uint32_t reg_last_hf_blk_dmy            :  1; /* [   11],        r/w,        0x0 */
            uint32_t reserved_12_15                 :  4; /* [15:12],       rsvd,        0x0 */
            uint32_t reg_frame_wblk                 :  8; /* [23:16],        r/w,        0xf */
            uint32_t reg_frame_hblk                 :  8; /* [31:24],        r/w,       0x14 */
        }BF;
        uint32_t WORD;
    } mjpeg_control_1;

    /* 0x4 : mjpeg_control_2 */
    union {
        struct {
            uint32_t reg_sw_frame                   :  5; /* [ 4: 0],        r/w,        0x0 */
            uint32_t reserved_5_7                   :  3; /* [ 7: 5],       rsvd,        0x0 */
            uint32_t reg_mjpeg_sw_mode              :  1; /* [    8],        r/w,        0x0 */
            uint32_t reg_mjpeg_sw_run               :  1; /* [    9],        r/w,        0x0 */
            uint32_t reserved_10_11                 :  2; /* [11:10],       rsvd,        0x0 */
            uint32_t reg_yy_dvp2axi_sel             :  2; /* [13:12],        r/w,        0x0 */
            uint32_t reg_uv_dvp2axi_sel             :  2; /* [15:14],        r/w,        0x1 */
            uint32_t reg_mjpeg_wait_cycle           : 16; /* [31:16],        r/w,      0x400 */
        }BF;
        uint32_t WORD;
    } mjpeg_control_2;

    /* 0x08 : mjpeg_yy_frame_addr */
    union {
        struct {
            uint32_t reg_yy_addr_start              : 32; /* [31: 0],        r/w, 0x80000000 */
        }BF;
        uint32_t WORD;
    } mjpeg_yy_frame_addr;

    /* 0x0C : mjpeg_uv_frame_addr */
    union {
        struct {
            uint32_t reg_uv_addr_start              : 32; /* [31: 0],        r/w, 0x80000000 */
        }BF;
        uint32_t WORD;
    } mjpeg_uv_frame_addr;

    /* 0x10 : mjpeg_yuv_mem */
    union {
        struct {
            uint32_t reg_yy_mem_hblk                : 13; /* [12: 0],        r/w,        0x2 */
            uint32_t reserved_13_15                 :  3; /* [15:13],       rsvd,        0x0 */
            uint32_t reg_uv_mem_hblk                : 13; /* [28:16],        r/w,        0x2 */
            uint32_t reserved_29_31                 :  3; /* [31:29],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_yuv_mem;

    /* 0x14 : jpeg_frame_addr */
    union {
        struct {
            uint32_t reg_w_addr_start               : 32; /* [31: 0],        r/w, 0x80400000 */
        }BF;
        uint32_t WORD;
    } jpeg_frame_addr;

    /* 0x18 : jpeg_store_memory */
    union {
        struct {
            uint32_t reg_w_burst_cnt                : 32; /* [31: 0],        r/w,     0x4000 */
        }BF;
        uint32_t WORD;
    } jpeg_store_memory;

    /* 0x1C : mjpeg_control_3 */
    union {
        struct {
            uint32_t reg_int_normal_en              :  1; /* [    0],        r/w,        0x1 */
            uint32_t reg_int_cam_en                 :  1; /* [    1],        r/w,        0x1 */
            uint32_t reg_int_mem_en                 :  1; /* [    2],        r/w,        0x0 */
            uint32_t reg_int_frame_en               :  1; /* [    3],        r/w,        0x0 */
            uint32_t sts_normal_int                 :  1; /* [    4],          r,        0x0 */
            uint32_t sts_cam_int                    :  1; /* [    5],          r,        0x0 */
            uint32_t sts_mem_int                    :  1; /* [    6],          r,        0x0 */
            uint32_t sts_frame_int                  :  1; /* [    7],          r,        0x0 */
            uint32_t mjpeg_idle                     :  1; /* [    8],          r,        0x1 */
            uint32_t mjpeg_func                     :  1; /* [    9],          r,        0x0 */
            uint32_t mjpeg_wait                     :  1; /* [   10],          r,        0x0 */
            uint32_t mjpeg_flsh                     :  1; /* [   11],          r,        0x0 */
            uint32_t mjpeg_mans                     :  1; /* [   12],          r,        0x0 */
            uint32_t mjpeg_manf                     :  1; /* [   13],          r,        0x0 */
            uint32_t axi_read_idle                  :  1; /* [   14],          r,        0x0 */
            uint32_t axi_write_idle                 :  1; /* [   15],          r,        0x0 */
            uint32_t reg_frame_cnt_trgr_int         :  5; /* [20:16],        r/w,        0x0 */
            uint32_t reg_int_idle_en                :  1; /* [   21],        r/w,        0x0 */
            uint32_t sts_idle_int                   :  1; /* [   22],          r,        0x0 */
            uint32_t reserved_23                    :  1; /* [   23],       rsvd,        0x0 */
            uint32_t frame_valid_cnt                :  5; /* [28:24],          r,        0x0 */
            uint32_t reserved_29_31                 :  3; /* [31:29],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_control_3;

    /* 0x20 : mjpeg_frame_fifo_pop */
    union {
        struct {
            uint32_t rfifo_pop                      :  1; /* [    0],        w1p,        0x0 */
            uint32_t reserved_1_7                   :  7; /* [ 7: 1],       rsvd,        0x0 */
            uint32_t reg_int_clr                    :  1; /* [    8],        w1p,        0x0 */
            uint32_t reserved_9_31                  : 23; /* [31: 9],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_frame_fifo_pop;

    /* 0x24  reserved */
    uint8_t RESERVED0x24[28];

    /* 0x40 : mjpeg_Y_frame_read_status_1 */
    union {
        struct {
            uint32_t yy_mem_hblk_r                  : 13; /* [12: 0],          r,        0x0 */
            uint32_t reserved_13_15                 :  3; /* [15:13],       rsvd,        0x0 */
            uint32_t yy_frm_hblk_r                  : 13; /* [28:16],          r,        0x0 */
            uint32_t reserved_29_31                 :  3; /* [31:29],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_Y_frame_read_status_1;

    /* 0x44 : mjpeg_Y_frame_read_status_2 */
    union {
        struct {
            uint32_t yy_wblk_r                      : 13; /* [12: 0],          r,        0x0 */
            uint32_t reserved_13_15                 :  3; /* [15:13],       rsvd,        0x0 */
            uint32_t yy_mem_rnd_r                   :  8; /* [23:16],          r,        0x0 */
            uint32_t yy_frm_cnt_r                   :  8; /* [31:24],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_Y_frame_read_status_2;

    /* 0x48 : mjpeg_Y_frame_write_status */
    union {
        struct {
            uint32_t yy_mem_hblk_w                  : 13; /* [12: 0],          r,        0x0 */
            uint32_t reserved_13_15                 :  3; /* [15:13],       rsvd,        0x0 */
            uint32_t yy_mem_rnd_w                   :  8; /* [23:16],          r,        0x0 */
            uint32_t yy_frm_cnt_w                   :  8; /* [31:24],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_Y_frame_write_status;

    /* 0x4C : mjpeg_UV_frame_read_status_1 */
    union {
        struct {
            uint32_t uv_mem_hblk_r                  : 13; /* [12: 0],          r,        0x0 */
            uint32_t reserved_13_15                 :  3; /* [15:13],       rsvd,        0x0 */
            uint32_t uv_frm_hblk_r                  : 13; /* [28:16],          r,        0x0 */
            uint32_t reserved_29_31                 :  3; /* [31:29],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_UV_frame_read_status_1;

    /* 0x50 : mjpeg_UV_frame_read_status_2 */
    union {
        struct {
            uint32_t uv_wblk_r                      : 13; /* [12: 0],          r,        0x0 */
            uint32_t reserved_13_15                 :  3; /* [15:13],       rsvd,        0x0 */
            uint32_t uv_mem_rnd_r                   :  8; /* [23:16],          r,        0x0 */
            uint32_t uv_frm_cnt_r                   :  8; /* [31:24],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_UV_frame_read_status_2;

    /* 0x54 : mjpeg_UV_frame_write_status */
    union {
        struct {
            uint32_t uv_mem_hblk_w                  : 13; /* [12: 0],          r,        0x0 */
            uint32_t reserved_13_15                 :  3; /* [15:13],       rsvd,        0x0 */
            uint32_t uv_mem_rnd_w                   :  8; /* [23:16],          r,        0x0 */
            uint32_t uv_frm_cnt_w                   :  8; /* [31:24],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_UV_frame_write_status;

    /* 0x58  reserved */
    uint8_t RESERVED0x58[40];

    /* 0x80 : mjpeg_start_addr0 */
    union {
        struct {
            uint32_t frame_start_addr_0             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr0;

    /* 0x84 : mjpeg_bit_cnt0 */
    union {
        struct {
            uint32_t frame_bit_cnt_0                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt0;

    /* 0x88 : mjpeg_start_addr1 */
    union {
        struct {
            uint32_t frame_start_addr_1             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr1;

    /* 0x8C : mjpeg_bit_cnt1 */
    union {
        struct {
            uint32_t frame_bit_cnt_1                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt1;

    /* 0x90 : mjpeg_start_addr2 */
    union {
        struct {
            uint32_t frame_start_addr_2             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr2;

    /* 0x94 : mjpeg_bit_cnt2 */
    union {
        struct {
            uint32_t frame_bit_cnt_2                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt2;

    /* 0x98 : mjpeg_start_addr3 */
    union {
        struct {
            uint32_t frame_start_addr_3             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr3;

    /* 0x9C : mjpeg_bit_cnt3 */
    union {
        struct {
            uint32_t frame_bit_cnt_3                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt3;

    /* 0xA0 : mjpeg_start_addr4 */
    union {
        struct {
            uint32_t frame_start_addr_4             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr4;

    /* 0xA4 : mjpeg_bit_cnt4 */
    union {
        struct {
            uint32_t frame_bit_cnt_4                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt4;

    /* 0xA8 : mjpeg_start_addr5 */
    union {
        struct {
            uint32_t frame_start_addr_5             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr5;

    /* 0xAC : mjpeg_bit_cnt5 */
    union {
        struct {
            uint32_t frame_bit_cnt_5                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt5;

    /* 0xB0 : mjpeg_start_addr6 */
    union {
        struct {
            uint32_t frame_start_addr_6             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr6;

    /* 0xB4 : mjpeg_bit_cnt6 */
    union {
        struct {
            uint32_t frame_bit_cnt_6                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt6;

    /* 0xB8 : mjpeg_start_addr7 */
    union {
        struct {
            uint32_t frame_start_addr_7             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr7;

    /* 0xBC : mjpeg_bit_cnt7 */
    union {
        struct {
            uint32_t frame_bit_cnt_7                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt7;

    /* 0xC0 : mjpeg_start_addr_8 */
    union {
        struct {
            uint32_t frame_start_addr_8             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr_8;

    /* 0xC4 : mjpeg_bit_cnt_8 */
    union {
        struct {
            uint32_t frame_bit_cnt_8                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt_8;

    /* 0xC8 : mjpeg_start_addr_9 */
    union {
        struct {
            uint32_t frame_start_addr_9             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr_9;

    /* 0xCC : mjpeg_bit_cnt_9 */
    union {
        struct {
            uint32_t frame_bit_cnt_9                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt_9;

    /* 0xD0 : mjpeg_start_addr_a */
    union {
        struct {
            uint32_t frame_start_addr_a             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr_a;

    /* 0xD4 : mjpeg_bit_cnt_a */
    union {
        struct {
            uint32_t frame_bit_cnt_a                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt_a;

    /* 0xD8 : mjpeg_start_addr_b */
    union {
        struct {
            uint32_t frame_start_addr_b             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr_b;

    /* 0xDC : mjpeg_bit_cnt_b */
    union {
        struct {
            uint32_t frame_bit_cnt_b                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt_b;

    /* 0xE0 : mjpeg_start_addr_c */
    union {
        struct {
            uint32_t frame_start_addr_c             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr_c;

    /* 0xE4 : mjpeg_bit_cnt_c */
    union {
        struct {
            uint32_t frame_bit_cnt_c                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt_c;

    /* 0xE8 : mjpeg_start_addr_d */
    union {
        struct {
            uint32_t frame_start_addr_d             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr_d;

    /* 0xEC : mjpeg_bit_cnt_d */
    union {
        struct {
            uint32_t frame_bit_cnt_d                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt_d;

    /* 0xF0 : mjpeg_start_addr_e */
    union {
        struct {
            uint32_t frame_start_addr_e             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr_e;

    /* 0xF4 : mjpeg_bit_cnt_e */
    union {
        struct {
            uint32_t frame_bit_cnt_e                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt_e;

    /* 0xF8 : mjpeg_start_addr_f */
    union {
        struct {
            uint32_t frame_start_addr_f             : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_start_addr_f;

    /* 0xFC : mjpeg_bit_cnt_f */
    union {
        struct {
            uint32_t frame_bit_cnt_f                : 32; /* [31: 0],          r,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_bit_cnt_f;

    /* 0x100  reserved */
    uint8_t RESERVED0x100[240];

    /* 0x1F0 : mjpeg_debug */
    union {
        struct {
            uint32_t reg_mjpeg_dbg_en               :  1; /* [    0],        r/w,        0x0 */
            uint32_t reserved_1_3                   :  3; /* [ 3: 1],       rsvd,        0x0 */
            uint32_t reg_mjpeg_dbg_sel              :  4; /* [ 7: 4],        r/w,        0x0 */
            uint32_t reserved_8_31                  : 24; /* [31: 8],       rsvd,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_debug;

    /* 0x1f4  reserved */
    uint8_t RESERVED0x1f4[8];

    /* 0x1FC : mjpeg_dummy_reg */
    union {
        struct {
            uint32_t mjpeg_dummy_reg                : 32; /* [31: 0],        r/w,        0x0 */
        }BF;
        uint32_t WORD;
    } mjpeg_dummy_reg;

};

typedef volatile struct mjpeg_reg mjpeg_reg_t;


#endif  /* __MJENC_REG_H__ */
