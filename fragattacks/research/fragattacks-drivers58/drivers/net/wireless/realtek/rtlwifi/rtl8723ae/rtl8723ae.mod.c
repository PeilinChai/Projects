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
	{ 0x80013a22, "rtl_cam_delete_one_entry" },
	{ 0x8ea60059, "rtl_fw_cb" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfec979fb, "rtl8723_phy_reload_adda_registers" },
	{ 0xdf0943b2, "rtl_pci_probe" },
	{ 0xd37aff74, "rtl_cam_get_free_entry" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xcb2f554e, "rtl_dm_diginit" },
	{ 0x688a3c6d, "rtl_ps_disable_nic" },
	{ 0x67b14325, "rtl_btc_get_ops_pointer" },
	{ 0xa797578e, "rtl_hal_pwrseqcmdparsing" },
	{ 0xe4ec2c12, "rtl8723_download_fw" },
	{ 0x45c1b760, "rtl_get_tcb_desc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30a956d7, "rtl_query_rxpwrpercentage" },
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0xfcaf39f4, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf43e904a, "pv_ops" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0xaed840da, "_rtl_dbg_trace" },
	{ 0xc4ed05f7, "rtl8723_dm_init_dynamic_txpower" },
	{ 0x9b4520b8, "rtl_pci_resume" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x58ec86e2, "rtl8723_phy_reload_mac_registers" },
	{ 0x4952e545, "rtl_ps_enable_nic" },
	{ 0x6d5ade25, "rtl_get_hwinfo" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb01e42c1, "rtl8723_dm_init_dynamic_bb_powersaving" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x40b458d9, "rtl8723_phy_rf_serial_read" },
	{ 0x697f7984, "rtl8723_phy_query_bb_reg" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7999421d, "_rtl_dbg_print_data" },
	{ 0x208bfe2f, "rtl_signal_scale_mapping" },
	{ 0x73b70ca7, "rtl8723_phy_mac_setting_calibration" },
	{ 0x41cff8cd, "request_firmware_nowait" },
	{ 0x838f64aa, "rtl8723ae_firmware_selfreset" },
	{ 0x2bc4e163, "rtl8723_phy_path_a_fill_iqk_matrix" },
	{ 0x1f1ed4d2, "rtl8723_dm_init_edca_turbo" },
	{ 0x2bbcafd0, "rtl_pci_suspend" },
	{ 0x26010fb5, "rtlwifi_rate_mapping" },
	{ 0xce4a0a46, "rtl8723_phy_pi_mode_switch" },
	{ 0xa5d90bc1, "rtl8723_save_adda_registers" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x18e45696, "rtl_pci_disconnect" },
	{ 0x6cd2520f, "rtl_cmd_send_packet" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb86da2ea, "rtl8723_phy_init_bb_rf_reg_def" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0x5772d5a6, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdb941bfa, "_rtl_dbg_print" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0xab516a94, "rtl8723_phy_txpwr_idx_to_dbm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xfa466f6f, "rtl8723_phy_save_mac_registers" },
	{ 0x4398da0f, "rtl_cam_mark_invalid" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd26e3c35, "rtl_cam_del_entry" },
	{ 0x6916cc62, "rtl_cam_empty_entry" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0xd7fba66b, "rtl_cam_reset_all_entry" },
	{ 0xcd496b6b, "rtl8723_phy_path_adda_on" },
	{ 0x2c04b7f7, "rtl_process_phyinfo" },
	{ 0x4319b67, "skb_put" },
	{ 0x3f2699ff, "rtl8723_phy_rf_serial_write" },
	{ 0x3f5bf9c0, "rtl8723_phy_calculate_bit_shift" },
	{ 0xe15fee9a, "efuse_read_1byte" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x25d89ca, "rtl8723_phy_set_bb_reg" },
	{ 0x93ecc14a, "param_ops_ullong" },
	{ 0x8baf8913, "rtl8723_phy_set_sw_chnl_cmdarray" },
};

MODULE_INFO(depends, "rtlwifi,rtl8723-common,rtl_pci,compat,btcoexist,mac80211");

MODULE_ALIAS("pci:v000010ECd00008723sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "85287B2BBDA0E311AAB9F0F");
