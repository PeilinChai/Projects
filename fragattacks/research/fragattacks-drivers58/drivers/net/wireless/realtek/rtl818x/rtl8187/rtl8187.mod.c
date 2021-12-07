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
	{ 0xb0bf5e90, "ieee80211_rts_duration" },
	{ 0x884deb9d, "eeprom_93cx6_read" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x62aeab48, "ieee80211_rx_irqsafe" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd4950484, "ieee80211_beacon_get_tim" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x20f11f78, "wiphy_rfkill_start_polling" },
	{ 0xf6187122, "skb_unlink" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0xb275c843, "usb_unanchor_urb" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x46adf060, "usb_deregister" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa92b201a, "led_classdev_register_ext" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0xea25b7f0, "usb_control_msg" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xfc11ad12, "__dev_kfree_skb_irq" },
	{ 0xd358444d, "skb_pull" },
	{ 0xd2c18aed, "wiphy_rfkill_stop_polling" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x82605ff6, "ieee80211_queue_delayed_work" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x274be093, "usb_submit_urb" },
	{ 0xb39a9d7b, "__ieee80211_get_rx_led_name" },
	{ 0xbf5cf4fe, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x52b3f42d, "usb_reset_device" },
	{ 0xe6f9e37f, "wiphy_rfkill_set_hw_state" },
	{ 0x63445814, "usb_put_dev" },
	{ 0x91c1b488, "ieee80211_tx_status_irqsafe" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd85d630e, "__ieee80211_get_tx_led_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x98dc35a8, "ieee80211_generic_frame_duration" },
	{ 0x2057ed89, "__ieee80211_get_radio_led_name" },
	{ 0x742df793, "ieee80211_ctstoself_duration" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0xc26e0623, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x17a49bf7, "usb_register_driver" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4319b67, "skb_put" },
	{ 0x3c44f617, "usb_free_urb" },
	{ 0xebc69c2e, "usb_anchor_urb" },
	{ 0xe4eb5988, "usb_alloc_urb" },
	{ 0x860a06f1, "ieee80211_queue_stopped" },
};

MODULE_INFO(depends, "mac80211,eeprom_93cx6,compat,cfg80211");

MODULE_ALIAS("usb:v0B05p171Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp705Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8198d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p6100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p6A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0pCA02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D1pABE6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6232d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p8187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0073d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4F94E992A91A75F91DCA604");
