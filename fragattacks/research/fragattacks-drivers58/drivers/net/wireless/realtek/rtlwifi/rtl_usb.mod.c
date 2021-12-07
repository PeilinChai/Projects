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
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xef27c734, "rtl_deinit_deferred_work" },
	{ 0x97673894, "rtl_deinit_core" },
	{ 0x61def424, "usb_get_from_anchor" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xb275c843, "usb_unanchor_urb" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0xaed840da, "_rtl_dbg_trace" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xce261b36, "skb_queue_purge" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7505eb82, "rtl_init_core" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x9aa283f4, "rtl_action_proc" },
	{ 0xea25b7f0, "usb_control_msg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2d32cdfc, "rtl_lps_change_work_callback" },
	{ 0x66fbf2c0, "rtl_init_rx_config" },
	{ 0xd358444d, "skb_pull" },
	{ 0x406100ae, "usb_free_coherent" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0x274be093, "usb_submit_urb" },
	{ 0xbf5cf4fe, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x63445814, "usb_put_dev" },
	{ 0x91c1b488, "ieee80211_tx_status_irqsafe" },
	{ 0x853a7510, "rtl_ops" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0xa6257a2f, "complete" },
	{ 0x3d83acda, "usb_alloc_coherent" },
	{ 0x4319b67, "skb_put" },
	{ 0x3c44f617, "usb_free_urb" },
	{ 0xb6282132, "rtl_beacon_statistic" },
	{ 0xebc69c2e, "usb_anchor_urb" },
	{ 0xe4eb5988, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,rtlwifi");


MODULE_INFO(srcversion, "47EB41FD8A6D967C653B4BA");
