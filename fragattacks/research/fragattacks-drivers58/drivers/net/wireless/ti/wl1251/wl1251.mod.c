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
	{ 0x5bbd8a41, "skb_queue_head" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x6b5efa33, "generic_file_llseek" },
	{ 0x92e26a3f, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x20b266ed, "ieee80211_queue_work" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6e61b37f, "ieee80211_cqm_rssi_notify" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xafe8b001, "ieee80211_channel_to_freq_khz" },
	{ 0xd4950484, "ieee80211_beacon_get_tim" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6b6c0025, "ieee80211_scan_completed" },
	{ 0x999e8297, "vfree" },
	{ 0x7d9a8b3d, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0x76f1ab71, "ieee80211_stop_queues" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0xf9b0624d, "ieee80211_tx_status" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5463afa5, "ieee80211_wake_queues" },
	{ 0x9166fada, "strncpy" },
	{ 0x5a715fe7, "debugfs_remove" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd358444d, "skb_pull" },
	{ 0x842c4d67, "simple_open" },
	{ 0x82605ff6, "ieee80211_queue_delayed_work" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0x29e78802, "skb_copy_expand" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd5015f8f, "ieee80211_get_hdrlen_from_skb" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0x7de4b083, "ieee80211_pspoll_get" },
	{ 0xec84fdb1, "ieee80211_nullfunc_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a97603c, "ieee80211_beacon_loss" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0xf5a6e06b, "ieee80211_probereq_get" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4319b67, "skb_put" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "BE38D9CAFE9CE643B5882F1");
