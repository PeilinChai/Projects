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
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xc313d886, "__mt76_poll" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaa5b9917, "mt76_sta_pre_rcu_remove" },
	{ 0xf82863c0, "mt76_sw_scan" },
	{ 0x8220adaa, "mt76x02_conf_tx" },
	{ 0xfdd3c3b, "mt76x02_ampdu_action" },
	{ 0x1f18d5cd, "mt76u_stop_rx" },
	{ 0xb1a56280, "mt76x02u_exit_beacon_config" },
	{ 0x1bbc679, "mt76x02_add_interface" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf278a83e, "mt76u_vendor_request" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xbdc2239f, "mt76x02u_init_beacon_config" },
	{ 0x1d73a3f9, "mt76u_stop_tx" },
	{ 0x3f3fda67, "mt76u_alloc_queues" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x47392aca, "mt76x02_bss_info_changed" },
	{ 0xa4643e2a, "mt76x02u_mac_start" },
	{ 0xaa021a7b, "mt76x0_init_hardware" },
	{ 0x8c65c6f6, "mt76_sta_state" },
	{ 0x53ada195, "mt76x02_set_rts_threshold" },
	{ 0x4489556d, "mt76x02u_tx_prepare_skb" },
	{ 0xc1a39a9d, "mt76x02u_init_mcu" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0x24d09c8c, "mt76_get_survey" },
	{ 0x72dd8a56, "mt76u_init" },
	{ 0xe546b7f, "mt76x02u_mcu_fw_send_data" },
	{ 0x109054b8, "mt76x0_mac_stop" },
	{ 0x67d370ee, "mt76x02_sta_add" },
	{ 0xc63c1318, "mt76x02_tx_status_data" },
	{ 0x46adf060, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x851fdba5, "mt76x02_sta_remove" },
	{ 0x44571dcf, "mt76x02_tx" },
	{ 0xbdcc4287, "__mt76_poll_msec" },
	{ 0xb0590980, "mt76x02_sw_scan_complete" },
	{ 0x6831bc80, "mt76_set_tim" },
	{ 0x62e87996, "mt76x0_phy_calibrate" },
	{ 0xc3f2204c, "mt76x02u_mcu_fw_reset" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x7499c204, "mt76x0_register_device" },
	{ 0xdeb3d38f, "mt76x0_config" },
	{ 0x82605ff6, "ieee80211_queue_delayed_work" },
	{ 0x2bc0258d, "mt76u_queues_deinit" },
	{ 0xb349527f, "mt76x02_queue_rx_skb" },
	{ 0xa56b9f9a, "mt76x0_chip_onoff" },
	{ 0x193fd192, "mt76x02_configure_filter" },
	{ 0xeb80f28, "_dev_info" },
	{ 0xbf5cf4fe, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7ec4c0aa, "mt76x02_update_channel" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x52b3f42d, "usb_reset_device" },
	{ 0x63445814, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4202b938, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0x39c3453f, "mt76x02_sta_rate_tbl_update" },
	{ 0x5267c1f3, "mt76u_resume_rx" },
	{ 0x58f151c, "mt76x02_sta_ps" },
	{ 0x37a0cba, "kfree" },
	{ 0xe854217c, "mt76_get_antenna" },
	{ 0x35bb562e, "mt76_wake_tx_queue" },
	{ 0x84d0961b, "mt76_get_txpower" },
	{ 0x17a49bf7, "usb_register_driver" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x8d3e37ee, "mt76_release_buffered_frames" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x90c5a956, "mt76x02_set_key" },
	{ 0xb0037fe, "firmware_request_nowarn" },
	{ 0x6fae0ddd, "devm_kmalloc" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xe3cf861d, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76-usb,mt76x02-lib,compat,mt76,mt76x02-usb,mac80211,mt76x0-common");

MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v293Cp5702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p806Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pC711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");

MODULE_INFO(srcversion, "407A1CAA18FCAA6453F63A5");
