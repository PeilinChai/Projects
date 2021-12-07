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
	{ 0x62aeab48, "ieee80211_rx_irqsafe" },
	{ 0xf9a482f9, "msleep" },
	{ 0x625f97f1, "rtl_swlps_beacon" },
	{ 0xef27c734, "rtl_deinit_deferred_work" },
	{ 0x126f6c83, "rtl_debug_remove_one" },
	{ 0xf7b8a4c4, "pci_read_config_byte" },
	{ 0xea094541, "rtl_efuse_ops_init" },
	{ 0xb4b5ed8d, "dma_set_mask" },
	{ 0x443211a9, "pci_disable_device" },
	{ 0x97673894, "rtl_deinit_core" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xd4950484, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xdbb15182, "pci_write_config_byte" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x162c7083, "pci_release_regions" },
	{ 0xa70fc922, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x61fe71b0, "read_efuse_byte" },
	{ 0xf43e904a, "pv_ops" },
	{ 0xdea73d77, "dma_set_coherent_mask" },
	{ 0x60fc4c19, "rtl_collect_scan_list" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x38246c39, "ieee80211_stop_queue" },
	{ 0xaed840da, "_rtl_dbg_trace" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x84e78855, "pci_set_master" },
	{ 0x4e94cd48, "rtl_global_var" },
	{ 0x105b029f, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0xc5850110, "printk" },
	{ 0x7505eb82, "rtl_init_core" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x9aa283f4, "rtl_action_proc" },
	{ 0xdc9643db, "pci_read_config_word" },
	{ 0xc3176b85, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xfc11ad12, "__dev_kfree_skb_irq" },
	{ 0x2d32cdfc, "rtl_lps_change_work_callback" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x66fbf2c0, "rtl_init_rx_config" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd358444d, "skb_pull" },
	{ 0xe9ff5ba3, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x97e05663, "rtl_tid_to_ac" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x91c1b488, "ieee80211_tx_status_irqsafe" },
	{ 0x853a7510, "rtl_ops" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0x8cfaa199, "rtl_deinit_rfkill" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7d398840, "pci_read_config_dword" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6d609230, "rtl_p2p_info" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92160849, "ieee80211_wake_queue" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0x4a226d86, "rtl_lps_leave" },
	{ 0xdaab1e3c, "rtl_recognize_peer" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x62f5a5f7, "pci_request_regions" },
	{ 0x7c2f71e9, "rtl_is_special_data" },
	{ 0x287d868b, "pci_disable_msi" },
	{ 0x77abe969, "rtl_tx_ackqueue" },
	{ 0xb76c35a3, "rtl_init_rfkill" },
	{ 0x7fcc6290, "dma_unmap_page_attrs" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0xe6e05e30, "rtl_debug_add_one" },
	{ 0xa6257a2f, "complete" },
	{ 0x1ae47215, "rtl_c2hcmd_enqueue" },
	{ 0xf34236d4, "pci_iomap" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x4319b67, "skb_put" },
	{ 0xa2b2d1bd, "pci_enable_device" },
	{ 0x9e90d62, "rtl_tx_mgmt_proc" },
	{ 0xb6282132, "rtl_beacon_statistic" },
	{ 0xc8b05adf, "pcie_capability_read_word" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,rtlwifi");


MODULE_INFO(srcversion, "F75CC7CF2FEC897E97B8192");
