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
	{ 0x51a18b45, "iw_handler_get_thrspy" },
	{ 0x160b81db, "iw_handler_set_thrspy" },
	{ 0x331568ae, "iw_handler_get_spy" },
	{ 0x92eb3a68, "iw_handler_set_spy" },
	{ 0x3494ae3b, "cfg80211_wext_giwname" },
	{ 0x5dc34244, "eth_mac_addr" },
	{ 0x16ec675a, "eth_validate_addr" },
	{ 0x26bf3bbb, "libipw_xmit" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x6bac82b3, "driver_create_file" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0x1a05d26c, "driver_remove_file" },
	{ 0x7787b8b5, "wiphy_register" },
	{ 0x51ca4507, "sysfs_create_group" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x360405cc, "pci_ioremap_bar" },
	{ 0x62f5a5f7, "pci_request_regions" },
	{ 0xdea73d77, "dma_set_coherent_mask" },
	{ 0xb4b5ed8d, "dma_set_mask" },
	{ 0x84e78855, "pci_set_master" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc2c6724f, "libipw_networks_age" },
	{ 0xce05adf, "libipw_set_geo" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0xc3176b85, "dma_alloc_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x752d4c0f, "dma_pool_create" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0xb0e602eb, "memmove" },
	{ 0x960eebcc, "netif_rx" },
	{ 0xc6c4403f, "skb_push" },
	{ 0xd358444d, "skb_pull" },
	{ 0x9e75161c, "libipw_rx_mgt" },
	{ 0xd9ad747a, "libipw_rx" },
	{ 0x4319b67, "skb_put" },
	{ 0x6410fc47, "skb_copy" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xcc63c78, "dma_sync_single_for_cpu" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xb70b49d7, "__alloc_skb" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xf43e904a, "pv_ops" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x31964620, "netif_carrier_on" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xda02aea3, "wiphy_unregister" },
	{ 0x162c7083, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x795fe8c3, "sysfs_remove_group" },
	{ 0x6293f934, "pci_choose_state" },
	{ 0x64756ab8, "pci_save_state" },
	{ 0x66734229, "netif_device_detach" },
	{ 0x443211a9, "pci_disable_device" },
	{ 0x7f8c4b94, "libipw_freq_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x90bff0ca, "libipw_wx_set_encode" },
	{ 0x6ba5d574, "netif_carrier_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xa70f50c5, "netif_tx_wake_queue" },
	{ 0xa70fc922, "dma_free_attrs" },
	{ 0x13f634b6, "libipw_txb_free" },
	{ 0x7fcc6290, "dma_unmap_page_attrs" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xf4c53e6a, "unregister_netdev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc071caf8, "wireless_send_event" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xb6a1832f, "libipw_wx_get_scan" },
	{ 0xa8fdd90a, "libipw_wx_get_encode" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x395fe465, "libipw_wx_set_encodeext" },
	{ 0x7464cd4a, "libipw_wx_get_encodeext" },
	{ 0x92c639cd, "libipw_channel_to_index" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe6f9e37f, "wiphy_rfkill_set_hw_state" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x754d539c, "strlen" },
	{ 0x9166fada, "strncpy" },
	{ 0x349cba85, "strchr" },
	{ 0xee3bffd8, "libipw_is_valid_channel" },
	{ 0x70687b85, "libipw_get_geo" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x8eaa55a9, "free_libipw" },
	{ 0x762d0500, "register_netdev" },
	{ 0xca0c9992, "alloc_libipw" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0xe960948a, "netif_device_attach" },
	{ 0xf86da38e, "pci_write_config_dword" },
	{ 0x7d398840, "pci_read_config_dword" },
	{ 0x1cea87bb, "pci_restore_state" },
	{ 0xa2b2d1bd, "pci_enable_device" },
	{ 0xea4f28e8, "pci_set_power_state" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x11089ac7, "_ctype" },
	{ 0x96848186, "scnprintf" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xa916b694, "strnlen" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc5850110, "printk" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cfg80211,libipw,compat");

MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002701bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002702bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002711bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002712bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002721bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002722bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002731bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002732bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002741bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv0000103Csd00002741bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002742bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002751bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002752bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002753bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002754bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002761bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001043sv00008086sd00002762bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004221sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004223sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004224sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B929D639B0F07CF56A849C4");
