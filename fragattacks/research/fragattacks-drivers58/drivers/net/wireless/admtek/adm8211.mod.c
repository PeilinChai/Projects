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
	{ 0x82824194, "param_ops_uint" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x35647571, "pci_unregister_driver" },
	{ 0xb7c1f8ae, "__pci_register_driver" },
	{ 0xb43a926b, "backport_dependency_symbol" },
	{ 0x92160849, "ieee80211_wake_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x62aeab48, "ieee80211_rx_irqsafe" },
	{ 0xcc57d0bb, "dma_sync_single_for_device" },
	{ 0x4319b67, "skb_put" },
	{ 0xcc63c78, "dma_sync_single_for_cpu" },
	{ 0xf43e904a, "pv_ops" },
	{ 0x91c1b488, "ieee80211_tx_status_irqsafe" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x23709d1f, "_dev_err" },
	{ 0xf7b8a4c4, "pci_read_config_byte" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe56c30dc, "pci_set_mwi" },
	{ 0x65d5bb87, "__netdev_alloc_skb" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x38246c39, "ieee80211_stop_queue" },
	{ 0x2758776d, "ieee80211_free_txskb" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe7ebbfa, "dev_driver_string" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf0883847, "dma_map_page_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc6c4403f, "skb_push" },
	{ 0xd358444d, "skb_pull" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xeb80f28, "_dev_info" },
	{ 0x41db471a, "ieee80211_register_hw" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc5850110, "printk" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x4fd3ff86, "kmem_cache_alloc_trace" },
	{ 0x1c03e593, "kmalloc_caches" },
	{ 0xc3176b85, "dma_alloc_attrs" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf34236d4, "pci_iomap" },
	{ 0x8ff24440, "ieee80211_alloc_hw_nm" },
	{ 0x84e78855, "pci_set_master" },
	{ 0xdea73d77, "dma_set_coherent_mask" },
	{ 0xb4b5ed8d, "dma_set_mask" },
	{ 0x62f5a5f7, "pci_request_regions" },
	{ 0x7d398840, "pci_read_config_dword" },
	{ 0xa2b2d1bd, "pci_enable_device" },
	{ 0x7b94cd7b, "consume_skb" },
	{ 0x7fcc6290, "dma_unmap_page_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xc6435732, "dev_printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa78af5f3, "ioread32" },
	{ 0x6499f456, "ieee80211_free_hw" },
	{ 0x443211a9, "pci_disable_device" },
	{ 0x162c7083, "pci_release_regions" },
	{ 0x105b029f, "pci_iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xa70fc922, "dma_free_attrs" },
	{ 0xee15e476, "ieee80211_unregister_hw" },
	{ 0x6293f934, "pci_choose_state" },
	{ 0x64756ab8, "pci_save_state" },
	{ 0x1cea87bb, "pci_restore_state" },
	{ 0xea4f28e8, "pci_set_power_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "compat,mac80211,cfg80211,eeprom_93cx6");

MODULE_ALIAS("pci:v000010B7d00006000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001200d00008201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00008201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00008211sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D97D1D1EB9804CA8A2BB171");
