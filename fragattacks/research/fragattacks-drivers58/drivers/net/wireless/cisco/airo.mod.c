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
	{ 0x160b81db, "iw_handler_set_thrspy" },
	{ 0x85bd1608, "__request_region" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x443211a9, "pci_disable_device" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x31964620, "netif_carrier_on" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xafe8b001, "ieee80211_channel_to_freq_khz" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x6ba5d574, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1aea760b, "remove_proc_entry" },
	{ 0xf0e0669c, "__dev_kfree_skb_any" },
	{ 0x671fb96e, "init_user_ns" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x76ecc608, "proc_set_user" },
	{ 0xf6520ec2, "pci_enable_wake" },
	{ 0xa70fc922, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc58b3926, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc3ebfb0, "skb_trim" },
	{ 0x22dfc554, "crypto_alloc_sync_skcipher" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x960eebcc, "netif_rx" },
	{ 0x5ca60fd5, "make_kgid" },
	{ 0x7bb66ea5, "wireless_spy_update" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x827dc68f, "PDE_DATA" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x1036e3df, "param_ops_charp" },
	{ 0x84e78855, "pci_set_master" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x49689033, "default_llseek" },
	{ 0xa70f50c5, "netif_tx_wake_queue" },
	{ 0x1cea87bb, "pci_restore_state" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2c79d4a6, "current_task" },
	{ 0x8666a9e6, "freezing_slow_path" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xc5850110, "printk" },
	{ 0xdd8932b9, "kthread_stop" },
	{ 0xde80cd09, "ioremap" },
	{ 0x331568ae, "iw_handler_get_spy" },
	{ 0x9ee10cc, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x762d0500, "register_netdev" },
	{ 0xc071caf8, "wireless_send_event" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xc3176b85, "dma_alloc_attrs" },
	{ 0x652032cb, "mac_pton" },
	{ 0xfc11ad12, "__dev_kfree_skb_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1d12356, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe960948a, "netif_device_attach" },
	{ 0x66734229, "netif_device_detach" },
	{ 0xa916b694, "strnlen" },
	{ 0xf92d0022, "make_kuid" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x51a18b45, "iw_handler_get_thrspy" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x1bc96e98, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xfc5aa6d6, "eth_type_trans" },
	{ 0x1ca6b869, "crypto_destroy_tfm" },
	{ 0xccbfa2b7, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0xe687917b, "ether_setup" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5a43b62d, "crypto_skcipher_setkey" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xea4f28e8, "pci_set_power_state" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc9e85ac7, "remove_proc_subtree" },
	{ 0x858a180f, "proc_create_data" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0x16ec675a, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x92eb3a68, "iw_handler_set_spy" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6dc5908e, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x35193325, "proc_mkdir_mode" },
	{ 0xcf2a6966, "up" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0xe250d2f6, "skb_dequeue" },
	{ 0xf4c53e6a, "unregister_netdev" },
	{ 0x6293f934, "pci_choose_state" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x4319b67, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0xa2b2d1bd, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x223089b8, "__skb_pad" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x64756ab8, "pci_save_state" },
	{ 0xa655c8f5, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "compat,cfg80211");

MODULE_ALIAS("pci:v000014B9d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00004800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00000340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00000350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00005000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d0000A504sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3D4444A59E3CAB5F058AC49");
