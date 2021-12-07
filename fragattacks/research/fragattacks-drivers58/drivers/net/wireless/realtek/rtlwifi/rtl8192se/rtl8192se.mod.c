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
	{ 0xf86da38e, "pci_write_config_dword" },
	{ 0xdf0943b2, "rtl_pci_probe" },
	{ 0xd37aff74, "rtl_cam_get_free_entry" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x688a3c6d, "rtl_ps_disable_nic" },
	{ 0x45c1b760, "rtl_get_tcb_desc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x220a8bbc, "rtl_efuse_shadow_map_update" },
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
	{ 0x9b4520b8, "rtl_pci_resume" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0x4952e545, "rtl_ps_enable_nic" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2921a4d4, "rtl_btc_status_false" },
	{ 0x7999421d, "_rtl_dbg_print_data" },
	{ 0x208bfe2f, "rtl_signal_scale_mapping" },
	{ 0x41cff8cd, "request_firmware_nowait" },
	{ 0x2bbcafd0, "rtl_pci_suspend" },
	{ 0x26010fb5, "rtlwifi_rate_mapping" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x18e45696, "rtl_pci_disconnect" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xed7b9bbc, "rtl_rfreg_delay" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0x5772d5a6, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7d398840, "pci_read_config_dword" },
	{ 0xdb941bfa, "_rtl_dbg_print" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4398da0f, "rtl_cam_mark_invalid" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd26e3c35, "rtl_cam_del_entry" },
	{ 0x6916cc62, "rtl_cam_empty_entry" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0xd7fba66b, "rtl_cam_reset_all_entry" },
	{ 0xa6257a2f, "complete" },
	{ 0x2c04b7f7, "rtl_process_phyinfo" },
	{ 0x4319b67, "skb_put" },
	{ 0xe15fee9a, "efuse_read_1byte" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0x93ecc14a, "param_ops_ullong" },
};

MODULE_INFO(depends, "rtlwifi,rtl_pci,compat,mac80211");

MODULE_ALIAS("pci:v000010ECd00008192sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008171sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008172sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008173sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008174sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "98D98EC80DD15EE5D2CBD9F");
