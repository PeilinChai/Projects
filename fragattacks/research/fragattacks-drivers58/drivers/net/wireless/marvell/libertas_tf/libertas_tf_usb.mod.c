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
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x4560ff63, "__lbtf_cmd" },
	{ 0x90d8c16a, "lbtf_cmd_copyback" },
	{ 0x22e31bfe, "lbtf_cmd_response_rx" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x36d6591, "lbtf_send_tx_feedback" },
	{ 0xfe2e6e8c, "lbtf_add_card" },
	{ 0xf7545937, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x508ae67a, "lbtf_remove_card" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1036e3df, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc23fcc4e, "kernel_param_unlock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x46adf060, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd358444d, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa203dda, "kernel_param_lock" },
	{ 0x274be093, "usb_submit_urb" },
	{ 0xbf5cf4fe, "usb_get_dev" },
	{ 0x28437d4d, "lbtf_rx" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x52b3f42d, "usb_reset_device" },
	{ 0x63445814, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x17a49bf7, "usb_register_driver" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xaaaaf7c5, "lbtf_bcn_sent" },
	{ 0x4319b67, "skb_put" },
	{ 0x3c44f617, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xe4eb5988, "usb_alloc_urb" },
};

MODULE_INFO(depends, "compat,libertas_tf");

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D065F1A1A425A8E242178AF");
