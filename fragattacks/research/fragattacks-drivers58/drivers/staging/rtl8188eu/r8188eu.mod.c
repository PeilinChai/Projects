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
	{ 0xeda35ac9, "netdev_info" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x26cc73c3, "complete_and_exit" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x31964620, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12eaf20d, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x6410fc47, "skb_copy" },
	{ 0x6ba5d574, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf7545937, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5433b60b, "usb_autopm_get_interface" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf43e904a, "pv_ops" },
	{ 0xc58b3926, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x960eebcc, "netif_rx" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x1036e3df, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xce261b36, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0xa70f50c5, "netif_tx_wake_queue" },
	{ 0x133066b6, "netif_tx_stop_all_queues" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2c79d4a6, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x46adf060, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x9ee10cc, "free_netdev" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x762d0500, "register_netdev" },
	{ 0xc071caf8, "wireless_send_event" },
	{ 0xea25b7f0, "usb_control_msg" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x652032cb, "mac_pton" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd358444d, "skb_pull" },
	{ 0x11f2d12f, "device_init_wakeup" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x44fbe870, "flush_signals" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xdc798f36, "lib80211_get_crypto_ops" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0xe960948a, "netif_device_attach" },
	{ 0x274be093, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbf5cf4fe, "usb_get_dev" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x52b3f42d, "usb_reset_device" },
	{ 0x63445814, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x1bc96e98, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfc5aa6d6, "eth_type_trans" },
	{ 0xccbfa2b7, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe687917b, "ether_setup" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x95c5dbcf, "netdev_warn" },
	{ 0x16ec675a, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x35683729, "dev_alloc_name" },
	{ 0x96848186, "scnprintf" },
	{ 0x17a49bf7, "usb_register_driver" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0xf4c53e6a, "unregister_netdev" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x4319b67, "skb_put" },
	{ 0x5dc34244, "eth_mac_addr" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x82824194, "param_ops_uint" },
	{ 0x6cf8ef42, "skb_copy_bits" },
	{ 0x3c44f617, "usb_free_urb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x760a0f4f, "yield" },
	{ 0xe4eb5988, "usb_alloc_urb" },
	{ 0xbfa13aaa, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "compat,cfg80211,lib80211");

MODULE_ALIAS("usb:v0BDAp8179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p18F0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p331Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C4Ep0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0076d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDApFFEFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F0CF37E3E515A86A38BDCF6");
