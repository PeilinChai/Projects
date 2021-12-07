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
	{ 0x5bbd8a41, "skb_queue_head" },
	{ 0x62aeab48, "ieee80211_rx_irqsafe" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc6435732, "dev_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd4950484, "ieee80211_beacon_get_tim" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x20277c3c, "__ieee80211_get_assoc_led_name" },
	{ 0xf6187122, "skb_unlink" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x38246c39, "ieee80211_stop_queue" },
	{ 0xce261b36, "skb_queue_purge" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa92b201a, "led_classdev_register_ext" },
	{ 0x2758776d, "ieee80211_free_txskb" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd358444d, "skb_pull" },
	{ 0xb7c0f443, "sort" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x82605ff6, "ieee80211_queue_delayed_work" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0xeb80f28, "_dev_info" },
	{ 0xb39a9d7b, "__ieee80211_get_rx_led_name" },
	{ 0xa916b694, "strnlen" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xe6f9e37f, "wiphy_rfkill_set_hw_state" },
	{ 0x91c1b488, "ieee80211_tx_status_irqsafe" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xd85d630e, "__ieee80211_get_tx_led_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x92160849, "ieee80211_wake_queue" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x2057ed89, "__ieee80211_get_radio_led_name" },
	{ 0xd5015f8f, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0xc26e0623, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x3254d2a2, "regulatory_hint" },
	{ 0x6a97603c, "ieee80211_beacon_loss" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4319b67, "skb_put" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "CDA971758C1C2EFC41B2B7C");
