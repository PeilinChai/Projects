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
	{ 0xe1d6f31e, "sdio_writeb" },
	{ 0x4ebfb135, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5bbd8a41, "skb_queue_head" },
	{ 0xd6217d91, "brcmu_d11_attach" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xf86da38e, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1a2aa4ca, "wiphy_free" },
	{ 0x7410aba2, "strreplace" },
	{ 0xac682e72, "cfg80211_connect_done" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x349cba85, "strchr" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xd3f34109, "device_release_driver" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xea124bd1, "gcd" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x4b9ce961, "cfg80211_inform_bss_data" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x7ec33657, "send_sig" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x30a0f8e6, "sdio_enable_func" },
	{ 0x443211a9, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x9090688d, "cfg80211_report_wowlan_wakeup" },
	{ 0x830fb7ac, "sdio_claim_irq" },
	{ 0x176b6a6d, "no_llseek" },
	{ 0xb419ecb9, "sdio_retune_release" },
	{ 0x2e2359fe, "brcmu_pkt_buf_get_skb" },
	{ 0x31964620, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xafe8b001, "ieee80211_channel_to_freq_khz" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x6ba5d574, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf7545937, "usb_kill_urb" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc310b981, "strnstr" },
	{ 0xe1672792, "driver_for_each_device" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd6d5b9c8, "brcmu_pktq_pdeq_tail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5433b60b, "usb_autopm_get_interface" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2ec684e5, "__platform_driver_probe" },
	{ 0x999e8297, "vfree" },
	{ 0xe171a3dd, "pm_runtime_allow" },
	{ 0xa70fc922, "dma_free_attrs" },
	{ 0xc9207209, "brcmu_pktq_penq" },
	{ 0x81e28a8e, "pci_pme_capable" },
	{ 0x6d7b6cdd, "cfg80211_unregister_wdev" },
	{ 0xfeffaf47, "brcmu_pktq_mdeq" },
	{ 0x7d9a8b3d, "debugfs_create_file" },
	{ 0xfd2bcaf5, "pm_runtime_forbid" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf43e904a, "pv_ops" },
	{ 0xc58b3926, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb80b9f5, "sdio_get_host_pm_caps" },
	{ 0xf6187122, "skb_unlink" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5d44a8db, "cfg80211_mgmt_tx_status" },
	{ 0xe50202b9, "param_ops_string" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x960eebcc, "netif_rx" },
	{ 0x71e3ddcf, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x45de4666, "mmc_wait_for_req" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x84e78855, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x7f885dc, "sdio_writel" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x83b50a06, "cfg80211_vendor_cmd_reply" },
	{ 0xc85a1038, "brcmu_pktq_pdeq_match" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xa7d6966b, "netif_rx_ni" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xb19b445, "ioread8" },
	{ 0xa70f50c5, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2c79d4a6, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x46adf060, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xdd8932b9, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xde80cd09, "ioremap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xeaa71c0f, "efivar_entry_size" },
	{ 0x9ee10cc, "free_netdev" },
	{ 0xda02aea3, "wiphy_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x762d0500, "register_netdev" },
	{ 0x4ef96045, "nla_put" },
	{ 0xafc04c9f, "mmc_set_data_timeout" },
	{ 0x3591df8e, "sdio_readl" },
	{ 0xe85a0327, "cfg80211_del_sta_sinfo" },
	{ 0x5a921311, "strncmp" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xc3176b85, "dma_alloc_attrs" },
	{ 0x8fd2c1a, "brcmu_pktq_peek_tail" },
	{ 0x501be4e9, "brcmu_pktq_flush" },
	{ 0x7c9601c4, "sdio_retune_crc_enable" },
	{ 0xcd0b8861, "cfg80211_rx_mgmt_khz" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6ae67adb, "cfg80211_michael_mic_failure" },
	{ 0xe8d803d8, "wiphy_apply_custom_regulatory" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd358444d, "skb_pull" },
	{ 0x842c4d67, "simple_open" },
	{ 0x41cff8cd, "request_firmware_nowait" },
	{ 0x2352406a, "cfg80211_ibss_joined" },
	{ 0x4bfdba9, "device_wakeup_enable" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xe9ff5ba3, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x36d53fb4, "sdio_readsb" },
	{ 0x8e5a7512, "sdio_unregister_driver" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x25720659, "sdio_f0_writeb" },
	{ 0x402bd75c, "sdio_set_host_pm_flags" },
	{ 0x4c86fdd5, "cfg80211_check_combinations" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x70178b08, "ieee80211_get_channel_khz" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0x9f984513, "strrchr" },
	{ 0x274be093, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xe7a01332, "cfg80211_roamed" },
	{ 0xea29c6bf, "cfg80211_put_bss" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcbd60c43, "__cfg80211_alloc_reply_skb" },
	{ 0x7787b8b5, "wiphy_register" },
	{ 0x225a6969, "cfg80211_crit_proto_stopped" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3c3ab3e, "sdio_release_irq" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xa7e3a865, "cfg80211_classify8021d" },
	{ 0xf7b015d4, "efivar_entry_get" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x848d372e, "iowrite8" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0x6f519996, "cfg80211_ready_on_channel" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x8abe8eea, "wiphy_new_nm" },
	{ 0x1bc96e98, "alloc_netdev_mqs" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7d398840, "pci_read_config_dword" },
	{ 0xfc5aa6d6, "eth_type_trans" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0x118ff2e2, "sdio_f0_readb" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0xccbfa2b7, "wake_up_process" },
	{ 0x4defb929, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0xe687917b, "ether_setup" },
	{ 0xec711864, "cfg80211_disconnected" },
	{ 0xa17c0ccf, "brcmu_dotrev_str" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9ed253d8, "unregister_netdevice_queue" },
	{ 0xa27e6772, "cfg80211_new_sta" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xdfb14baf, "sdio_memcpy_toio" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd38eb645, "brcmu_pktq_penq_head" },
	{ 0xdac5ed51, "brcmu_pktq_init" },
	{ 0xbb4c292f, "cfg80211_port_authorized" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x287d868b, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x96848186, "scnprintf" },
	{ 0x17a49bf7, "usb_register_driver" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x7fcc6290, "dma_unmap_page_attrs" },
	{ 0x842c8e9d, "ioread16" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0x382537d2, "cfg80211_remain_on_channel_expired" },
	{ 0xf4c53e6a, "unregister_netdev" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa0fd21ca, "sdio_register_driver" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x7677bdc5, "sdio_memcpy_fromio" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc7913533, "cfg80211_sched_scan_stopped" },
	{ 0x7a7cfeb0, "sdio_claim_host" },
	{ 0x1cd6dfbd, "platform_driver_unregister" },
	{ 0xb0037fe, "firmware_request_nowarn" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4f87e2b1, "cfg80211_scan_done" },
	{ 0xcfdef135, "sdio_retune_crc_disable" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbf3af8e, "brcmu_pkt_buf_free_skb" },
	{ 0x4319b67, "skb_put" },
	{ 0xa2b2d1bd, "pci_enable_device" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x3c44f617, "usb_free_urb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6327bdd6, "is_acpi_device_node" },
	{ 0xd7664808, "sdio_set_block_size" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xacf04e4c, "usb_autopm_put_interface" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xdced333d, "device_set_wakeup_enable" },
	{ 0x78a5a723, "sdio_disable_func" },
	{ 0xe4eb5988, "usb_alloc_urb" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe0e5f468, "sdio_release_host" },
	{ 0x5ad910b3, "sdio_retune_hold_now" },
	{ 0x9e2247d0, "cfg80211_sched_scan_results" },
	{ 0x1cc7ef0f, "brcmu_pktq_mlen" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "brcmutil,cfg80211,compat");

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA94C*");
MODULE_ALIAS("sdio:c*v02D0dA94D*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0dA9A4*");
MODULE_ALIAS("sdio:c*v02D0d4335*");
MODULE_ALIAS("sdio:c*v02D0d4339*");
MODULE_ALIAS("sdio:c*v02D0dA9A6*");
MODULE_ALIAS("sdio:c*v02D0d4345*");
MODULE_ALIAS("sdio:c*v02D0dA9BF*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("sdio:c*v02D0d4356*");
MODULE_ALIAS("sdio:c*v02D0d4359*");
MODULE_ALIAS("sdio:c*v02D0d4373*");
MODULE_ALIAS("sdio:c*v02D0dA804*");
MODULE_ALIAS("sdio:c*v02D0d4355*");
MODULE_ALIAS("pci:v000014E4d000043A3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004355sv000014E4sd00004355bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004354sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043ECsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043D3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043D9sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043E9sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043EFsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BAsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BBsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BCsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d0000AA52sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004464sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CAsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CBsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CCsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004365sv000014E4sd00004365bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C4sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C5sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d0000440Dsv*sd*bc02sc80i*");
MODULE_ALIAS("usb:v0A5CpBD1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4pBD29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp0BDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p0BDCd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F1B4F43DD05F466EE5901F7");
