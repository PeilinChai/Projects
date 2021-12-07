#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe09a23a6, "module_layout" },
	{ 0x6226eac5, "rt2800_disable_wpdma" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9bcc1850, "rt2x00lib_beacondone" },
	{ 0x2f406684, "rt2800_txdone" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x73234433, "rt2800_config" },
	{ 0x852e91d6, "rt2800_get_txwi_rxwi_size" },
	{ 0xf43e904a, "pv_ops" },
	{ 0x26d8ca14, "rt2x00lib_pretbtt" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x1664bf7b, "rt2800_wait_wpdma_ready" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9a6dae8c, "rt2800_process_rxwi" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd6d740bb, "rt2800_txdone_nostatus" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x2c90d5a1, "rt2800_probe_hw" },
	{ 0xc4ea14c6, "rt2800_txstatus_timeout" },
	{ 0x4f08198d, "rt2x00queue_get_entry" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x601412c2, "rt2x00mmio_rxdone" },
	{ 0x1b906fb7, "rt2800_txstatus_pending" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf5fc39a0, "rt2800_enable_radio" },
};

MODULE_INFO(depends, "rt2800lib,rt2x00lib,rt2x00mmio");


MODULE_INFO(srcversion, "9CCF851216414F0AB259EFA");
