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
	{ 0x209d09f0, "mt76u_deinit" },
	{ 0xcee8edab, "mt76x02_remove_interface" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0x8bb7e2d7, "mt76x02_phy_set_txdac" },
	{ 0xfd836ce9, "mt76x2_phy_set_txpower" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xe6f19119, "mt76x2_phy_set_txpower_regs" },
	{ 0x74ee22bc, "mt76x2_read_rx_gain" },
	{ 0xc313d886, "__mt76_poll" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc67aada7, "mt76x02_mac_wcid_setup" },
	{ 0xaa5b9917, "mt76_sta_pre_rcu_remove" },
	{ 0xf82863c0, "mt76_sw_scan" },
	{ 0x77f5a6e8, "mt76x02_mcu_function_select" },
	{ 0x8220adaa, "mt76x02_conf_tx" },
	{ 0x830cc6f1, "mt76x02_mcu_calibrate" },
	{ 0xfdd3c3b, "mt76x02_ampdu_action" },
	{ 0x1f18d5cd, "mt76u_stop_rx" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1bbc679, "mt76x02_add_interface" },
	{ 0xf278a83e, "mt76u_vendor_request" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xbdc2239f, "mt76x02u_init_beacon_config" },
	{ 0x1d73a3f9, "mt76u_stop_tx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3f3fda67, "mt76u_alloc_queues" },
	{ 0xdc517a2b, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4dbbfe14, "mt76x2_phy_update_channel_gain" },
	{ 0x8e01d71a, "mt76x02_init_agc_gain" },
	{ 0x47392aca, "mt76x02_bss_info_changed" },
	{ 0x16ccb3c0, "mt76x02_mac_cc_reset" },
	{ 0xa4643e2a, "mt76x02u_mac_start" },
	{ 0x76f1ab71, "ieee80211_stop_queues" },
	{ 0x3dfb3523, "mt76x2_phy_tssi_compensate" },
	{ 0x8c65c6f6, "mt76_sta_state" },
	{ 0x6c2cc9d3, "mt76x2_mcu_init_gain" },
	{ 0x4489556d, "mt76x02u_tx_prepare_skb" },
	{ 0xc1a39a9d, "mt76x02u_init_mcu" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0x4da0646e, "mt76x02_init_debugfs" },
	{ 0x24d09c8c, "mt76_get_survey" },
	{ 0x72dd8a56, "mt76u_init" },
	{ 0xe546b7f, "mt76x02u_mcu_fw_send_data" },
	{ 0x463e9d09, "mt76x2_init_txpower" },
	{ 0x538fe6b3, "mt76x2_mcu_load_cr" },
	{ 0x67d370ee, "mt76x02_sta_add" },
	{ 0xc63c1318, "mt76x02_tx_status_data" },
	{ 0x46adf060, "usb_deregister" },
	{ 0x86d05e56, "mt76x02_edcca_init" },
	{ 0x1101c247, "mt76x02_phy_set_rxpath" },
	{ 0x851fdba5, "mt76x02_sta_remove" },
	{ 0x4721856f, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x5463afa5, "ieee80211_wake_queues" },
	{ 0x44571dcf, "mt76x02_tx" },
	{ 0xbdcc4287, "__mt76_poll_msec" },
	{ 0x44ae946c, "mt76x02_init_device" },
	{ 0xa6e68a87, "mt76_set_channel" },
	{ 0xea6a1627, "mt76x02_phy_set_band" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x90de4c98, "mt76x02_phy_set_bw" },
	{ 0xb0590980, "mt76x02_sw_scan_complete" },
	{ 0x6831bc80, "mt76_set_tim" },
	{ 0x7b6c8b45, "mt76_register_device" },
	{ 0x1bdfc72a, "mt76x02_mac_setaddr" },
	{ 0xc3f2204c, "mt76x02u_mcu_fw_reset" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x82605ff6, "ieee80211_queue_delayed_work" },
	{ 0x2bc0258d, "mt76u_queues_deinit" },
	{ 0xb349527f, "mt76x02_queue_rx_skb" },
	{ 0x193fd192, "mt76x02_configure_filter" },
	{ 0xeb80f28, "_dev_info" },
	{ 0xbf5cf4fe, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbb0f768f, "mt76x2_configure_tx_delay" },
	{ 0x7ec4c0aa, "mt76x02_update_channel" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x52b3f42d, "usb_reset_device" },
	{ 0x63445814, "usb_put_dev" },
	{ 0xcd8d8411, "mt76x2_mac_stop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6ac29461, "mt76x02_ext_pa_enabled" },
	{ 0x7574a780, "mt76x02_mac_shared_key_setup" },
	{ 0x4202b938, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0x39c3453f, "mt76x02_sta_rate_tbl_update" },
	{ 0x5267c1f3, "mt76u_resume_rx" },
	{ 0x58f151c, "mt76x02_sta_ps" },
	{ 0x24a200a8, "mt76x2_apply_gain_adj" },
	{ 0xe854217c, "mt76_get_antenna" },
	{ 0x35bb562e, "mt76_wake_tx_queue" },
	{ 0xec9fccc9, "mt76x02_mcu_set_radio_state" },
	{ 0x1900dab, "mt76x2_mcu_set_channel" },
	{ 0x63def958, "mt76x2_reset_wlan" },
	{ 0xc60fe3cf, "mt76_write_mac_initvals" },
	{ 0x84d0961b, "mt76_get_txpower" },
	{ 0x17a49bf7, "usb_register_driver" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x8d3e37ee, "mt76_release_buffered_frames" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x90c5a956, "mt76x02_set_key" },
	{ 0x989fd4b, "mt76x02_set_ethtool_fwver" },
	{ 0x6fae0ddd, "devm_kmalloc" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xe3cf861d, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76-usb,mt76x02-lib,mt76x2-common,compat,mt76,mac80211,mt76x02-usb");

MODULE_ALIAS("usb:v0B05p1833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p180Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C4Ep0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02FEd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E065A4613D7AE331D28A934");
