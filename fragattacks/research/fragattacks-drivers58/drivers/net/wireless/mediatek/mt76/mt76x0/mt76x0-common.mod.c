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
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe09a23a6, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xc0d17345, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0x8bb7e2d7, "mt76x02_phy_set_txdac" },
	{ 0xc313d886, "__mt76_poll" },
	{ 0xc67aada7, "mt76x02_mac_wcid_setup" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0xc6425424, "mt76x02_phy_set_txpower" },
	{ 0x77f5a6e8, "mt76x02_mcu_function_select" },
	{ 0x830cc6f1, "mt76x02_mcu_calibrate" },
	{ 0x906df96d, "mt76x02_eeprom_copy" },
	{ 0xa946878b, "mt76x02_config_mac_addr_list" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x591905a3, "mt76x02_dfs_init_params" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdc517a2b, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8e01d71a, "mt76x02_init_agc_gain" },
	{ 0x16ccb3c0, "mt76x02_mac_cc_reset" },
	{ 0x76f1ab71, "ieee80211_stop_queues" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0x4da0646e, "mt76x02_init_debugfs" },
	{ 0xd3d3774b, "mt76x02_get_lna_gain" },
	{ 0x2da66a4b, "mt76_eeprom_override" },
	{ 0x86d05e56, "mt76x02_edcca_init" },
	{ 0x1101c247, "mt76x02_phy_set_rxpath" },
	{ 0x4721856f, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x5463afa5, "ieee80211_wake_queues" },
	{ 0xbdcc4287, "__mt76_poll_msec" },
	{ 0x44ae946c, "mt76x02_init_device" },
	{ 0xa6e68a87, "mt76_set_channel" },
	{ 0xea6a1627, "mt76x02_phy_set_band" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x90de4c98, "mt76x02_phy_set_bw" },
	{ 0x7b6c8b45, "mt76_register_device" },
	{ 0x1bdfc72a, "mt76x02_mac_setaddr" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x92f62d9d, "mt76_eeprom_init" },
	{ 0x82605ff6, "ieee80211_queue_delayed_work" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0xf7a0fa63, "mt76x02_get_rx_gain" },
	{ 0xeb80f28, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x31d90d19, "mt76x02_get_efuse_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6ac29461, "mt76x02_ext_pa_enabled" },
	{ 0x7574a780, "mt76x02_mac_shared_key_setup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0x601ff69c, "mt76x02_phy_dfs_adjust_agc" },
	{ 0x82272cff, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mac80211");


MODULE_INFO(srcversion, "D72BF35B4A6080015943E81");
