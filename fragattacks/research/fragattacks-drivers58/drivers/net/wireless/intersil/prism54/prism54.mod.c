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
	{ 0x160b81db, "iw_handler_set_thrspy" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x53b954a2, "up_read" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x4674b4c4, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xf7b8a4c4, "pci_read_config_byte" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xb4b5ed8d, "dma_set_mask" },
	{ 0x443211a9, "pci_disable_device" },
	{ 0x31964620, "netif_carrier_on" },
	{ 0x6ba5d574, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xdbb15182, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x162c7083, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa70fc922, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf43e904a, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x960eebcc, "netif_rx" },
	{ 0x7bb66ea5, "wireless_spy_update" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x84e78855, "pci_set_master" },
	{ 0xfb578fc5, "memset" },
	{ 0xcc63c78, "dma_sync_single_for_cpu" },
	{ 0xa70f50c5, "netif_tx_wake_queue" },
	{ 0x1cea87bb, "pci_restore_state" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2c79d4a6, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xde80cd09, "ioremap" },
	{ 0x331568ae, "iw_handler_get_spy" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9ee10cc, "free_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0x762d0500, "register_netdev" },
	{ 0xc071caf8, "wireless_send_event" },
	{ 0xc3176b85, "dma_alloc_attrs" },
	{ 0xc6c4403f, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfc11ad12, "__dev_kfree_skb_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd358444d, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x29e78802, "skb_copy_expand" },
	{ 0xe960948a, "netif_device_attach" },
	{ 0x66734229, "netif_device_detach" },
	{ 0xa916b694, "strnlen" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x51a18b45, "iw_handler_get_thrspy" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0x7d398840, "pci_read_config_dword" },
	{ 0xfc5aa6d6, "eth_type_trans" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xfc5c1ad6, "pci_try_set_mwi" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x16ec675a, "eth_validate_addr" },
	{ 0xed5dac8, "pci_clear_mwi" },
	{ 0x92eb3a68, "iw_handler_set_spy" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x62f5a5f7, "pci_request_regions" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xedc03953, "iounmap" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x7fcc6290, "dma_unmap_page_attrs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf4c53e6a, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x4319b67, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0xa2b2d1bd, "pci_enable_device" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x64756ab8, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xbfa13aaa, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "compat");

MODULE_ALIAS("pci:v00001260d00003890sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d00003877sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d00003886sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5FC3BB75E06268A4188CE0D");
