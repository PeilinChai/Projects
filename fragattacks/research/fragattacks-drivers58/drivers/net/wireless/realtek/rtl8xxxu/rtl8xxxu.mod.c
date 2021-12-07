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
	{ 0x2d3385d3, "system_wq" },
	{ 0x62aeab48, "ieee80211_rx_irqsafe" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x870b66df, "usb_init_urb" },
	{ 0x12eaf20d, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0x76f1ab71, "ieee80211_stop_queues" },
	{ 0xb275c843, "usb_unanchor_urb" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x46adf060, "usb_deregister" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5463afa5, "ieee80211_wake_queues" },
	{ 0xea25b7f0, "usb_control_msg" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xd358444d, "skb_pull" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xcbd2ff73, "ieee80211_ave_rssi" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x274be093, "usb_submit_urb" },
	{ 0xbf5cf4fe, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x52b3f42d, "usb_reset_device" },
	{ 0x63445814, "usb_put_dev" },
	{ 0x91c1b488, "ieee80211_tx_status_irqsafe" },
	{ 0x5772d5a6, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x15a37cf3, "cfg80211_calculate_bitrate" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x17a49bf7, "usb_register_driver" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x4319b67, "skb_put" },
	{ 0x3c44f617, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xebc69c2e, "usb_anchor_urb" },
	{ 0xe4eb5988, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,compat,cfg80211");

MODULE_ALIAS("usb:v0BDAp8724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp1724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp0724d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp818Bd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0108d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2001p3319d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2357p0109d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDApB720d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392pA611d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "86C0DAD8C827048477217E1");
