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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8c8da09d, "init_dummy_netdev" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x92e26a3f, "debugfs_create_dir" },
	{ 0xa7c00bc1, "pcim_enable_device" },
	{ 0x3953677a, "napi_disable" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x38e2a1c2, "napi_schedule_prep" },
	{ 0xe4cf3f0, "pcim_iomap_table" },
	{ 0xb4b5ed8d, "dma_set_mask" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xc2890bfc, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0xd63bc18e, "qtnf_update_tx_stats" },
	{ 0xf6520ec2, "pci_enable_wake" },
	{ 0x10775d58, "qtnf_get_debugfs_dir" },
	{ 0xa70fc922, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdea73d77, "dma_set_coherent_mask" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x31fab83c, "qtnf_chipid_to_string" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x4d870cec, "pcie_get_mps" },
	{ 0x84e78855, "pci_set_master" },
	{ 0x30ff2c8a, "qtnf_trans_handle_rx_ctl_packet" },
	{ 0xfb578fc5, "memset" },
	{ 0xa70f50c5, "netif_tx_wake_queue" },
	{ 0x1cea87bb, "pci_restore_state" },
	{ 0x133066b6, "netif_tx_stop_all_queues" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3edbc027, "netif_receive_skb" },
	{ 0x5a715fe7, "debugfs_remove" },
	{ 0xc3176b85, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x990c16dc, "netif_napi_add" },
	{ 0xe9ff5ba3, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x39d9f5d5, "pcim_iomap_regions" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x68c57aec, "napi_gro_receive" },
	{ 0x52211404, "pcie_set_mps" },
	{ 0x12a38747, "usleep_range" },
	{ 0x20f8a4e3, "__napi_schedule" },
	{ 0x95da34ff, "put_device" },
	{ 0x602c1640, "debugfs_create_devm_seqfile" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xb20aac66, "pci_intx" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x4318b08e, "qtnf_classify_skb" },
	{ 0x92c5808b, "napi_complete_done" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfc5aa6d6, "eth_type_trans" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0x4defb929, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0x43c1b5cb, "qtnf_core_detach" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2677d96a, "qtnf_wake_all_queues" },
	{ 0x8992ee09, "get_device" },
	{ 0x4bccf599, "__netif_napi_del" },
	{ 0x4233582f, "param_ops_byte" },
	{ 0xea4f28e8, "pci_set_power_state" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x7fcc6290, "dma_unmap_page_attrs" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x288b32a4, "qtnf_update_rx_stats" },
	{ 0xee2c80cd, "qtnf_core_attach" },
	{ 0x7dafc718, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4319b67, "skb_put" },
	{ 0x6fae0ddd, "devm_kmalloc" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x82824194, "param_ops_uint" },
	{ 0x8cfb9a0a, "devm_request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x64756ab8, "pci_save_state" },
};

MODULE_INFO(depends, "compat,qtnfmac");

MODULE_ALIAS("pci:v00001BB5d00000008sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "124C163C278EE613CB9F7D3");
