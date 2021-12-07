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
	{ 0x2d3385d3, "system_wq" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeea2f722, "__pm_runtime_idle" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd3a2f59f, "lbs_resume" },
	{ 0xb5c37333, "sdio_writesb" },
	{ 0x30a0f8e6, "sdio_enable_func" },
	{ 0x830fb7ac, "sdio_claim_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x85450c37, "lbs_stop_card" },
	{ 0xc2177cc7, "__pm_runtime_resume" },
	{ 0xdfa96893, "netdev_alert" },
	{ 0xf5e0129c, "__lbs_cmd" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb80b9f5, "sdio_get_host_pm_caps" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa3a75d20, "lbs_start_card" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x4e57ada0, "lbs_queue_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa432eb6a, "lbs_get_firmware_async" },
	{ 0x2895b435, "lbs_cmd_copyback" },
	{ 0x3368b8b7, "lbs_suspend" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x36d53fb4, "sdio_readsb" },
	{ 0x8e5a7512, "sdio_unregister_driver" },
	{ 0x49a74d0f, "lbs_remove_card" },
	{ 0x25720659, "sdio_f0_writeb" },
	{ 0x402bd75c, "sdio_set_host_pm_flags" },
	{ 0x4a401897, "lbs_process_rxed_packet" },
	{ 0xeb80f28, "_dev_info" },
	{ 0xc3c3ab3e, "sdio_release_irq" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x2bf62604, "lbs_host_to_card_done" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xa5584a62, "sdio_align_size" },
	{ 0x79953ed1, "lbs_add_card" },
	{ 0x118ff2e2, "sdio_f0_readb" },
	{ 0x5bc0384c, "mmc_add_host" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd0d717c3, "netdev_err" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xee92a51b, "mmc_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa0fd21ca, "sdio_register_driver" },
	{ 0x7a7cfeb0, "sdio_claim_host" },
	{ 0x4319b67, "skb_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd7664808, "sdio_set_block_size" },
	{ 0x78a5a723, "sdio_disable_func" },
	{ 0xe0e5f468, "sdio_release_host" },
	{ 0xb29ab858, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "compat,libertas");

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "DA50F5FBFC198A9BD145DC9");
