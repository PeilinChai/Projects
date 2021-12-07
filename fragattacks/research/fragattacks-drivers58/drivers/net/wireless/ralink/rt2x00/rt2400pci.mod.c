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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe09a23a6, "module_layout" },
	{ 0x10f31735, "rt2x00mac_tx_frames_pending" },
	{ 0x4f171d36, "rt2x00mac_get_ringparam" },
	{ 0x300612f5, "rt2x00mac_get_antenna" },
	{ 0x32713642, "rt2x00mac_set_antenna" },
	{ 0x4b866f63, "rt2x00mac_flush" },
	{ 0xdd80d5a8, "rt2x00mac_rfkill_poll" },
	{ 0x818ae197, "rt2x00mac_get_stats" },
	{ 0xe9fc226c, "rt2x00mac_sw_scan_complete" },
	{ 0xed8c8d71, "rt2x00mac_sw_scan_start" },
	{ 0x81ee4b96, "rt2x00mac_configure_filter" },
	{ 0xc5446535, "rt2x00mac_bss_info_changed" },
	{ 0xc5cc5fa2, "rt2x00mac_config" },
	{ 0x974dc647, "rt2x00mac_remove_interface" },
	{ 0x821fb385, "rt2x00mac_add_interface" },
	{ 0xfbd593cf, "rt2x00mac_stop" },
	{ 0xe2f61445, "rt2x00mac_start" },
	{ 0x2362c5fd, "rt2x00mac_tx" },
	{ 0xda0fdab, "rt2x00mmio_flush_queue" },
	{ 0x35ad458b, "rt2x00mmio_uninitialize" },
	{ 0xa5f1c787, "rt2x00mmio_initialize" },
	{ 0x1770c86d, "rt2x00pci_resume" },
	{ 0xbeb60804, "rt2x00pci_suspend" },
	{ 0x9f4d3cb0, "rt2x00pci_remove" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9bcc1850, "rt2x00lib_beacondone" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xf43e904a, "pv_ops" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x601412c2, "rt2x00mmio_rxdone" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x7f3591a, "rt2x00lib_set_mac_address" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0x4f08198d, "rt2x00queue_get_entry" },
	{ 0x29b26fa0, "rt2x00lib_txdone" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x74618391, "rt2x00queue_map_txskb" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6d3395de, "rt2x00mmio_regbusy_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x954b19f2, "rt2x00mac_conf_tx" },
	{ 0xc4ffc71d, "rt2x00pci_probe" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2x00mmio,rt2x00pci,compat,eeprom_93cx6");

MODULE_ALIAS("pci:v00001814d00000101sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D661BE69A213903DB769AB6");
