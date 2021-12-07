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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xaf5dfeb9, "ath10k_core_unregister" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x3953677a, "napi_disable" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x38e2a1c2, "napi_schedule_prep" },
	{ 0x32be84c, "ath10k_core_register" },
	{ 0xb5c37333, "sdio_writesb" },
	{ 0x30a0f8e6, "sdio_enable_func" },
	{ 0x830fb7ac, "sdio_claim_irq" },
	{ 0x317f5f1a, "mmc_hw_reset" },
	{ 0xc870ca72, "mmc_wait_for_cmd" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa474fb3a, "ath10k_core_destroy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb80b9f5, "sdio_get_host_pm_caps" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x7f885dc, "sdio_writel" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6580340f, "ath10k_mac_tx_push_pending" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1da019b, "ath10k_core_create" },
	{ 0x3591df8e, "sdio_readl" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x990c16dc, "netif_napi_add" },
	{ 0xd358444d, "skb_pull" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x36d53fb4, "sdio_readsb" },
	{ 0x8e5a7512, "sdio_unregister_driver" },
	{ 0x402bd75c, "sdio_set_host_pm_flags" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0x30e7d1a6, "ath10k_htc_process_trailer" },
	{ 0x20f8a4e3, "__napi_schedule" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3c3ab3e, "sdio_release_irq" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0xa567947d, "ath10k_err" },
	{ 0x92c5808b, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa57da6, "ath10k_htt_rx_hl_indication" },
	{ 0x118ff2e2, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x4bccf599, "__netif_napi_del" },
	{ 0xdfb14baf, "sdio_memcpy_toio" },
	{ 0x70ac4b72, "ath10k_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0xa0fd21ca, "sdio_register_driver" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x7677bdc5, "sdio_memcpy_fromio" },
	{ 0x7a7cfeb0, "sdio_claim_host" },
	{ 0x37457e54, "ath10k_htc_notify_tx_completion" },
	{ 0x4319b67, "skb_put" },
	{ 0x6fae0ddd, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd7664808, "sdio_set_block_size" },
	{ 0x78a5a723, "sdio_disable_func" },
	{ 0xe0e5f468, "sdio_release_host" },
};

MODULE_INFO(depends, "ath10k_core,compat");

MODULE_ALIAS("sdio:c*v0271d050A*");
MODULE_ALIAS("sdio:c*v0271d0701*");

MODULE_INFO(srcversion, "1534418F9E5C8DB00B01AD2");
