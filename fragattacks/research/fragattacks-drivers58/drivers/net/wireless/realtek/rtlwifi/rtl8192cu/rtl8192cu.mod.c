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
	{ 0x80013a22, "rtl_cam_delete_one_entry" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8ea60059, "rtl_fw_cb" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xd37aff74, "rtl_cam_get_free_entry" },
	{ 0x286271dc, "rtl92c_phy_set_rfpath_switch" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xf9b383e, "rtl_usb_disconnect" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xeed71917, "_rtl92c_phy_fw_rf_serial_read" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0xcfd5a52d, "rtl92c_phy_set_txpower_level" },
	{ 0x2506d5a, "rtl92c_set_fw_rsvdpagepkt" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xcc99db5d, "rtl92c_dm_check_txpower_tracking" },
	{ 0x688a3c6d, "rtl_ps_disable_nic" },
	{ 0x7973066f, "rtl92c_dm_watchdog" },
	{ 0xf67731d6, "_rtl92c_phy_init_bb_rf_register_definition" },
	{ 0x333fca27, "_rtl92c_phy_rf_serial_write" },
	{ 0x45c1b760, "rtl_get_tcb_desc" },
	{ 0x7b2c089f, "_rtl92c_phy_rf_serial_read" },
	{ 0xfc86e313, "rtl92c_phy_set_bw_mode" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x785ac9f6, "rtl92c_phy_lc_calibrate" },
	{ 0x2327d91c, "_rtl92c_phy_calculate_bit_shift" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30a956d7, "rtl_query_rxpwrpercentage" },
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xfcaf39f4, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0xf43e904a, "pv_ops" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x994ca66b, "rtl_phy_scan_operation_backup" },
	{ 0x8c03de, "rtl92c_dm_init_edca_turbo" },
	{ 0x29f8cc45, "rtl92c_phy_iq_calibrate" },
	{ 0xbf554955, "rtl92c_dm_init" },
	{ 0xa337fb4, "rtl_usb_probe" },
	{ 0xaed840da, "_rtl_dbg_trace" },
	{ 0x41d12057, "rtl92c_phy_set_bb_reg" },
	{ 0x4952e545, "rtl_ps_enable_nic" },
	{ 0x6d5ade25, "rtl_get_hwinfo" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x46adf060, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xfec163e9, "rtl92c_dm_rf_saving" },
	{ 0x86bc8e2f, "rtl92c_set_fw_pwrmode_cmd" },
	{ 0x748a01d0, "dm_writepowerindex" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x90b9ee85, "_rtl92c_phy_fw_rf_serial_write" },
	{ 0x7999421d, "_rtl_dbg_print_data" },
	{ 0x208bfe2f, "rtl_signal_scale_mapping" },
	{ 0xd358444d, "skb_pull" },
	{ 0xe85740d9, "_rtl92c_phy_set_rf_sleep" },
	{ 0x41cff8cd, "request_firmware_nowait" },
	{ 0x26010fb5, "rtlwifi_rate_mapping" },
	{ 0xdacd53, "rtl92c_set_fw_joinbss_report_cmd" },
	{ 0xd7c47ee7, "rtl92c_download_fw" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xed7b9bbc, "rtl_rfreg_delay" },
	{ 0xc9c88c7c, "_rtl92c_store_pwrindex_diffrate_offset" },
	{ 0x9c1d66d6, "rtl92c_phy_set_io_cmd" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x5772d5a6, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdb941bfa, "_rtl_dbg_print" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4398da0f, "rtl_cam_mark_invalid" },
	{ 0x8955f5b4, "rtl92c_phy_rf_config" },
	{ 0x37a0cba, "kfree" },
	{ 0xd26e3c35, "rtl_cam_del_entry" },
	{ 0x6916cc62, "rtl_cam_empty_entry" },
	{ 0xf3cc2e15, "rtl92ce_phy_set_rf_on" },
	{ 0x17a49bf7, "usb_register_driver" },
	{ 0xae2d5067, "rtl92c_phy_query_bb_reg" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0xd7fba66b, "rtl_cam_reset_all_entry" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x2c04b7f7, "rtl_process_phyinfo" },
	{ 0xf538e336, "dm_restorepowerindex" },
	{ 0xe15fee9a, "efuse_read_1byte" },
	{ 0xc2097fe4, "_rtl92c_phy_bb8192c_config_parafile" },
	{ 0x6c8ff6d1, "rtl92c_fill_h2c_cmd" },
	{ 0x58f59de8, "rtl92c_phy_sw_chnl" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0x93ecc14a, "param_ops_ullong" },
};

MODULE_INFO(depends, "mac80211,rtlwifi,rtl8192c-common,rtl_usb,compat");

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp819Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "878A0B2EB314C693F7F53C9");
