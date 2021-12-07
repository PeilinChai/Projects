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
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x26cc73c3, "complete_and_exit" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x1a2aa4ca, "wiphy_free" },
	{ 0x2ec510d2, "cfg80211_unlink_bss" },
	{ 0xac682e72, "cfg80211_connect_done" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x31a9af9e, "find_vpid" },
	{ 0x30a0f8e6, "sdio_enable_func" },
	{ 0x830fb7ac, "sdio_claim_irq" },
	{ 0x31964620, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12eaf20d, "skb_clone" },
	{ 0x6410fc47, "skb_copy" },
	{ 0xc2890bfc, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x6ba5d574, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf43e904a, "pv_ops" },
	{ 0xc58b3926, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5d44a8db, "cfg80211_mgmt_tx_status" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x960eebcc, "netif_rx" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x1036e3df, "param_ops_charp" },
	{ 0x7f885dc, "sdio_writel" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xa70f50c5, "netif_tx_wake_queue" },
	{ 0x133066b6, "netif_tx_stop_all_queues" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2c79d4a6, "current_task" },
	{ 0xac32c109, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x9ee10cc, "free_netdev" },
	{ 0xda02aea3, "wiphy_unregister" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x762d0500, "register_netdev" },
	{ 0x3591df8e, "sdio_readl" },
	{ 0xe85a0327, "cfg80211_del_sta_sinfo" },
	{ 0xcd0b8861, "cfg80211_rx_mgmt_khz" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x652032cb, "mac_pton" },
	{ 0x6ae67adb, "cfg80211_michael_mic_failure" },
	{ 0xe8d803d8, "wiphy_apply_custom_regulatory" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xdc33bbd3, "kill_pid" },
	{ 0xd358444d, "skb_pull" },
	{ 0x2352406a, "cfg80211_ibss_joined" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x44fbe870, "flush_signals" },
	{ 0x8e5a7512, "sdio_unregister_driver" },
	{ 0x70178b08, "ieee80211_get_channel_khz" },
	{ 0xe960948a, "netif_device_attach" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xe7a01332, "cfg80211_roamed" },
	{ 0xea29c6bf, "cfg80211_put_bss" },
	{ 0xa916b694, "strnlen" },
	{ 0x7787b8b5, "wiphy_register" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3c3ab3e, "sdio_release_irq" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x8abe8eea, "wiphy_new_nm" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfc5aa6d6, "eth_type_trans" },
	{ 0x118ff2e2, "sdio_f0_readb" },
	{ 0xccbfa2b7, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xec711864, "cfg80211_disconnected" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9ed253d8, "unregister_netdevice_queue" },
	{ 0xa27e6772, "cfg80211_new_sta" },
	{ 0xdfb14baf, "sdio_memcpy_toio" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x35683729, "dev_alloc_name" },
	{ 0x96848186, "scnprintf" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf4c53e6a, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa0fd21ca, "sdio_register_driver" },
	{ 0x7677bdc5, "sdio_memcpy_fromio" },
	{ 0x7a7cfeb0, "sdio_claim_host" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4f87e2b1, "cfg80211_scan_done" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x4319b67, "skb_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x82824194, "param_ops_uint" },
	{ 0x6cf8ef42, "skb_copy_bits" },
	{ 0xd7664808, "sdio_set_block_size" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x760a0f4f, "yield" },
	{ 0x78a5a723, "sdio_disable_func" },
	{ 0xe0e5f468, "sdio_release_host" },
	{ 0xbfa13aaa, "alloc_etherdev_mqs" },
	{ 0xe4d31c12, "cfg80211_inform_bss_frame_data" },
};

MODULE_INFO(depends, "cfg80211,compat");

MODULE_ALIAS("sdio:c*v024Cd0523*");
MODULE_ALIAS("sdio:c*v024Cd0525*");
MODULE_ALIAS("sdio:c*v024Cd0623*");
MODULE_ALIAS("sdio:c*v024Cd0626*");
MODULE_ALIAS("sdio:c*v024CdB723*");

MODULE_INFO(srcversion, "8A66E647D2657732375BE7D");
