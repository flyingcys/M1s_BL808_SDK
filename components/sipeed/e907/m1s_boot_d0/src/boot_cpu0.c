#include "boot_cpu0.h"

#include <FreeRTOS.h>
#include <aos/kernel.h>
#include <aos/yloop.h>
#include <bl808_glb.h>
#include <bl808_glb_gpio.h>
#include <bl808_tzc_sec.h>
#include <bl_mm_clock.h>
#include <bl_mtd.h>
#include <bl_psram.h>
#include <bl_romfs.h>
#include <bl_sys.h>
#include <bl_timer.h>
#include <bl_wifi.h>
#include <cli.h>
#include <core_rv32.h>
#include <fs/vfs_romfs.h>
#include <getopt.h>
#include <hal_sys.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <task.h>
#include <vfs.h>

#include "l2_sram.h"

#define C906_START_ADDR (0x50100000)

void mm_clk_config(void)
{
    bl_mm_xclk_config(XCLK_XTAL);                /*xclk select XTAL*/
    bl_mm_bclk_config(BCLK_MUXPLL_160M);         /*bclk1x select 160M*/
    bl_mm_cpu_root_clk_config(CPU_ROOT_CLK_PLL); /*cpu root clk select PLL*/
    bl_mm_cpu_clk_config(CPU_CLK_MUXPLL_400M);   /*cpu pll select 400M*/
    bl_mm_uart_clk_config(UART_CLK_XCLK1);       /*uart select xclk and xclk select XTAL*/
    bl_mm_i2c_clk_config(I2C_CLK_XCLK);          /*i2c select xclk and xclk select XTAL*/
}
void c906_bringup(uint32_t start_addr)
{
#if 0
    // 留着这里的代码，加载产测固件时再修改
    int fd = -1;
    romfs_filebuf_t filebuf;
    fd = aos_open("/romfs/c906.bin", 0);
    aos_ioctl(fd, IOCTL_ROMFS_GET_FILEBUF, (long unsigned int)&filebuf);
    if (fd < 0) {
        printf("/romfs/c906.bin not found!\r\n");
        vTaskDelete(NULL);
        return;
    }

    aos_close(fd);
    printf("Found file %s. XIP Addr %p, len %lu\r\n",
            "/romfs/c906.bin",
            filebuf.buf,
            (unsigned long)filebuf.bufsize);
    memcpy((void *)start_addr, filebuf.buf, (unsigned long)filebuf.bufsize);
    csi_dcache_clean_range((uint32_t *)start_addr, (unsigned long)filebuf.bufsize);
#else
    // uint32_t c906_addr = 0, c906_size = 0;
    bl_mtd_handle_t handle_d0fw;
    bl_mtd_info_t info;
    int ret = -1;

    if ((ret = bl_mtd_open("D0FW", &handle_d0fw, BL_MTD_OPEN_FLAG_BUSADDR))) {
        printf("[EF] [PART] [XIP] error when get D0FW partition %d\r\n", ret);
        return;
    }
    memset(&info, 0, sizeof(info));
    bl_mtd_info(handle_d0fw, &info);

    if (0 == info.xip_addr) {
        printf("D0FW has no XIP-Addr\r\n");
        return;
    }
    // hal_boot2_partition_bus_addr_active("D0FW", &c906_addr, &c906_size);
    // printf("D0FW addr:%#lx size:%#lx\r\n", c906_addr, c906_size);
    printf("D0FW addr:%#lx size:%#lx\r\n", (uint32_t)info.xip_addr, (uint32_t)info.size);
    memcpy((void *)start_addr, (void *)info.xip_addr, (unsigned long)info.size);
    csi_dcache_clean_range((uint32_t *)start_addr, (unsigned long)info.size);
    // memcpy((void *)start_addr, (void *)c906_addr, (unsigned long)c906_size);
    // csi_dcache_clean_range((uint32_t *)start_addr, (unsigned long)c906_size);
#endif

    /* boot c906 */
    hal_enable_cpu0();
    hal_halt_cpu0();
    mm_clk_config();
    l2_sram_vram_config();
    bl_mtimer_c906_clock_init();
    hal_boot_cpu0(start_addr);
    bl_mm_clk_dump();
}

static void c906_bringup_entry(void *arg)
{
    c906_bringup(C906_START_ADDR);

    vTaskDelete(NULL);
}

static void cmd_halt_cpu0(char *buf, int len, int argc, char **argv) { hal_halt_cpu0(); }

static void cmd_release_cpu0(char *buf, int len, int argc, char **argv) { hal_release_cpu0(); }

static void cmd_jtag_cpu0(char *buf, int len, int argc, char **argv) { bl_sys_enabe_jtag(1); }

static void cmd_c906_bringup(char *buf, int len, int argc, char **argv)
{
    xTaskCreate(c906_bringup_entry, (char *)"bootc906", 2048, NULL, 10, NULL);
}

const static struct cli_command cmds_user[] STATIC_CLI_CMD_ATTRIBUTE = {
    {"halt_cpu0", "cpu0 halt", cmd_halt_cpu0},
    {"jtag_cpu0", "cpu0 release", cmd_jtag_cpu0},
    {"release_cpu0", "cpu0 release", cmd_release_cpu0},
    {"c906", "setup c906", cmd_c906_bringup},
};

int boot_cpu0_cli_init(void)
{
    // static command(s) do NOT need to call aos_cli_register_command(s) to register.
    // However, calling aos_cli_register_command(s) here is OK but is of no effect as cmds_user are included in cmds
    // list.
    // XXX NOTE: Calling this *empty* function is necessary to make cmds_user in this file to be kept in the final link.
    // return aos_cli_register_commands(cmds_user, sizeof(cmds_user)/sizeof(cmds_user[0]));
    return 0;
}
