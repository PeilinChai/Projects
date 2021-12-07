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
	{ 0xf6f0a7b4, "param_ops_bool" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0xbf0d8387, "ieee80211_start_tx_ba_session" },
	{ 0x6125581a, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xabbe198c, "ieee80211_stop_tx_ba_session" },
	{ 0x683864c8, "ieee80211_restart_hw" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0xd3f34109, "device_release_driver" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x3d9a3929, "_dev_warn" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd4950484, "ieee80211_beacon_get_tim" },
	{ 0x5772d5a6, "ieee80211_find_sta" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x45fcd76d, "__dynamic_dev_dbg" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf34236d4, "pci_iomap" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0x84e78855, "pci_set_master" },
	{ 0x62f5a5f7, "pci_request_regions" },
	{ 0xa2b2d1bd, "pci_enable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbef46c54, "_dev_notice" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2c79d4a6, "current_task" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x6410fc47, "skb_copy" },
	{ 0x62aeab48, "ieee80211_rx_irqsafe" },
	{ 0x4319b67, "skb_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x20b266ed, "ieee80211_queue_work" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xa6257a2f, "complete" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xc3176b85, "dma_alloc_attrs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x443211a9, "pci_disable_device" },
	{ 0x162c7083, "pci_release_regions" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x105b029f, "pci_iounmap" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0x76f1ab71, "ieee80211_stop_queues" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x3d9522d8, "kfree_skb" },
	{ 0xc5850110, "printk" },
	{ 0x5b0f88c8, "request_firmware" },
	{ 0x41cff8cd, "request_firmware_nowait" },
	{ 0x23709d1f, "_dev_err" },
	{ 0x4defb929, "pskb_expand_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xc6c4403f, "skb_push" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x5463afa5, "ieee80211_wake_queues" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc6435732, "dev_printk" },
	{ 0xafe8b001, "ieee80211_channel_to_freq_khz" },
	{ 0xa70fc922, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0xd8d87ad7, "ieee80211_find_sta_by_ifaddr" },
	{ 0xd358444d, "skb_pull" },
	{ 0x91c1b488, "ieee80211_tx_status_irqsafe" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x7fcc6290, "dma_unmap_page_attrs" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf43e904a, "pv_ops" },
};

MODULE_INFO(depends, "compat,mac80211,cfg80211");

MODULE_ALIAS("pci:v000011ABd00002A0Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B36sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C87BC22420CE680E322B845");
