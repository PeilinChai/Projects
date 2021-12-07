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
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x16ec675a, "eth_validate_addr" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x46adf060, "usb_deregister" },
	{ 0x17a49bf7, "usb_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x31964620, "netif_carrier_on" },
	{ 0xc071caf8, "wireless_send_event" },
	{ 0x6ba5d574, "netif_carrier_off" },
	{ 0x960eebcc, "netif_rx" },
	{ 0xfc5aa6d6, "eth_type_trans" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4319b67, "skb_put" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x762d0500, "register_netdev" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xea25b7f0, "usb_control_msg" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbfa13aaa, "alloc_etherdev_mqs" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xe960948a, "netif_device_attach" },
	{ 0x66734229, "netif_device_detach" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x52f200c2, "usb_unlink_urb" },
	{ 0xa70f50c5, "netif_tx_wake_queue" },
	{ 0x754d539c, "strlen" },
	{ 0x9ee10cc, "free_netdev" },
	{ 0xf4c53e6a, "unregister_netdev" },
	{ 0xf7545937, "usb_kill_urb" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe4eb5988, "usb_alloc_urb" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0x274be093, "usb_submit_urb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0x3c44f617, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "compat,cfg80211");

MODULE_ALIAS("usb:v0586p3400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp6051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6823d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4FB5AD9A02A92227D0972E7");
