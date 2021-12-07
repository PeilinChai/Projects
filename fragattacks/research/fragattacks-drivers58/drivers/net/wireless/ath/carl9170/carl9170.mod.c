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
	{ 0x8ed32ba8, "ieee80211_rx_napi" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xaad0ae78, "__bitmap_shift_right" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x20b266ed, "ieee80211_queue_work" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x61def424, "usb_get_from_anchor" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd4950484, "ieee80211_beacon_get_tim" },
	{ 0xc1aa531, "ath_regd_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x20277c3c, "__ieee80211_get_assoc_led_name" },
	{ 0xf43e904a, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0x76f1ab71, "ieee80211_stop_queues" },
	{ 0xb275c843, "usb_unanchor_urb" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x38246c39, "ieee80211_stop_queue" },
	{ 0x641a4673, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x46adf060, "usb_deregister" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa92b201a, "led_classdev_register_ext" },
	{ 0x2758776d, "ieee80211_free_txskb" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5463afa5, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1471f36d, "ath_is_mybeacon" },
	{ 0xea25b7f0, "usb_control_msg" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x7c81c3b8, "input_set_capability" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xfc11ad12, "__dev_kfree_skb_irq" },
	{ 0xc8fed6d9, "ieee80211_sta_block_awake" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd358444d, "skb_pull" },
	{ 0x41cff8cd, "request_firmware_nowait" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x82605ff6, "ieee80211_queue_delayed_work" },
	{ 0xc017037b, "ath_reg_notifier_apply" },
	{ 0x917cec4c, "wiphy_to_ieee80211_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x6125581a, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x82b515b, "usb_queue_reset_device" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x274be093, "usb_submit_urb" },
	{ 0xf08b651e, "ath_regd_get_band_ctl" },
	{ 0xa916b694, "strnlen" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x52b3f42d, "usb_reset_device" },
	{ 0xb7ecffd7, "input_register_device" },
	{ 0x91c1b488, "ieee80211_tx_status_irqsafe" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0xb5fb77ca, "usb_driver_release_interface" },
	{ 0x925bdbfe, "ieee80211_get_tx_rates" },
	{ 0xada62611, "input_free_device" },
	{ 0x5772d5a6, "ieee80211_find_sta" },
	{ 0xd85d630e, "__ieee80211_get_tx_led_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x842f046d, "usb_poison_anchored_urbs" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xfb2a0e16, "usb_get_intf" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92160849, "ieee80211_wake_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x683864c8, "ieee80211_restart_hw" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0xc26e0623, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x3254d2a2, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3b7cacd8, "input_unregister_device" },
	{ 0x17a49bf7, "usb_register_driver" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0xf5b54361, "usb_ifnum_to_if" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x86b13d2a, "usb_unpoison_anchored_urbs" },
	{ 0x4319b67, "skb_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x3c44f617, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xebc69c2e, "usb_anchor_urb" },
	{ 0xdced333d, "device_set_wakeup_enable" },
	{ 0xe4eb5988, "usb_alloc_urb" },
	{ 0x951a0f0f, "usb_put_intf" },
	{ 0xabbe198c, "ieee80211_stop_tx_ba_session" },
	{ 0x860a06f1, "ieee80211_queue_stopped" },
	{ 0x35086d4a, "input_allocate_device" },
};

MODULE_INFO(depends, "mac80211,compat,ath,cfg80211");

MODULE_ALIAS("usb:v0CF3p9170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vCACEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0804d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0326d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3417d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0249d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p02B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p9170d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3787B726DD6E8A436384660");
