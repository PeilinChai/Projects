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
	{ 0xc0d17345, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0xc6425424, "mt76x02_phy_set_txpower" },
	{ 0x830cc6f1, "mt76x02_mcu_calibrate" },
	{ 0x906df96d, "mt76x02_eeprom_copy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd3d3774b, "mt76x02_get_lna_gain" },
	{ 0x2da66a4b, "mt76_eeprom_override" },
	{ 0x4721856f, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x92f62d9d, "mt76_eeprom_init" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0xf7a0fa63, "mt76x02_get_rx_gain" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x31d90d19, "mt76x02_get_efuse_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6ac29461, "mt76x02_ext_pa_enabled" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6fae0ddd, "devm_kmalloc" },
	{ 0x601ff69c, "mt76x02_phy_dfs_adjust_agc" },
	{ 0x82272cff, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib");


MODULE_INFO(srcversion, "30855EC714460557529B6D7");
