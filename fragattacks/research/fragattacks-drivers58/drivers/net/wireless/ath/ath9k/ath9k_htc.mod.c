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
	{ 0x2d3385d3, "system_wq" },
	{ 0x1ef9c461, "ath9k_hw_set_txq_props" },
	{ 0x7e64bc39, "ieee80211_csa_finish" },
	{ 0xf3d9bda7, "ath9k_hw_init" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0x542d4a98, "ath9k_cmn_get_channel" },
	{ 0x6f63c10a, "ath9k_hw_deinit" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0xd3f34109, "device_release_driver" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x95a6c8c4, "ath9k_hw_set_gpio" },
	{ 0x9984041b, "ath9k_cmn_init_crypto" },
	{ 0x20b266ed, "ieee80211_queue_work" },
	{ 0xf6f7bdf8, "ath9k_cmn_process_rate" },
	{ 0x2f3b84a1, "ieee80211_csa_is_complete" },
	{ 0x913c8948, "ath9k_hw_btcoex_enable" },
	{ 0xa9007b73, "ath9k_hw_wait" },
	{ 0xb67d7de2, "ath9k_cmn_get_hw_crypto_keytype" },
	{ 0xfcdd356b, "ath9k_hw_stopdmarecv" },
	{ 0x305c38eb, "ath_key_delete" },
	{ 0x67a63a80, "ath9k_cmn_update_txpow" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd4950484, "ieee80211_beacon_get_tim" },
	{ 0x1ff41886, "ath9k_hw_gpio_get" },
	{ 0xc1aa531, "ath_regd_init" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf7545937, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x24c9c6dc, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x8214fa97, "ath9k_hw_setrxfilter" },
	{ 0x37ecd91, "ath9k_hw_get_txq_props" },
	{ 0xafb18522, "ath9k_hw_releasetxqueue" },
	{ 0xe90b90dd, "ath9k_hw_reset_tsf" },
	{ 0x20f11f78, "wiphy_rfkill_start_polling" },
	{ 0x12e09786, "ath9k_cmn_reload_chainmask" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf43e904a, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa117a6e4, "ath9k_cmn_init_channels_rates" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0x76f1ab71, "ieee80211_stop_queues" },
	{ 0xb275c843, "usb_unanchor_urb" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0xf9b0624d, "ieee80211_tx_status" },
	{ 0x400f949, "ath_printk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x461c5b88, "ath9k_hw_setopmode" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x7006ae39, "ath9k_hw_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c347689, "ath9k_hw_resettxqueue" },
	{ 0xff132aa9, "ath9k_hw_gettsf64" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x46adf060, "usb_deregister" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa92b201a, "led_classdev_register_ext" },
	{ 0xef25aea9, "ath9k_hw_set_sta_beacon_timers" },
	{ 0x7939e992, "ath9k_hw_set_tsfadjust" },
	{ 0x2eee8448, "ath9k_cmn_beacon_config_ap" },
	{ 0x5463afa5, "ieee80211_wake_queues" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x9a5b2d02, "ath9k_hw_btcoex_disable" },
	{ 0x729796fb, "ath9k_hw_getrxfilter" },
	{ 0x3231c604, "ath9k_hw_ani_monitor" },
	{ 0x1471f36d, "ath_is_mybeacon" },
	{ 0xf0efadc3, "ath9k_cmn_beacon_config_adhoc" },
	{ 0xea25b7f0, "usb_control_msg" },
	{ 0x8b7d131c, "ath9k_cmn_process_rssi" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd358444d, "skb_pull" },
	{ 0xd2c18aed, "wiphy_rfkill_stop_polling" },
	{ 0x41cff8cd, "request_firmware_nowait" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x8dac0247, "ath9k_hw_write_associd" },
	{ 0x82605ff6, "ieee80211_queue_delayed_work" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xc017037b, "ath_reg_notifier_apply" },
	{ 0x917cec4c, "wiphy_to_ieee80211_hw" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x1d70611, "ath9k_hw_init_btcoex_hw" },
	{ 0x6125581a, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0xc2f0b843, "ath9k_hw_beaconq_setup" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x274be093, "usb_submit_urb" },
	{ 0x4ea9f545, "ath9k_hw_name" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xeb404826, "ath9k_hw_init_global_settings" },
	{ 0xb70b49d7, "__alloc_skb" },
	{ 0xbf5cf4fe, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x3402962a, "ath9k_hw_settsf64" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xe6f9e37f, "wiphy_rfkill_set_hw_state" },
	{ 0x25d2630d, "usb_bulk_msg" },
	{ 0x63445814, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0x434e4646, "ath9k_hw_beaconinit" },
	{ 0x5772d5a6, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8fabfdaf, "ieee80211_get_buffered_bc" },
	{ 0xef76f4ce, "usb_interrupt_msg" },
	{ 0xcebcb588, "ath9k_hw_gpio_free" },
	{ 0xcd2294f0, "ath9k_hw_btcoex_bt_stomp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc894869e, "ath9k_hw_setrxabort" },
	{ 0xd56ecd22, "ath9k_cmn_beacon_config_sta" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x97542e14, "ath_hw_setbssidmask" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbe261160, "ath9k_cmn_rx_skb_postprocess" },
	{ 0xd8b5a9d8, "ath9k_hw_phy_disable" },
	{ 0x2057ed89, "__ieee80211_get_radio_led_name" },
	{ 0xd5015f8f, "ieee80211_get_hdrlen_from_skb" },
	{ 0xbe255de5, "ath9k_hw_setpower" },
	{ 0x7c021829, "__ieee80211_create_tpt_led_trigger" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0xc26e0623, "led_classdev_unregister" },
	{ 0x527a56eb, "ath9k_hw_btcoex_set_weight" },
	{ 0x37a0cba, "kfree" },
	{ 0x3254d2a2, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xde0560a7, "ath9k_hw_setmcastfilter" },
	{ 0xbf0d8387, "ieee80211_start_tx_ba_session" },
	{ 0x1c4dabd6, "ath9k_hw_gpio_request_out" },
	{ 0xb1c96eeb, "ath9k_hw_startpcureceive" },
	{ 0xd2ff13a3, "ath9k_hw_setuptxqueue" },
	{ 0x17a49bf7, "usb_register_driver" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x682029d7, "ath9k_hw_reset" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x15b9dd5b, "ath9k_cmn_rx_accept" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x765aaa56, "ath9k_hw_btcoex_init_3wire" },
	{ 0xd84160c7, "ath_key_config" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4319b67, "skb_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x82824194, "param_ops_uint" },
	{ 0xf460d4ea, "ath9k_hw_reset_calvalid" },
	{ 0x3c44f617, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xebc69c2e, "usb_anchor_urb" },
	{ 0xe4eb5988, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,ath9k_hw,ath9k_common,compat,ath,cfg80211");

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F88875EF931896BD09A1448");
