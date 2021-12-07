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
	{ 0xcee8edab, "mt76x02_remove_interface" },
	{ 0xad2a2313, "mt76x02_mac_start" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xfd836ce9, "mt76x2_phy_set_txpower" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xe6f19119, "mt76x2_phy_set_txpower_regs" },
	{ 0xa7c00bc1, "pcim_enable_device" },
	{ 0x74ee22bc, "mt76x2_read_rx_gain" },
	{ 0xc313d886, "__mt76_poll" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc67aada7, "mt76x02_mac_wcid_setup" },
	{ 0xa3642169, "mt76x2_get_temp_comp" },
	{ 0xe4cf3f0, "pcim_iomap_table" },
	{ 0xaa5b9917, "mt76_sta_pre_rcu_remove" },
	{ 0xf82863c0, "mt76_sw_scan" },
	{ 0xb4b5ed8d, "dma_set_mask" },
	{ 0x77f5a6e8, "mt76x02_mcu_function_select" },
	{ 0x8220adaa, "mt76x02_conf_tx" },
	{ 0x830cc6f1, "mt76x02_mcu_calibrate" },
	{ 0xfdd3c3b, "mt76x02_ampdu_action" },
	{ 0x74c412f5, "mt76x02_mcu_cleanup" },
	{ 0x54df588d, "mt76x02_tx_prepare_skb" },
	{ 0xa946878b, "mt76x02_config_mac_addr_list" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x591905a3, "mt76x02_dfs_init_params" },
	{ 0x1bbc679, "mt76x02_add_interface" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdc517a2b, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4dbbfe14, "mt76x2_phy_update_channel_gain" },
	{ 0x8e01d71a, "mt76x02_init_agc_gain" },
	{ 0x47392aca, "mt76x02_bss_info_changed" },
	{ 0x16ccb3c0, "mt76x02_mac_cc_reset" },
	{ 0x76f1ab71, "ieee80211_stop_queues" },
	{ 0x3dfb3523, "mt76x2_phy_tssi_compensate" },
	{ 0x772a338b, "mt76x02_mcu_msg_send" },
	{ 0x8c65c6f6, "mt76_sta_state" },
	{ 0xf792d45e, "mt76x02_tx_complete_skb" },
	{ 0x53ada195, "mt76x02_set_rts_threshold" },
	{ 0x6c2cc9d3, "mt76x2_mcu_init_gain" },
	{ 0x84e78855, "pci_set_master" },
	{ 0x24d09c8c, "mt76_get_survey" },
	{ 0x4da0646e, "mt76x02_init_debugfs" },
	{ 0x463e9d09, "mt76x2_init_txpower" },
	{ 0x538fe6b3, "mt76x2_mcu_load_cr" },
	{ 0x10839b17, "mt76_unregister_device" },
	{ 0x67d370ee, "mt76x02_sta_add" },
	{ 0x8f599753, "mt76x2_eeprom_init" },
	{ 0x86d05e56, "mt76x02_edcca_init" },
	{ 0x851fdba5, "mt76x02_sta_remove" },
	{ 0x5463afa5, "ieee80211_wake_queues" },
	{ 0x3187cdda, "mt76_mmio_init" },
	{ 0x44571dcf, "mt76x02_tx" },
	{ 0xbdcc4287, "__mt76_poll_msec" },
	{ 0x44ae946c, "mt76x02_init_device" },
	{ 0xa6e68a87, "mt76_set_channel" },
	{ 0xea6a1627, "mt76x02_phy_set_band" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x91d5b9ee, "mt76x02_irq_handler" },
	{ 0x90de4c98, "mt76x02_phy_set_bw" },
	{ 0xb0590980, "mt76x02_sw_scan_complete" },
	{ 0x6831bc80, "mt76_set_tim" },
	{ 0x7b6c8b45, "mt76_register_device" },
	{ 0x1bdfc72a, "mt76x02_mac_setaddr" },
	{ 0x287efe27, "mt76x02_rx_poll_complete" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x82605ff6, "ieee80211_queue_delayed_work" },
	{ 0x39d9f5d5, "pcim_iomap_regions" },
	{ 0xb349527f, "mt76x02_queue_rx_skb" },
	{ 0x17a9b3ba, "mt76_free_device" },
	{ 0x193fd192, "mt76x02_configure_filter" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x8b53c154, "mt76_pci_disable_aspm" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbb0f768f, "mt76x2_configure_tx_delay" },
	{ 0x7ec4c0aa, "mt76x02_update_channel" },
	{ 0xcc195660, "mt76x02_set_tx_ackto" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xcd8d8411, "mt76x2_mac_stop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xde2ca6f3, "mt76x02_set_coverage_class" },
	{ 0x6ac29461, "mt76x02_ext_pa_enabled" },
	{ 0x7574a780, "mt76x02_mac_shared_key_setup" },
	{ 0x4202b938, "mt76_alloc_device" },
	{ 0x2bf53911, "mt76x02_reconfig_complete" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0x39c3453f, "mt76x02_sta_rate_tbl_update" },
	{ 0xedb42c5b, "mt76x02_dma_cleanup" },
	{ 0x58f151c, "mt76x02_sta_ps" },
	{ 0x24a200a8, "mt76x2_apply_gain_adj" },
	{ 0xcee86c11, "mt76_set_stream_caps" },
	{ 0xe854217c, "mt76_get_antenna" },
	{ 0x4bfd5414, "mt76x02e_init_beacon_config" },
	{ 0x35bb562e, "mt76_wake_tx_queue" },
	{ 0xec9fccc9, "mt76x02_mcu_set_radio_state" },
	{ 0xb14b8ec4, "mt76x02_dma_disable" },
	{ 0x1900dab, "mt76x2_mcu_set_channel" },
	{ 0x63def958, "mt76x2_reset_wlan" },
	{ 0xc60fe3cf, "mt76_write_mac_initvals" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0x84d0961b, "mt76_get_txpower" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x8d3e37ee, "mt76_release_buffered_frames" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x90c5a956, "mt76x02_set_key" },
	{ 0xe9c16a8c, "mt76x02_tx_set_txpwr_auto" },
	{ 0x989fd4b, "mt76x02_set_ethtool_fwver" },
	{ 0x8cfb9a0a, "devm_request_threaded_irq" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xb20658be, "mt76x02_dma_init" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76x2-common,compat,mt76,mac80211");

MODULE_ALIAS("pci:v000014C3d00007662sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007612sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007602sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9CA702C73DCFDC03DB8BB77");
