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
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf7545937, "usb_kill_urb" },
	{ 0xd532c10d, "rt2x00lib_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb275c843, "usb_unanchor_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0x17a8c712, "rt2x00lib_dmastart" },
	{ 0x82080bf0, "rt2x00queue_flush_queue" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0xc5850110, "printk" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xea25b7f0, "usb_control_msg" },
	{ 0x739ea1ce, "rt2x00queue_for_each_entry" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x249ec17d, "rt2x00queue_start_queue" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xff6e2c5f, "rt2x00lib_remove_dev" },
	{ 0x274be093, "usb_submit_urb" },
	{ 0xbf5cf4fe, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x4f08198d, "rt2x00queue_get_entry" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x52b3f42d, "usb_reset_device" },
	{ 0x1f7aebda, "rt2x00lib_rxdone" },
	{ 0x63445814, "usb_put_dev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x524dd84c, "rt2x00lib_txdone_noinfo" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6fae0ddd, "devm_kmalloc" },
	{ 0xedabb7cf, "rt2x00lib_dmadone" },
	{ 0x3c44f617, "usb_free_urb" },
	{ 0xb1cf73ca, "rt2x00lib_probe_dev" },
	{ 0xeeb46865, "rt2x00queue_stop_queue" },
	{ 0x64717660, "rt2x00lib_suspend" },
	{ 0xebc69c2e, "usb_anchor_urb" },
	{ 0x223089b8, "__skb_pad" },
	{ 0xe4eb5988, "usb_alloc_urb" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "09A7B234AA87F9FFE0F8E6C");
