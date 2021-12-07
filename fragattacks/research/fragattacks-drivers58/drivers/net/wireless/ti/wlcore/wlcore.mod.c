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
	{ 0x8ed32ba8, "ieee80211_rx_napi" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5bbd8a41, "skb_queue_head" },
	{ 0x7e64bc39, "ieee80211_csa_finish" },
	{ 0xdc44cf1a, "device_remove_file" },
	{ 0xb6142c03, "device_remove_bin_file" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeea2f722, "__pm_runtime_idle" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x15517518, "pm_runtime_force_suspend" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x6b5efa33, "generic_file_llseek" },
	{ 0x92e26a3f, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xcdc7603d, "__pm_runtime_disable" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xa9af351f, "ieee80211_sta_ps_transition" },
	{ 0x43645b94, "__pm_runtime_use_autosuspend" },
	{ 0x20b266ed, "ieee80211_queue_work" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x437e574e, "__pm_runtime_suspend" },
	{ 0x6e61b37f, "ieee80211_cqm_rssi_notify" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xafe8b001, "ieee80211_channel_to_freq_khz" },
	{ 0xd4950484, "ieee80211_beacon_get_tim" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xefba5756, "pm_runtime_force_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xa4fa6701, "dev_pm_clear_wake_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x24c9c6dc, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x6b6c0025, "ieee80211_scan_completed" },
	{ 0xc2177cc7, "__pm_runtime_resume" },
	{ 0x91f3cb3c, "ieee80211_sched_scan_results" },
	{ 0x999e8297, "vfree" },
	{ 0x7d9a8b3d, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xf75ebbe9, "ieee80211_cqm_beacon_loss_notify" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x76f1ab71, "ieee80211_stop_queues" },
	{ 0x7f4c63b, "ieee80211_ready_on_channel" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x38246c39, "ieee80211_stop_queue" },
	{ 0xf9b0624d, "ieee80211_tx_status" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x1036e3df, "param_ops_charp" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x49689033, "default_llseek" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x2758776d, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ac00594, "ieee80211_report_low_ack" },
	{ 0x5463afa5, "ieee80211_wake_queues" },
	{ 0x99ce883f, "no_seek_end_llseek" },
	{ 0x9166fada, "strncpy" },
	{ 0x5a715fe7, "debugfs_remove" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x41dd03fd, "ieee80211_remain_on_channel_expired" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x9fa11cef, "platform_get_resource" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd358444d, "skb_pull" },
	{ 0x11f2d12f, "device_init_wakeup" },
	{ 0x842c4d67, "simple_open" },
	{ 0x41cff8cd, "request_firmware_nowait" },
	{ 0x76c1737b, "ieee80211_proberesp_get" },
	{ 0x82605ff6, "ieee80211_queue_delayed_work" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x917cec4c, "wiphy_to_ieee80211_hw" },
	{ 0x36336934, "device_create_file" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3b822c96, "pm_runtime_enable" },
	{ 0x79b82a71, "cfg80211_find_vendor_elem" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x5bb1a67b, "pm_wakeup_dev_event" },
	{ 0x5772d5a6, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xa80c7e77, "device_create_bin_file" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92160849, "ieee80211_wake_queue" },
	{ 0x90965deb, "ieee80211_stop_rx_ba_session" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x60cbd2da, "dev_pm_set_dedicated_wake_irq" },
	{ 0xd5015f8f, "ieee80211_get_hdrlen_from_skb" },
	{ 0x683864c8, "ieee80211_restart_hw" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0x7de4b083, "ieee80211_pspoll_get" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xec84fdb1, "ieee80211_nullfunc_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3380a225, "ieee80211_ap_probereq_get" },
	{ 0x96848186, "scnprintf" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0xf5a6e06b, "ieee80211_probereq_get" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4b4e0071, "pm_runtime_set_autosuspend_delay" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4319b67, "skb_put" },
	{ 0x87653e5f, "ieee80211_chswitch_done" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x82824194, "param_ops_uint" },
	{ 0x8121a1eb, "ieee80211_sched_scan_stopped" },
	{ 0xebd9b17c, "ieee80211_iterate_interfaces" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x3e152c12, "ieee80211_connection_loss" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd262dfcb, "vscnprintf" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "AF244CDCAAEEC034DE2967B");
