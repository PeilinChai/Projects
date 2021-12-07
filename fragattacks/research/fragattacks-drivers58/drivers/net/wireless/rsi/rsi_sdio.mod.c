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
	{ 0x87cfbe9d, "rsi_91x_init" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x26cc73c3, "complete_and_exit" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xb5c37333, "sdio_writesb" },
	{ 0x30a0f8e6, "sdio_enable_func" },
	{ 0xb1614814, "rsi_config_wowlan" },
	{ 0x830fb7ac, "sdio_claim_irq" },
	{ 0xc870ca72, "mmc_wait_for_cmd" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc58b3926, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcd173710, "rsi_dbg" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xce261b36, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x2c79d4a6, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xdd8932b9, "kthread_stop" },
	{ 0x8c711a49, "rsi_mac80211_detach" },
	{ 0xd51f36eb, "rsi_read_pkt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x36d53fb4, "sdio_readsb" },
	{ 0x8e5a7512, "sdio_unregister_driver" },
	{ 0x25720659, "sdio_f0_writeb" },
	{ 0x402bd75c, "sdio_set_host_pm_flags" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0xc3c3ab3e, "sdio_release_irq" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x118ff2e2, "sdio_f0_readb" },
	{ 0xccbfa2b7, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0x676e9397, "rsi_hal_device_init" },
	{ 0xa0fd21ca, "sdio_register_driver" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0xe03fcc42, "param_ops_ushort" },
	{ 0x7a7cfeb0, "sdio_claim_host" },
	{ 0x4319b67, "skb_put" },
	{ 0xf482288e, "rsi_91x_deinit" },
	{ 0xd7664808, "sdio_set_block_size" },
	{ 0xdaf4bb2d, "rsi_bt_ops" },
	{ 0x78a5a723, "sdio_disable_func" },
	{ 0xe0e5f468, "sdio_release_host" },
};

MODULE_INFO(depends, "rsi_91x,compat,btrsi");

MODULE_ALIAS("sdio:c*v041Bd9330*");
MODULE_ALIAS("sdio:c*v041Bd9116*");

MODULE_INFO(srcversion, "3CFCA74CC0A42173A6DE14E");
