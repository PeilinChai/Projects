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
	{ 0x4206d242, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeda35ac9, "netdev_info" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd7ef401c, "cfg80211_cqm_rssi_notify" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8c8da09d, "init_dummy_netdev" },
	{ 0x1a2aa4ca, "wiphy_free" },
	{ 0x53b954a2, "up_read" },
	{ 0xac682e72, "cfg80211_connect_done" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x7e2deacb, "pci_free_irq_vectors" },
	{ 0xe01fbfaa, "pci_release_region" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x92e26a3f, "debugfs_create_dir" },
	{ 0x46f42490, "single_open" },
	{ 0x96205878, "debugfs_create_u8" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0xff0c113a, "ieee80211_bss_get_elem" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x3953677a, "napi_disable" },
	{ 0x43645b94, "__pm_runtime_use_autosuspend" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x38e2a1c2, "napi_schedule_prep" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x437e574e, "__pm_runtime_suspend" },
	{ 0xb4b5ed8d, "dma_set_mask" },
	{ 0x71f2118e, "single_release" },
	{ 0x6a87870a, "seq_puts" },
	{ 0x443211a9, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8e3c8798, "cfg80211_ft_event" },
	{ 0x18b53545, "cfg80211_chandef_create" },
	{ 0x176b6a6d, "no_llseek" },
	{ 0x31964620, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6410fc47, "skb_copy" },
	{ 0xafe8b001, "ieee80211_channel_to_freq_khz" },
	{ 0xc2890bfc, "seq_printf" },
	{ 0x6ba5d574, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x497db655, "seq_write" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x696f6ed7, "debugfs_create_x32" },
	{ 0xc2177cc7, "__pm_runtime_resume" },
	{ 0xe171a3dd, "pm_runtime_allow" },
	{ 0x999e8297, "vfree" },
	{ 0xde995c3f, "cfg80211_probe_status" },
	{ 0xa70fc922, "dma_free_attrs" },
	{ 0x6d7b6cdd, "cfg80211_unregister_wdev" },
	{ 0x7d9a8b3d, "debugfs_create_file" },
	{ 0xfd2bcaf5, "pm_runtime_forbid" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x17346341, "seq_read" },
	{ 0xf43e904a, "pv_ops" },
	{ 0xdea73d77, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x330d5acb, "__dynamic_netdev_dbg" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5d44a8db, "cfg80211_mgmt_tx_status" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x2afab799, "debugfs_create_u32" },
	{ 0x84e78855, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x52eb06da, "pci_alloc_irq_vectors_affinity" },
	{ 0x83b50a06, "cfg80211_vendor_cmd_reply" },
	{ 0x7dc2c502, "kfree_skb_partial" },
	{ 0xf9ca2eb4, "kstrtoint_from_user" },
	{ 0xfb578fc5, "memset" },
	{ 0xa7d6966b, "netif_rx_ni" },
	{ 0x49689033, "default_llseek" },
	{ 0xa70f50c5, "netif_tx_wake_queue" },
	{ 0x133066b6, "netif_tx_stop_all_queues" },
	{ 0x105b029f, "pci_iounmap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xac32c109, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1355bcb9, "dev_coredumpv" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9ee10cc, "free_netdev" },
	{ 0xda02aea3, "wiphy_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x4ef96045, "nla_put" },
	{ 0xe85a0327, "cfg80211_del_sta_sinfo" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x5a715fe7, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc3176b85, "dma_alloc_attrs" },
	{ 0xcd0b8861, "cfg80211_rx_mgmt_khz" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb7d26c40, "cfg80211_cqm_pktloss_notify" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x990c16dc, "netif_napi_add" },
	{ 0xe3d1510c, "simple_attr_release" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4103551c, "debugfs_create_file_unsafe" },
	{ 0xd358444d, "skb_pull" },
	{ 0x842c4d67, "simple_open" },
	{ 0xce807a25, "up_write" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe9ff5ba3, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf4b316e6, "pci_clear_master" },
	{ 0x584ab118, "kobject_uevent_env" },
	{ 0x404fda0c, "cfg80211_get_drvinfo" },
	{ 0x6a3d2654, "debugfs_attr_read" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x4c86fdd5, "cfg80211_check_combinations" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x70178b08, "ieee80211_get_channel_khz" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x68c57aec, "napi_gro_receive" },
	{ 0x459f1b5, "skb_try_coalesce" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xe7a01332, "cfg80211_roamed" },
	{ 0xea29c6bf, "cfg80211_put_bss" },
	{ 0xb70b49d7, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcbd60c43, "__cfg80211_alloc_reply_skb" },
	{ 0x7787b8b5, "wiphy_register" },
	{ 0x20f8a4e3, "__napi_schedule" },
	{ 0x79b82a71, "cfg80211_find_vendor_elem" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x8617d661, "param_get_uint" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0x6f519996, "cfg80211_ready_on_channel" },
	{ 0x8abe8eea, "wiphy_new_nm" },
	{ 0x1bc96e98, "alloc_netdev_mqs" },
	{ 0x92c5808b, "napi_complete_done" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfc5aa6d6, "eth_type_trans" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0x4defb929, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd0d717c3, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0xe687917b, "ether_setup" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xec711864, "cfg80211_disconnected" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x360405cc, "pci_ioremap_bar" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9ed253d8, "unregister_netdevice_queue" },
	{ 0x4bccf599, "__netif_napi_del" },
	{ 0xa27e6772, "cfg80211_new_sta" },
	{ 0x4233582f, "param_ops_byte" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xea4f28e8, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0x2c208607, "power_supply_is_system_supplied" },
	{ 0x16ec675a, "eth_validate_addr" },
	{ 0x3a6d1ede, "seq_lseek" },
	{ 0x54c4f850, "seq_hex_dump" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x287d868b, "pci_disable_msi" },
	{ 0xd7b21047, "param_set_uint" },
	{ 0x43760ff3, "cfg80211_ref_bss" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x7fcc6290, "dma_unmap_page_attrs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4b4e0071, "pm_runtime_set_autosuspend_delay" },
	{ 0x382537d2, "cfg80211_remain_on_channel_expired" },
	{ 0x66d29e23, "nla_put_64bit" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0xe03fcc42, "param_ops_ushort" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4f87e2b1, "cfg80211_scan_done" },
	{ 0x3a7db6c1, "dev_queue_xmit" },
	{ 0x4319b67, "skb_put" },
	{ 0xa2b2d1bd, "pci_enable_device" },
	{ 0x5dc34244, "eth_mac_addr" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x1dc94f74, "debugfs_attr_write" },
	{ 0x82824194, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xde31ab17, "simple_attr_open" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x4855b66e, "pci_request_region" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb8b12d5c, "skb_complete_wifi_ack" },
	{ 0x9e2247d0, "cfg80211_sched_scan_results" },
	{ 0xe4d31c12, "cfg80211_inform_bss_frame_data" },
};

MODULE_INFO(depends, "cfg80211,compat");

MODULE_ALIAS("pci:v00001AE9d00000310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AE9d00000302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd00001201sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DDAF738AD9A72668E24E0F5");
