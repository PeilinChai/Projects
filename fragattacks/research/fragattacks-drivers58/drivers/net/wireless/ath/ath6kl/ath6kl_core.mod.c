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
	{ 0x4206d242, "register_netdevice" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1a2aa4ca, "wiphy_free" },
	{ 0xac682e72, "cfg80211_connect_done" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x4b9ce961, "cfg80211_inform_bss_data" },
	{ 0x34e88248, "cfg80211_conn_failed" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x18b53545, "cfg80211_chandef_create" },
	{ 0x31964620, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6410fc47, "skb_copy" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x6ba5d574, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfeb0b73, "cfg80211_check_station_change" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0x5d44a8db, "cfg80211_mgmt_tx_status" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xce261b36, "skb_queue_purge" },
	{ 0x73421926, "cfg80211_pmksa_candidate_notify" },
	{ 0xfb578fc5, "memset" },
	{ 0xa7d6966b, "netif_rx_ni" },
	{ 0xa70f50c5, "netif_tx_wake_queue" },
	{ 0x2c79d4a6, "current_task" },
	{ 0xac32c109, "cfg80211_get_bss" },
	{ 0xc5850110, "printk" },
	{ 0xf45818c4, "ethtool_op_get_link" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ee10cc, "free_netdev" },
	{ 0xda02aea3, "wiphy_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe85a0327, "cfg80211_del_sta_sinfo" },
	{ 0xc6c4403f, "skb_push" },
	{ 0xcd0b8861, "cfg80211_rx_mgmt_khz" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6ae67adb, "cfg80211_michael_mic_failure" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd358444d, "skb_pull" },
	{ 0x2352406a, "cfg80211_ibss_joined" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x404fda0c, "cfg80211_get_drvinfo" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x70178b08, "ieee80211_get_channel_khz" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0x29e78802, "skb_copy_expand" },
	{ 0x509dbada, "cfg80211_ch_switch_notify" },
	{ 0xe7a01332, "cfg80211_roamed" },
	{ 0xea29c6bf, "cfg80211_put_bss" },
	{ 0x7787b8b5, "wiphy_register" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0x6f519996, "cfg80211_ready_on_channel" },
	{ 0x8abe8eea, "wiphy_new_nm" },
	{ 0x1bc96e98, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfc5aa6d6, "eth_type_trans" },
	{ 0x4defb929, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe687917b, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xec711864, "cfg80211_disconnected" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xeb03d45e, "netdev_set_default_ethtool_ops" },
	{ 0x9ed253d8, "unregister_netdevice_queue" },
	{ 0xa27e6772, "cfg80211_new_sta" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x3254d2a2, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcf2a6966, "up" },
	{ 0x96848186, "scnprintf" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0x382537d2, "cfg80211_remain_on_channel_expired" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0xc7913533, "cfg80211_sched_scan_stopped" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4f87e2b1, "cfg80211_scan_done" },
	{ 0x4319b67, "skb_put" },
	{ 0x82824194, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xac789221, "cfg80211_cqm_txe_notify" },
	{ 0x9e2247d0, "cfg80211_sched_scan_results" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "CC2E4C7BA1D8A42F5B9C04E");
