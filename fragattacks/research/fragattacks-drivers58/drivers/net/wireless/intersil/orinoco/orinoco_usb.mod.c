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
	{ 0xcca0eaa0, "orinoco_tx_timeout" },
	{ 0xeb7a0cc2, "orinoco_change_mtu" },
	{ 0x16ec675a, "eth_validate_addr" },
	{ 0x5dc34244, "eth_mac_addr" },
	{ 0xeb38026e, "orinoco_set_multicast_list" },
	{ 0x61ff4169, "orinoco_stop" },
	{ 0x51698934, "orinoco_open" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x46adf060, "usb_deregister" },
	{ 0x17a49bf7, "usb_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x6a6bf7fd, "free_orinocodev" },
	{ 0xda02aea3, "wiphy_unregister" },
	{ 0xb171be2a, "orinoco_if_del" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x7ff3d52c, "orinoco_if_add" },
	{ 0x7844075f, "orinoco_init" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x974858ca, "alloc_orinocodev" },
	{ 0xea25b7f0, "usb_control_msg" },
	{ 0xf7545937, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x8929f7a, "orinoco_process_xmit_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0x52f200c2, "usb_unlink_urb" },
	{ 0x9f830b3e, "__orinoco_ev_rx" },
	{ 0x63684ec2, "__orinoco_ev_info" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa70f50c5, "netif_tx_wake_queue" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3c44f617, "usb_free_urb" },
	{ 0x330d5acb, "__dynamic_netdev_dbg" },
	{ 0x274be093, "usb_submit_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe4eb5988, "usb_alloc_urb" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "orinoco,compat,cfg80211");

MODULE_ALIAS("usb:v049Fp001Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0082d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0076d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v047Ep0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D98p0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D9Ep0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D4Ep1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D4Ep1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E7Cp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p5002d0000dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p5B11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p7011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF8p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1630pFF81d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D4Ep047Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4AC44064B172E367348CE49");
