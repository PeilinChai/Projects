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
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xbcdf36cf, "mwifiex_cancel_hs" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf7545937, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0x8702bdcc, "mwifiex_write_data_complete" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd756ae3a, "mwifiex_process_sleep_confirm_resp" },
	{ 0x91c4204, "mwifiex_queue_main_work" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x904f49ac, "_mwifiex_dbg" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdf8d310, "mwifiex_add_card" },
	{ 0x46adf060, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xc6c4403f, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd358444d, "skb_pull" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0x274be093, "usb_submit_urb" },
	{ 0xbf5cf4fe, "usb_get_dev" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x52b3f42d, "usb_reset_device" },
	{ 0x25d2630d, "usb_bulk_msg" },
	{ 0x63445814, "usb_put_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x2af8176, "mwifiex_process_hs_config" },
	{ 0x37a0cba, "kfree" },
	{ 0x84de2449, "mwifiex_multi_chan_resync" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbebae78c, "mwifiex_fw_dump_event" },
	{ 0x17a49bf7, "usb_register_driver" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0x1724c1a9, "mwifiex_deauthenticate_all" },
	{ 0x6a98442d, "mwifiex_remove_card" },
	{ 0x53f09a70, "mwifiex_enable_hs" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4319b67, "skb_put" },
	{ 0x6fae0ddd, "devm_kmalloc" },
	{ 0x922f0fd4, "mwifiex_init_shutdown_fw" },
	{ 0x3c44f617, "usb_free_urb" },
	{ 0xe4eb5988, "usb_alloc_urb" },
};

MODULE_INFO(depends, "compat,mwifiex");

MODULE_ALIAS("usb:v1286p2041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2042d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2044d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2049d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ed*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "06E4E03AFC53E5E8B2425CD");
