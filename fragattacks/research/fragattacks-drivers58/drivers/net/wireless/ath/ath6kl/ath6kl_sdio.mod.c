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
	{ 0x1de1db68, "ath6kl_core_destroy" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xbaeedff2, "ath6kl_hif_intr_bh_handler" },
	{ 0xc0c71d37, "ath6kl_core_cleanup" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x91cfb84a, "ath6kl_hif_rw_comp_handler" },
	{ 0x3a1de7fc, "ath6kl_core_create" },
	{ 0xb5c37333, "sdio_writesb" },
	{ 0x30a0f8e6, "sdio_enable_func" },
	{ 0x830fb7ac, "sdio_claim_irq" },
	{ 0xc870ca72, "mmc_wait_for_cmd" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb80b9f5, "sdio_get_host_pm_caps" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x45de4666, "mmc_wait_for_req" },
	{ 0xb9a689dd, "ath6kl_err" },
	{ 0x1354043d, "ath6kl_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x531b604e, "__virt_addr_valid" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xafc04c9f, "mmc_set_data_timeout" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x14850ee2, "ath6kl_cfg80211_suspend" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x36d53fb4, "sdio_readsb" },
	{ 0x8e5a7512, "sdio_unregister_driver" },
	{ 0x402bd75c, "sdio_set_host_pm_flags" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xee2cbfb, "ath6kl_cfg80211_resume" },
	{ 0xab092e32, "ath6kl_stop_txrx" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3c3ab3e, "sdio_release_irq" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x18e32db4, "ath6kl_core_init" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdfb14baf, "sdio_memcpy_toio" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa0fd21ca, "sdio_register_driver" },
	{ 0x7677bdc5, "sdio_memcpy_fromio" },
	{ 0x7a7cfeb0, "sdio_claim_host" },
	{ 0xd7664808, "sdio_set_block_size" },
	{ 0x78a5a723, "sdio_disable_func" },
	{ 0xe0e5f468, "sdio_release_host" },
};

MODULE_INFO(depends, "ath6kl_core,compat");

MODULE_ALIAS("sdio:c*v0271d0300*");
MODULE_ALIAS("sdio:c*v0271d0301*");
MODULE_ALIAS("sdio:c*v0271d0400*");
MODULE_ALIAS("sdio:c*v0271d0401*");
MODULE_ALIAS("sdio:c*v0271d0402*");
MODULE_ALIAS("sdio:c*v0271d0418*");
MODULE_ALIAS("sdio:c*v0271d0419*");

MODULE_INFO(srcversion, "F2A5137E8F6DAFD31AC940E");
