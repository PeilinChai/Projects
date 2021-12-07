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
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1a2aa4ca, "wiphy_free" },
	{ 0xac682e72, "cfg80211_connect_done" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x92e26a3f, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0x3d3c5b3c, "regulatory_set_wiphy_regd" },
	{ 0x868dbd19, "cfg80211_radar_event" },
	{ 0x475219a5, "cfg80211_shutdown_all_interfaces" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x4b9ce961, "cfg80211_inform_bss_data" },
	{ 0xfa50d9d4, "netdev_walk_all_lower_dev" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x31964620, "netif_carrier_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x6ba5d574, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5974ac39, "platform_device_register_full" },
	{ 0xf43e904a, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xa70f50c5, "netif_tx_wake_queue" },
	{ 0x133066b6, "netif_tx_stop_all_queues" },
	{ 0x11089ac7, "_ctype" },
	{ 0xac32c109, "cfg80211_get_bss" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x9ee10cc, "free_netdev" },
	{ 0xda02aea3, "wiphy_unregister" },
	{ 0x6f1cd4ea, "cfg80211_update_owe_info_event" },
	{ 0xe85a0327, "cfg80211_del_sta_sinfo" },
	{ 0x5a715fe7, "debugfs_remove" },
	{ 0xcd0b8861, "cfg80211_rx_mgmt_khz" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe8d803d8, "wiphy_apply_custom_regulatory" },
	{ 0x6ae67adb, "cfg80211_michael_mic_failure" },
	{ 0xcaffcc10, "platform_device_unregister" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x5c505aed, "init_net" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x404fda0c, "cfg80211_get_drvinfo" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x4c86fdd5, "cfg80211_check_combinations" },
	{ 0x70178b08, "ieee80211_get_channel_khz" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0x509dbada, "cfg80211_ch_switch_notify" },
	{ 0xea29c6bf, "cfg80211_put_bss" },
	{ 0xa916b694, "strnlen" },
	{ 0x7787b8b5, "wiphy_register" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8abe8eea, "wiphy_new_nm" },
	{ 0x1bc96e98, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x88eb7e49, "netdev_port_same_parent_id" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe687917b, "ether_setup" },
	{ 0xec711864, "cfg80211_disconnected" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x9ed253d8, "unregister_netdevice_queue" },
	{ 0xa27e6772, "cfg80211_new_sta" },
	{ 0x81a471d6, "cfg80211_chandef_valid" },
	{ 0x61d82a42, "cfg80211_external_auth_request" },
	{ 0x37a0cba, "kfree" },
	{ 0x3254d2a2, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0x7e4155f, "cfg80211_cac_event" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x4f87e2b1, "cfg80211_scan_done" },
	{ 0x4319b67, "skb_put" },
	{ 0x5dc34244, "eth_mac_addr" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xdced333d, "device_set_wakeup_enable" },
};

MODULE_INFO(depends, "cfg80211,compat");


MODULE_INFO(srcversion, "0D7D4409FBA639189463B71");
