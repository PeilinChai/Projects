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
	{ 0xe1d6f31e, "sdio_writeb" },
	{ 0x4ebfb135, "sdio_readb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xbcdf36cf, "mwifiex_cancel_hs" },
	{ 0xb5c37333, "sdio_writesb" },
	{ 0x30a0f8e6, "sdio_enable_func" },
	{ 0x830fb7ac, "sdio_claim_irq" },
	{ 0x317f5f1a, "mmc_hw_reset" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe530496b, "mwifiex_disable_auto_ds" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd756ae3a, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0x92f3891b, "mwifiex_main_process" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4c1f9560, "mwifiex_prepare_fw_dump_info" },
	{ 0xb80b9f5, "sdio_get_host_pm_caps" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x904f49ac, "_mwifiex_dbg" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xdf8d310, "mwifiex_add_card" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x852474cf, "mwifiex_shutdown_sw" },
	{ 0xd358444d, "skb_pull" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0x36d53fb4, "sdio_readsb" },
	{ 0x8e5a7512, "sdio_unregister_driver" },
	{ 0x402bd75c, "sdio_set_host_pm_flags" },
	{ 0x6fe6deed, "mwifiex_dnld_fw" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc3c3ab3e, "sdio_release_irq" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x118ff2e2, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x23cbe63, "mwifiex_reinit_sw" },
	{ 0x3e969b6c, "mwifiex_handle_rx_packet" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1724c1a9, "mwifiex_deauthenticate_all" },
	{ 0x6a98442d, "mwifiex_remove_card" },
	{ 0x53f09a70, "mwifiex_enable_hs" },
	{ 0xf19dd05e, "mwifiex_upload_device_dump" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0xa0fd21ca, "sdio_register_driver" },
	{ 0x7a7cfeb0, "sdio_claim_host" },
	{ 0x8fdd7339, "mwifiex_drv_info_dump" },
	{ 0x4319b67, "skb_put" },
	{ 0x6fae0ddd, "devm_kmalloc" },
	{ 0x922f0fd4, "mwifiex_init_shutdown_fw" },
	{ 0xd7664808, "sdio_set_block_size" },
	{ 0x78a5a723, "sdio_disable_func" },
	{ 0xe0e5f468, "sdio_release_host" },
};

MODULE_INFO(depends, "compat,mwifiex");

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9145*");
MODULE_ALIAS("sdio:c*v02DFd9149*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "2A0327CE1270F5B524FC555");
