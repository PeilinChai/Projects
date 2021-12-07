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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x46adf060, "usb_deregister" },
	{ 0x17a49bf7, "usb_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x62aeab48, "ieee80211_rx_irqsafe" },
	{ 0xb0e602eb, "memmove" },
	{ 0xd5015f8f, "ieee80211_get_hdrlen_from_skb" },
	{ 0x4319b67, "skb_put" },
	{ 0xfc11ad12, "__dev_kfree_skb_irq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0x25d2630d, "usb_bulk_msg" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x3d83acda, "usb_alloc_coherent" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0x91c1b488, "ieee80211_tx_status_irqsafe" },
	{ 0xd358444d, "skb_pull" },
	{ 0x2758776d, "ieee80211_free_txskb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6c4403f, "skb_push" },
	{ 0xe4eb5988, "usb_alloc_urb" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x5463afa5, "ieee80211_wake_queues" },
	{ 0x76f1ab71, "ieee80211_stop_queues" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x5772d5a6, "ieee80211_find_sta" },
	{ 0x82605ff6, "ieee80211_queue_delayed_work" },
	{ 0x20b266ed, "ieee80211_queue_work" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa6257a2f, "complete" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0xb70b49d7, "__alloc_skb" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x274be093, "usb_submit_urb" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0x3c44f617, "usb_free_urb" },
	{ 0x406100ae, "usb_free_coherent" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf7545937, "usb_kill_urb" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "compat,mac80211,cfg80211");

MODULE_ALIAS("usb:v168Cp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v168Cp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3A05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0713d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0710d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp160Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp160Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16ABp7812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p5F00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p5F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4506d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4507d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3205d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3206d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0826d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0827d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0828d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0829d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p4250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p4251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1385p5F03d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "66A03465C0E04152227BADD");
