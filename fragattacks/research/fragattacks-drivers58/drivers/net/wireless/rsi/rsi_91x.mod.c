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
	{ 0x62aeab48, "ieee80211_rx_irqsafe" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0x26cc73c3, "complete_and_exit" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x92e26a3f, "debugfs_create_dir" },
	{ 0x46f42490, "single_open" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x6a87870a, "seq_puts" },
	{ 0x6e61b37f, "ieee80211_cqm_rssi_notify" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xafe8b001, "ieee80211_channel_to_freq_khz" },
	{ 0xd4950484, "ieee80211_beacon_get_tim" },
	{ 0xc2890bfc, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6b6c0025, "ieee80211_scan_completed" },
	{ 0x7d9a8b3d, "debugfs_create_file" },
	{ 0x20f11f78, "wiphy_rfkill_start_polling" },
	{ 0x17346341, "seq_read" },
	{ 0xc58b3926, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x76f1ab71, "ieee80211_stop_queues" },
	{ 0x7f4c63b, "ieee80211_ready_on_channel" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x38246c39, "ieee80211_stop_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xce261b36, "skb_queue_purge" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2758776d, "ieee80211_free_txskb" },
	{ 0xdd8932b9, "kthread_stop" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5a715fe7, "debugfs_remove" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x41dd03fd, "ieee80211_remain_on_channel_expired" },
	{ 0x24d273d1, "add_timer" },
	{ 0xd358444d, "skb_pull" },
	{ 0xd2c18aed, "wiphy_rfkill_stop_polling" },
	{ 0xb7c0f443, "sort" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x917cec4c, "wiphy_to_ieee80211_hw" },
	{ 0x6125581a, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xe6f9e37f, "wiphy_rfkill_set_hw_state" },
	{ 0x91c1b488, "ieee80211_tx_status_irqsafe" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xccbfa2b7, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92160849, "ieee80211_wake_queue" },
	{ 0x98dc35a8, "ieee80211_generic_frame_duration" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0x3a6d1ede, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbf0d8387, "ieee80211_start_tx_ba_session" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0xf5a6e06b, "ieee80211_probereq_get" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4319b67, "skb_put" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xdaf4bb2d, "rsi_bt_ops" },
	{ 0x860a06f1, "ieee80211_queue_stopped" },
};

MODULE_INFO(depends, "mac80211,compat,cfg80211,btrsi");


MODULE_INFO(srcversion, "7D2E0DBA791965DDD1D5248");
