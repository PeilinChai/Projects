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
	{ 0x87cfbe9d, "rsi_91x_init" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x26cc73c3, "complete_and_exit" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xf7545937, "usb_kill_urb" },
	{ 0xc58b3926, "kthread_create_on_node" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0xcd173710, "rsi_dbg" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xce261b36, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x46adf060, "usb_deregister" },
	{ 0xdd8932b9, "kthread_stop" },
	{ 0x8c711a49, "rsi_mac80211_detach" },
	{ 0xd51f36eb, "rsi_read_pkt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xea25b7f0, "usb_control_msg" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0x274be093, "usb_submit_urb" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x25d2630d, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xccbfa2b7, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x17a49bf7, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0x676e9397, "rsi_hal_device_init" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0xe03fcc42, "param_ops_ushort" },
	{ 0x4319b67, "skb_put" },
	{ 0xf482288e, "rsi_91x_deinit" },
	{ 0x3c44f617, "usb_free_urb" },
	{ 0xdaf4bb2d, "rsi_bt_ops" },
	{ 0xe4eb5988, "usb_alloc_urb" },
};

MODULE_INFO(depends, "rsi_91x,compat,btrsi");

MODULE_ALIAS("usb:v1618p9113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1618p9116d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B1D296B156CFDE3DCBDDF92");
