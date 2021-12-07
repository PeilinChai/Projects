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
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0x1b1e456d, "rt2x00mac_reconfig_complete" },
	{ 0x10f31735, "rt2x00mac_tx_frames_pending" },
	{ 0x4f171d36, "rt2x00mac_get_ringparam" },
	{ 0x4b866f63, "rt2x00mac_flush" },
	{ 0xdd80d5a8, "rt2x00mac_rfkill_poll" },
	{ 0xb0b05484, "rt2800_get_survey" },
	{ 0xfd9a5355, "rt2800_ampdu_action" },
	{ 0x8b7805d7, "rt2800_get_tsf" },
	{ 0xedbbfc2c, "rt2800_conf_tx" },
	{ 0x6e1ca117, "rt2800_sta_remove" },
	{ 0x1e1795c8, "rt2800_sta_add" },
	{ 0xb53357ce, "rt2800_set_rts_threshold" },
	{ 0x92bba2a2, "rt2800_get_key_seq" },
	{ 0x818ae197, "rt2x00mac_get_stats" },
	{ 0xe9fc226c, "rt2x00mac_sw_scan_complete" },
	{ 0xed8c8d71, "rt2x00mac_sw_scan_start" },
	{ 0x341bc618, "rt2x00mac_set_key" },
	{ 0x81ee4b96, "rt2x00mac_configure_filter" },
	{ 0xc5446535, "rt2x00mac_bss_info_changed" },
	{ 0xc5cc5fa2, "rt2x00mac_config" },
	{ 0x974dc647, "rt2x00mac_remove_interface" },
	{ 0x821fb385, "rt2x00mac_add_interface" },
	{ 0xfbd593cf, "rt2x00mac_stop" },
	{ 0xe2f61445, "rt2x00mac_start" },
	{ 0x2362c5fd, "rt2x00mac_tx" },
	{ 0xc1bbc2c, "rt2800mmio_get_dma_done" },
	{ 0x4595778, "rt2800mmio_get_txwi" },
	{ 0x85fbacaa, "rt2800mmio_init_registers" },
	{ 0x6d3395de, "rt2x00mmio_regbusy_read" },
	{ 0x2bd835f1, "rt2800_pre_reset_hw" },
	{ 0x73234433, "rt2800_config" },
	{ 0x958b0da1, "rt2800_config_ant" },
	{ 0xcfea02b4, "rt2800_config_erp" },
	{ 0x74e6fcdd, "rt2800_config_intf" },
	{ 0xe78d639e, "rt2800_config_filter" },
	{ 0x83bfafd1, "rt2800_config_pairwise_key" },
	{ 0x5547d444, "rt2800_config_shared_key" },
	{ 0xb2eaffbb, "rt2800mmio_fill_rxdone" },
	{ 0x1f770a46, "rt2800_clear_beacon" },
	{ 0xb4067301, "rt2800_write_beacon" },
	{ 0x970170ce, "rt2800_write_tx_data" },
	{ 0x60e48a64, "rt2800mmio_write_tx_desc" },
	{ 0x1c001e58, "rt2800mmio_flush_queue" },
	{ 0x962816d9, "rt2800mmio_stop_queue" },
	{ 0xe210220b, "rt2800mmio_kick_queue" },
	{ 0xe631a2a4, "rt2800mmio_start_queue" },
	{ 0xe3acb398, "rt2800_watchdog" },
	{ 0x5e958c14, "rt2800_vco_calibration" },
	{ 0x5dfaef6a, "rt2800_gain_calibration" },
	{ 0x57c9315, "rt2800_link_tuner" },
	{ 0x68dc4553, "rt2800_reset_tuner" },
	{ 0x6a0b608, "rt2800_link_stats" },
	{ 0xc50169c8, "rt2800_rfkill_poll" },
	{ 0x8865244, "rt2800mmio_clear_entry" },
	{ 0xee84e067, "rt2800mmio_get_entry_state" },
	{ 0x35ad458b, "rt2x00mmio_uninitialize" },
	{ 0xa5f1c787, "rt2x00mmio_initialize" },
	{ 0x8c883ac2, "rt2800_load_firmware" },
	{ 0xa9df799f, "rt2800_check_firmware" },
	{ 0xfdc92149, "rt2800mmio_probe_hw" },
	{ 0xc6a1455e, "rt2800mmio_autowake_tasklet" },
	{ 0x92c0bcd1, "rt2800mmio_rxdone_tasklet" },
	{ 0x2505789d, "rt2800mmio_tbtt_tasklet" },
	{ 0xfad1430, "rt2800mmio_pretbtt_tasklet" },
	{ 0xe28f94c7, "rt2800mmio_txstatus_tasklet" },
	{ 0x5fa4db64, "rt2800mmio_interrupt" },
	{ 0xd03e5d49, "rt2800mmio_queue_init" },
	{ 0x1770c86d, "rt2x00pci_resume" },
	{ 0xbeb60804, "rt2x00pci_suspend" },
	{ 0x9f4d3cb0, "rt2x00pci_remove" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x816f3920, "rt2800mmio_toggle_irq" },
	{ 0xce578f24, "rt2800mmio_enable_radio" },
	{ 0xa5a11cd0, "rt2800_mcu_request" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0xaf31149e, "rt2800_read_eeprom_efuse" },
	{ 0x7b3c5ff8, "rt2800_efuse_detect" },
	{ 0xc4ffc71d, "rt2x00pci_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2800lib,rt2800mmio,rt2x00mmio,rt2x00pci,compat,eeprom_93cx6");

MODULE_ALIAS("pci:v00001814d00000601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000781sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007708sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007728sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007738sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007748sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007758sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007768sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001462d0000891Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A3Bd00001059sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007722sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003592sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003593sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000359Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "701BD8583D72A27132716B7");
