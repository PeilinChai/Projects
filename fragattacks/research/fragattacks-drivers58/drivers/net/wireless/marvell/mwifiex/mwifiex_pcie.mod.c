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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe01fbfaa, "pci_release_region" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xb4b5ed8d, "dma_set_mask" },
	{ 0xbcdf36cf, "mwifiex_cancel_hs" },
	{ 0x443211a9, "pci_disable_device" },
	{ 0x7116dc2e, "pci_disable_msix" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe530496b, "mwifiex_disable_auto_ds" },
	{ 0x2bf0fa6c, "pci_try_reset_function" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0x8702bdcc, "mwifiex_write_data_complete" },
	{ 0xd756ae3a, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0xa70fc922, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x91c4204, "mwifiex_queue_main_work" },
	{ 0x4c1f9560, "mwifiex_prepare_fw_dump_info" },
	{ 0xdea73d77, "dma_set_coherent_mask" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x904f49ac, "_mwifiex_dbg" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x84e78855, "pci_set_master" },
	{ 0xdf8d310, "mwifiex_add_card" },
	{ 0xcc63c78, "dma_sync_single_for_cpu" },
	{ 0xb19b445, "ioread8" },
	{ 0x105b029f, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc3176b85, "dma_alloc_attrs" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x852474cf, "mwifiex_shutdown_sw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd358444d, "skb_pull" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xe9ff5ba3, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xf4b316e6, "pci_clear_master" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86086153, "pci_enable_msix_range" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x287d868b, "pci_disable_msi" },
	{ 0x23cbe63, "mwifiex_reinit_sw" },
	{ 0xcc57d0bb, "dma_sync_single_for_device" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0x3e969b6c, "mwifiex_handle_rx_packet" },
	{ 0x7fcc6290, "dma_unmap_page_attrs" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x1724c1a9, "mwifiex_deauthenticate_all" },
	{ 0x6a98442d, "mwifiex_remove_card" },
	{ 0x53f09a70, "mwifiex_enable_hs" },
	{ 0xf19dd05e, "mwifiex_upload_device_dump" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0xf34236d4, "pci_iomap" },
	{ 0x8fdd7339, "mwifiex_drv_info_dump" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4319b67, "skb_put" },
	{ 0xa2b2d1bd, "pci_enable_device" },
	{ 0x6fae0ddd, "devm_kmalloc" },
	{ 0x922f0fd4, "mwifiex_init_shutdown_fw" },
	{ 0x4855b66e, "pci_request_region" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "compat,mwifiex");

MODULE_ALIAS("pci:v000011ABd00002B30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00002B42sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0E19B9C3FE4A9AEC167E796");
